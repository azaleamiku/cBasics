#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASK_LENGTH 100

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void add_task() {
    char task[MAX_TASK_LENGTH];
    FILE *fp;

    fp = fopen("toDo.txt", "a");
    if (fp == NULL) {
        printf("Error opening file\n");
        return;
    }

    clear_input_buffer(); // Clear the newline left by scanf
    printf("Enter a task: ");
    if (fgets(task, MAX_TASK_LENGTH, stdin) != NULL) {
        fprintf(fp, "%s", task);
    }

    fclose(fp);
    printf("Task added successfully!\n");
}

void view_tasks() {
    char task[MAX_TASK_LENGTH];
    FILE *fp;
    int i = 1;

    fp = fopen("toDo.txt", "r");
    if (fp == NULL) {
        printf("No tasks found. The file 'toDo.txt' does not exist or is empty.\n");
        return;
    }

    printf("\n--- Task List ---\n");
    while (fgets(task, MAX_TASK_LENGTH, fp) != NULL) {
        printf("[%d] %s", i, task);
        i++;
    }
    printf("-------------------\n");

    fclose(fp);
}

void delete_task() {
    char task[MAX_TASK_LENGTH];
    FILE *fp_read, *fp_write;
    int line_to_delete, current_line = 1;
    
    view_tasks(); // Show tasks so the user knows which one to delete
    printf("Enter the number of the task to delete: ");
    scanf("%d", &line_to_delete);
    
    fp_read = fopen("toDo.txt", "r");
    if (fp_read == NULL) {
        printf("No tasks to delete. The file 'toDo.txt' does not exist.\n");
        return;
    }

    fp_write = fopen("temp.txt", "w");
    if (fp_write == NULL) {
        printf("Error creating temporary file\n");
        fclose(fp_read);
        return;
    }

    while (fgets(task, MAX_TASK_LENGTH, fp_read) != NULL) {
        if (current_line != line_to_delete) {
            fprintf(fp_write, "%s", task);
        }
        current_line++;
    }
    
    fclose(fp_read);
    fclose(fp_write);

    remove("toDo.txt"); // Delete the original file
    rename("temp.txt", "toDo.txt"); // Rename the temporary file to the original
    printf("Task deleted successfully!\n");
}

int main(void) {
    int input;

    while (1) {
        printf("\n--- To Do Program ---\n");
        printf("[1] Add a task\n");
        printf("[2] View task list\n");
        printf("[3] Delete a task\n");
        printf("[4] Exit\n");
        printf("What do you want to do? ");
        scanf("%d", &input);
        
        if (input == 1) {
            add_task();
        } else if (input == 2) {
            view_tasks();
        } else if (input == 3) {
            delete_task();
        } else if (input == 4) {
            printf("Exiting...\n");
            break;
        } else {
            printf("Invalid option. Please try again.\n");
        }
    }
    return 0;
}