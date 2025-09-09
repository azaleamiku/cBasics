#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE *fp;
    int choice;
    char name[50];
    int roll;
    int deleteRoll;
    int found;
    float marks;

    while (1) {
        printf("\n--- Student Record Manager ---\n");
        printf("[1] Add Student Record\n");
        printf("[2] View All Records\n");
        printf("[3] Delete Records\n");
        printf("[4] Exit\n");
        printf("Enter your choice: ");

        if(scanf("%d", &choice) != 1) {
            printf("Please Enter a Number!\n");
            return 0;
        }

        if (choice == 1) {
            fp = fopen("student.txt", "a");
            if(fp == NULL) {
                printf("Error opening file!\n");
                exit(1);
            }

            printf("Enter Name (No Spaces): ");
            scanf("%49s", name);
            printf("Enter Roll Number: ");
            scanf("%d", &roll);
            printf("Enter Marks: ");
            scanf("%f", &marks);

            fprintf(fp, "%s %d %.2f\n", name, roll, marks);

            fclose(fp);
            printf("Record added!\n");
        } else if (choice == 2) {
            fp = fopen("student.txt", "r");
            if (fp == NULL) {
                printf("No records yet. Try adding one!\n");
                continue;
            }
            printf("\n--- Student Records ---\n");
            while (fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3) {
                printf("Name: %s | Roll: %d | Marks: %.2f\n", name, roll, marks);
            }
            fclose(fp);
        } else if (choice == 3) {
            fp =fopen("student.txt", "r");
            if (fp == NULL) {
                printf("No records to delete.\n");
                continue;
            }
        
            FILE *temp = fopen("temp.txt", "w");
            if(temp == NULL) {
                printf("Error creating temporary file.\n");
                fclose(fp);
                continue;
            }

            printf("Enter Roll number of student to delete: ");
            scanf("%d", &deleteRoll);

            found = 0;

            while (fscanf(fp, "%49s %d %f", name, &roll, &marks) == 3) {
                if(roll != deleteRoll) {
                    fprintf(temp, "%s %d %.2f\n", name, &roll, &marks);
                } else {
                    found = 1;
                }
            }

            fclose(fp);
            fclose(temp);

            remove("student.txt");
            rename("temp.txt", "student.txt");

            if (found) {
                printf("Record deleted successfully!\n");
            } else {
                printf("No record found with the Roll number %d.\n", deleteRoll);
            }

        } else if (choice == 4) {
            printf("Closing...\n");
            break;
        } else {
            printf("Invalid choice! [1, 2, 3 or 4 only.]\n");
        }   
    }
    return 0;
}