#include <stdio.h>

int main(void) {
    int toy = 5;
    int *map = &toy;

    printf("Toy is %d\n", toy);
    printf("Map says toy lives at %p\n", (void*)map);
    printf("Map let's us open the box: %d\n", *map);
    return 0;
}