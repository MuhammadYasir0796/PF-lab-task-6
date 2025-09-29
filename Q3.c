#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char pin[]="01234";
    char userInput[6];
    while(true){
        printf("Enter the PIN: ");
        fgets(userInput,sizeof(userInput),stdin);
        if(strcmp(pin,userInput)==0){
            break;
        }
        printf("Wrong PIN.\n");
        continue;
    }
    printf("Welcome user.");
return 0;
}