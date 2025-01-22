#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main() {
    /* Fahrenheit to Celsius */
    printf("Fahrenheit to Celsius\n");
    float fahr, celsius;

    fahr = LOWER;
    while (fahr <= UPPER) {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr += STEP;
    }

    /* Celsius to Fahrenheit */
    printf("\nConvert Celsius to Fahrenheit\n");
    int celsius_temp;

    for (celsius_temp = -20; celsius_temp <= 150; celsius_temp += 10) {
        fahr = (9.0 / 5.0) * celsius_temp + 32.0;
        printf("%3d %6.1f\n", celsius_temp, fahr);
    }

    /* Display in reverse order */
    printf("\nDisplay in reverse order\n");
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        printf("%3.0f %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }

    return 0;
}
