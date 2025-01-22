#include <stdio.h>

/* Count the characters in input */
int main() {
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;

    printf("Total characters: %.0f\n", nc);
    return 0;
}
