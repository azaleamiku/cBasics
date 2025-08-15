#include <stdio.h>

int main() {
    char favoriteAnimal[50];
    printf("What is your favorite Animal? ");
    scanf("%s", &favoriteAnimal);

    printf("A %s is a cool animal!\n", favoriteAnimal);

    return 0;
}