#include <stdio.h>
#include <string.h>

struct Hero {
    char name[20];
    int health;
    int power;
};

int main(void) {
    struct Hero h;
    strcpy(h.name, "Link");
    h.health = 100;
    h.power = 75;

    printf("%s has %d health and %d power!\n", h.name, h.health, h.power);
    return 0;
}