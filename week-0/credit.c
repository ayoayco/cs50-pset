#include <stdio.h>
#include <string.h>

int main(void) {
    char str[256];
    int arr[19];
    int err = 1;
    int ln;
    int sum1 = 0;
    int sum2 = 0;
    int valid = 0;

    do{
        printf("Credit Card #: ");
        scanf("%s", &str);
        ln = strlen(str);
        // printf("length: %d\n", strlen(str));


        if(ln < 17) {
            printf("Your input: %s\n", str);

            //put string characters into array of integers
            for(int i=0; i<ln; i++) {
                arr[i] = str[i] - '0';
                
                // luhn's algo
                if((i+1)%2 == 0){
                    //get digits
                    if(arr[i]*2 >= 10) {
                        printf("1 + %d ", arr[i]*2%10);
                        if(i != ln-1) printf("+ ");
                        sum1 += 1 + (arr[i]*2%10);
                    } else {
                        printf("%d ", arr[i]*2);
                        if(i != ln-1) printf("+ ");
                        sum1 += arr[i]*2;
                    }
                } else {
                    printf("%d ", arr[i]);
                    if(i != ln-1) printf("+ ");
                    sum2 += arr[i];
                }
            }

            sum1 += sum2;
            printf("= %d\n", sum1);
            if(sum1%10 == 0) {
                valid = 1;
            }

            err = 0;
        }
        else {
            err = 1;
            printf("Please check your input, there seems to be too many numbers for me to handle.\n");
        }

    } while(err == 1);
    if(valid == 1) {
        printf("That's valid!");
    } else {
        printf("Hey, that's invalid!");
    }
    return 0;
}
