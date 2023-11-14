#include <stdio.h>

int main(){
    char arr[100], choice, replace;
    int i;
    printf("Enter a string : ");
    gets(arr);
    printf("Which character you want to replace : ");
    gets(&choice);
    printf("By which character you want to replace it : ");
    gets(&replace);
    for(i = 0; arr[i] != '\0'; i++){
        if(arr[i] == choice){
            arr[i] = replace;
        }
    }
    printf("Now string is : %s", arr);
    printf("\nValue replaced");
    return 0;
}