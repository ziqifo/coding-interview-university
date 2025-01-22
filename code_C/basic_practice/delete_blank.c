# include <stdio.h>

int main(){
    int c;
    int prev_char = 0;

    while ((c = getchar()) != EOF){
        if (!(c == ' ' && prev_char == ' ')){
            putchar(c);
        }
        prev_char = c;
    }
    return 0;
}