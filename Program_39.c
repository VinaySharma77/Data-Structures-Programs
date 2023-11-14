#include <stdio.h>

int main(){
    char arr[100];
    int i;
    printf("Enter a string : ");
    scanf("%s", arr);
    for(i = 0; arr[i] != '\0'; i++){
        if(arr[i] >=97 && arr[i] <= 122){
            printf("%c = %d\n", arr[i], arr[i]);
        }
        else if(arr[i] >= 65 && arr[i] <= 90){
            printf("%c = %d\n", arr[i], arr[i]);
        }
    }
    return 0;
}