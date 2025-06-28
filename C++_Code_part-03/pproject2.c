#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Patient {
    char name[50];
    int age;
    // Add more patient attributes as needed
};

struct Patient *patients = NULL;
int numPatients = 0;

// Function prototypes
void addPatient();
void readPatient();
void updatePatient();
void deletePatient();
void printAllPatients();

int main() {
    int choice;

    do {
        printf("\n--- Clinic Management Menu ---\n");
        printf("1. Add a new patient\n");
        printf("2. Read patient information\n");
        printf("3. Update patient information\n");
        printf("4. Delete a patient\n");
        printf("5. Print all patients\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPatient();
                break;
            case 2:
                readPatient();
                break;
            case 3:
                updatePatient();
                break;
            case 4:
                deletePatient();
                break;
            case 5:
                printAllPatients();
                break;
            case 6:
                // Free allocated memory before exiting
                free(patients);
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (1);

    return 0;
}

void addPatient() {
    struct Patient newPatient;

    // Input patient details
    printf("Enter patient name: ");
    scanf("%s", newPatient.name);
    printf("Enter patient age: ");
    scanf("%d", &newPatient.age);

    // Reallocate memory to store the new patient
    patients = (struct Patient *)realloc(patients, (numPatients + 1) * sizeof(struct Patient));
    if (patients == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }

    // Add the new patient to the array
    patients[numPatients] = newPatient;
    numPatients++;

    printf("Patient added successfully.\n");
}

void readPatient() {
    if (numPatients == 0) {
        printf("No patients to read.\n");
        return;
    }

    char nameToRead[50];
    printf("Enter the name of the patient to read: ");
    scanf("%s", nameToRead);

    int found = 0;
    for (int i = 0; i < numPatients; i++) {
        if (strcmp(nameToRead, patients[i].name) == 0) {
            printf("Patient Information:\n");
            printf("Name: %s\n", patients[i].name);
            printf("Age: %d\n", patients[i].age);
            // Print more attributes if needed
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Patient not found.\n");
    }
}

void updatePatient() {
    if (numPatients == 0) {
        printf("No patients to update.\n");
        return;
    }

    char nameToUpdate[50];
    printf("Enter the name of the patient to update: ");
    scanf("%s", nameToUpdate);

    int found = 0;
    for (int i = 0; i < numPatients; i++) {
        if (strcmp(nameToUpdate, patients[i].name) == 0) {
            printf("Enter new age for the patient: ");
            scanf("%d", &patients[i].age);
            // Update more attributes if needed
            printf("Patient information updated successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Patient not found.\n");
    }
}

void deletePatient() {
    if (numPatients == 0) {
        printf("No patients to delete.\n");
        return;
    }

    char nameToDelete[50];
    printf("Enter the name of the patient to delete: ");
    scanf("%s", nameToDelete);

    int found = 0;
    for (int i = 0; i < numPatients; i++) {
        if (strcmp(nameToDelete, patients[i].name) == 0) {
            // Shift the remaining elements to the left
            for (int j = i; j < numPatients - 1; j++) {
                patients[j] = patients[j + 1];
            }
            numPatients--;

            // Reallocate memory after deleting the patient
            patients = (struct Patient *)realloc(patients, numPatients * sizeof(struct Patient));
            printf("Patient deleted successfully.\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Patient not found.\n");
    }
}

void printAllPatients() {
    if (numPatients == 0) {
        printf("No patients to print.\n");
        return;
    }

    printf("List of all patients:\n");
    for (int i = 0; i < numPatients; i++) {
        printf("%d. %s (Age: %d)\n", i + 1, patients[i].name, patients[i].age);
    }
}
