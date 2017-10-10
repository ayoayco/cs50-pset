#include <stdio.h>
#include <string.h>

int main(void) {
    char name[30];
    printf("Hello! Can I ask for your name?");
    scanf("%s", &name);
    printf("Your name is %s", name);
    return 0;
}
