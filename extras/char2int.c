#include <stdio.h>

int main(void) {
    char a;
    printf("character: ");
    scanf("%c", &a);
    printf("integer: %d", a - '0');
    return 0;
}
