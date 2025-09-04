#include <stdio.h>
#include "internalLinkage1.1.c"

extern int animals;

int main(void) {
    printf("Total: %d Animals!\n", animals);
    return 0;
}