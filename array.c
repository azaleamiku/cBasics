#include <stdio.h>

int main() {
    int scores[5] = {95, 88, 76, 92, 100};

    int first_score = scores[0];

    int last_score = scores[4];

    int second_score = scores[1];

    scores[2] = 80;

    printf("The first score is %d, and the last score is %d, also the second score is %d\n", first_score, last_score, second_score);

    printf("All the numbers listed are: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    return 0;

}
