#include <stdio.h>

int main() {
    int c, prev = '\n';

    printf("Enter text (Ctrl+D to end):\n");

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (prev != '\n') {
                putchar('\n');
            }
        } else {
            putchar(c);
        }
        prev = c;
    }

    return 0;
}
