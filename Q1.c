#include <stdio.h>

int main( ) {
    int number,factorial=1;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=number;i>=1;i--){
        factorial *= i;
    }
    printf("Factorial is: %d",factorial);
    return 0;
}
