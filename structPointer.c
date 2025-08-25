#include <stdio.h>

struct Hero {
    char name[20];
    int power;
};

void swapPower(struct Hero *h1, struct Hero *h2) {
    int temp = h1->power;
    h1->power = h2->power;
    h2->power = temp;
}

int main() {
    struct Hero a = {"Mario", 30};
    struct Hero b = {"Luigi", 50};

    printf("%s has %d power\n", a.name, a.power);
    printf("%s has %d power\n", b.name, b.power);

    swapPower(&a, &b);

    printf("%s now has %d power\n", a.name, a.power);
    printf("%s now has %d power\n", b.name, b.power);

    return 0;
}
