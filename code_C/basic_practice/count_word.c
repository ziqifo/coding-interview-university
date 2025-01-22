#include <stdio.h>

#define IN 1   // Define a state for being inside a word
#define OUT 0  // Define a state for being outside a word

/* 
 * Program to count lines, words, and characters in input.
 */
int main() {
    int c, nl, nw, nc, state;

    state = OUT;  // Start with the state set to OUT (outside a word)
    nl = nw = nc = 0;  // Initialize line count (nl), word count (nw), and character count (nc) to 0

    while ((c = getchar()) != EOF) {  // Read each character until the end of the input (EOF)
        ++nc;  // Increment the character count for every character read

        if (c == '\n')  // If the character is a newline ('\n'), increment the line count
            ++nl;

        // Check if the character is a whitespace (space, newline, or tab)
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;  // Set the state to OUT (outside a word)
        } else if (state == OUT) {  
            // If the character is not a whitespace and we were outside a word:
            state = IN;   // Change the state to IN (inside a word)
            ++nw;         // Increment the word count, as we've started a new word
        }
    }

    // Print the total counts for lines, words, and characters
    printf("%d %d %d\n", nl, nw, nc);

    return 0;  // Return 0 to indicate the program ran successfully
}
