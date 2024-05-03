#include <stdio.h>

void main() {
    int rows, i, j;
    
    
    // Upper part of the pattern
    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    // Lower part of the pattern
    for (i = 4 - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
  
}
