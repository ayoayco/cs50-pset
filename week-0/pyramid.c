#include <stdio.h>

int main(void) {
    int col;
    printf("Columns: ");
    scanf("%d", &col);
    for(int i=0; i<col; i++) {
        for(int j=col-i; j>0; j--) {
            printf(" ");
        }
        for(int k=0; k<i+1; k++) {
            printf("#");
        }
        printf(" ");
        for(int k=0; k<i+1; k++) {
            printf("#");
        }
        for(int j=col-i; j>0; j--) {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
