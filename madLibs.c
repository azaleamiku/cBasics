#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void trim_newline(char *str) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
}

int main(void) {
    char noun[50];
    char verb[50];
    char adjective1[50];
    char adjective2[50];
    char adjective3[50];
    char playAgain;

    printf("Enter an adjective: ");
    fgets(adjective1, sizeof(adjective1), stdin);
    trim_newline(adjective1);

    printf("Enter a noun: ");
    fgets(noun, sizeof(noun), stdin);
    trim_newline(noun);

    printf("Enter another adjective: ");
    fgets(adjective2, sizeof(adjective2), stdin);
    trim_newline(adjective2);

    printf("Enter a verb (ending with \"-ing\"): ");
    fgets(verb, sizeof(verb), stdin);
    trim_newline(verb);

    printf("Enter another adjective: ");
    fgets(adjective3, sizeof(adjective3), stdin);
    trim_newline(adjective3);

    printf("Last night, I went into a %s haunted house.\n", adjective1);
    printf("Inside, I found a %s sitting in the corner.\n", noun);
    printf("The %s was %s and started %s!\n", noun, adjective2, verb);
    printf("I ran away feeling very %s!\n", adjective3);

    printf("\nWould you like to play again? (y/n): ");
    scanf(" %c", &playAgain);
    getchar(); 
    printf("\n");

    
    return 0;
}
