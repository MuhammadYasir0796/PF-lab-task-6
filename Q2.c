#include <stdio.h>
#include <stdlib.h>

int main() {
    int N,tempN,reveresedNumber=0;
    printf("Enter number: ");
    scanf("%d",&N);
    int i;
    for( i=1;N>=1;i++){
        tempN=N%10;
        reveresedNumber=reveresedNumber*10+tempN;
        N=N/10;
    }
        printf("%d",reveresedNumber);
    return 0;
}
