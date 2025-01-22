#include <stdio.h>

int main() {
    int c;

    printf("Type some input (Ctrl+D to end on Unix/Linux or Ctrl+Z on Windows):\n");
    while ((c = getchar()) != EOF) {
        printf("getchar() != EOF: %d\n", c != EOF);
    }

    printf("getchar() != EOF: %d\n", c != EOF);
    printf("EOF: %d\n", EOF);
    return 0;
}
