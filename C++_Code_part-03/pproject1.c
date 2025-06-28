#include <stdio.h>
#include <string.h>

#define MAX_PATIENTS 100

struct Patient {
    char name[50];
    int age;
    // Add more patient attributes as needed
};

struct Patient patients[MAX_PATIENTS];
int numPatients = 0;

// Function prototypes
void addPatient();
void deletePatient();
void readPatient();
void printAllPatients();

int main() {
    int choice;

    do {
        printf("\n--- Clinic Management Menu ---\n");
        printf("1. Add a new patient\n");
        printf("2. Delete a patient\n");
        printf("3. Read patient information\n");
        printf("4. Print all patients\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPatient();
                break;
            case 2:
                deletePatient();
                break;
            case 3:
                readPatient();
                break;
            case 4:
                printAllPatients();
                break;
            case 5:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (1);

    return 0;
}

void addPatient() {
    if (numPatients >= MAX_PATIENTS) {
        printf("Error: Maximum number of patients reached.\n");
        return;
    }

    struct Patient newPatient;

    // Input patient details
    printf("Enter patient name: ");
    scanf("%s", newPatient.name);
    printf("Enter patient age: ");
    scanf("%d", &newPatient.age);

    // Add more attributes if needed
    // Example: address, phone number, medical history, etc.

    patients[numPatients] = newPatient;
    numPatients++;

    printf("Patient added successfully.\n");
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
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Patient deleted successfully.\n");
    } else {
        printf("Patient not found.\n");
    }
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
            // Example: address, phone number, medical history, etc.
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

