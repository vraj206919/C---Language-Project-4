#include <stdio.h>

int main() {
    int i, j;
    int n = 5;    

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
         
            if (j == 0 || i == 0 || i == 2 || (j == 4 && i < 2)) {
                printf("*  ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}