#include <stdio.h>

void main() {
	int i,j;
	
	for (i = 1; i <= 5; ++i) {
        // Print spaces
        for (j = 1; j <= 5 - i; ++j) {
            printf(" ");
        }
        // Print numbers increasing up to row number
        for (j = 1; j <= i; ++j) {
            printf("%d", j);
        }
        // Print numbers decreasing from row number - 1 to 1
        for (j = i - 1; j >= 1; --j) {
            printf("%d", j);
        }
        printf("\n");
    }

   
}
