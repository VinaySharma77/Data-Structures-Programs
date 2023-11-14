#include <stdio.h>

int main(){
    char arr[50];
    int i, count = 0;
    printf("Enter a string : ");
    gets(arr);
    for(i = 0; arr[i] != '\0'; i++){
        if(arr[i] == ' '){
            count++;
        }
    }
    printf("Total Spaces in string are : %d", count);
    return 0;
}