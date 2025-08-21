#include <stdio.h>

int main() {
    char word[100];
    int length = 0;
    int vowels = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    for (int i = 0; word[i] != '\0'; i++) {
        printf("%c\n", word[i]);
        if(word[i]=='a' || word[i]=='e' || word[i]=='i' ||
           word[i]=='o' || word[i]=='u' || word[i]=='A' ||
           word[i]=='E' || word[i]=='I' || word[i]=='O' ||
           word[i]=='U') 
        {
            ++vowels;
        }
        length++;
    }

    printf("Length = %d\n", length);
    printf("%s\n", word);
    printf("%d\n", vowels);

    return 0;
}
