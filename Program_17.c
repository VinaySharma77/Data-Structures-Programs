#include <stdio.h>

int main(){
    char arr[50];
    int i, count = 0;
    printf("Enter the string: ");
    gets(arr);
    for(i = 0; arr[i] != '\0'; i++){
        if(arr[i] == 32){
            continue;
        }
        else{
            count++;
        }
    }
    printf("Length of the string is : %d", count);
    return 0;
}