#include <stdio.h>

void main() {
    int i, j;

    for (i = 1; i <= 4; i++) {
        // Print spaces
        for (j = 1; j <= 4 - i; j++) {
            printf(" ");
        }
        // Print dots
        for (j = 1; j <= 2 * i - 1; j++) 
        printf("\n");
    }

   
}
