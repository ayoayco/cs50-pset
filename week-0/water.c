#include <stdio.h>

int main(void) {
    int min;
    printf("input number of minutes in shower: "); 
    scanf("%d", &min);
    printf("minutes: %d\n", min);
    printf("bottles: %d\n", min*12);
    return 0;
}
