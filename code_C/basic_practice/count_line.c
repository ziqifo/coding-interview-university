#include <stdio.h>

int main() {
    int c;
    int nl = 0;
    int tab = 0;
    int blank = 0;

    /* assign getchar() to c, and compare c and EOF*/
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
        else if (c == '\t') {
            ++tab;
        }
        else if (   c == ' ')
        {
            ++blank;
        }
        
    }

    printf("Number of lines: %d\n", nl);
    printf("Number of tabs: %d\n", tab);
    printf("Number of blanks: %d\n", blank);
    
    return 0;
}
