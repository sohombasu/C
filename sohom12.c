#include <stdio.h>

void main() {
    int i, j;


    for (i = 4; i >= 1; --i) {
        // Print spaces before the stars
        for (j = 0; j < 4 - i; ++j) {
            printf(" ");
        }
        // Print stars
        for (j = 0; j < 2 * i - 1; ++j) {
            printf("*");
        }
        printf("\n");
    }

    
}

