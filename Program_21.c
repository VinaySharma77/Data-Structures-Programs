#include <stdio.h>

int main(){
    char arr[50];
    int i;
    printf("Enter uppercase string : ");
    gets(arr);
    printf("Lowercase string is : ");
    for(i = 0; arr[i] != '\0'; i++){
        if(arr[i] >= 65 && arr[i] <= 90){
            arr[i] = arr[i] + 32;
        }
    }
    printf("%s", arr);
    return 0;
}