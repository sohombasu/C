#include <stdio.h>

void main() {
    int i, j;


    for (i = 4; i >= 1; i--) {
       
        for (j = 0; j <= 4 - i; j++) {
            printf(" ");
        }
     
        for (j = 0; j < 2 * i - 1; j++) {
             printf("%c", 64+j);
        }
        printf("\n");
    }

    

}

