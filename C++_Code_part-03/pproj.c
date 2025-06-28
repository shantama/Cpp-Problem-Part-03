#include <stdio.h>

void addPatient() {
    // Implementation of adding a patient
    printf("Adding a patient...\n");
}

void deletePatient() {
    // Implementation of deleting a patient
    printf("Deleting a patient...\n");
}

void updatePatient() {
    // Implementation of updating a patient
    printf("Updating a patient...\n");
}

void readPatient() {
    // Implementation of reading a patient
    printf("Reading a patient...\n");
}

void printPatient() {
    // Implementation of printing patient information
    printf("Printing patient information...\n");
}

int main() {
    int choice1;

    do {
        printf("1.Patient.\n");
        printf("9.Exit.\n");
        printf("Enter your choice : ");
        scanf("%d", &choice1);

        switch (choice1) {
            case 1: {
                int flag;

                    scanf("%d", &flag);

                    switch (flag) {
                        case 11:
                            addPatient();
                            break;
                        case 12:
                            deletePatient();
                            break;
                        case 13:
                            updatePatient();
                            break;
                        case 14:
                            readPatient();
                            break;
                        case 15:
                            printPatient();
                            break;

                        default:
                            printf("Invalid choice for patient operations.\n");
                            break;



            }
            case 9:
                return 0;
            default:
                printf("Invalid choice.\n");
        }
    }
    }while (1);

    return 0;
    }


