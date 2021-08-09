#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i, j;
    printf("Enter a number:");
    scanf("%u", &a);

    if(a<0){
        printf("\nInvalid input, please enter a positive number\n");
    }
    else{
        for(i=1; i<=a; i++){
            for(j=1; j<=i; j++){
                printf("%u\t", i);
            }
        }
    }

    return 0;
}
