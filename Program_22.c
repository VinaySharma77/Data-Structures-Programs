#include <stdio.h>

int main(){
    char arr[50];
    int i;
    printf("Enter the string : ");
    gets(arr);
    printf("Title case string is : ");
    for(i = 0; arr[i] != '\0'; i++){
        if(arr[i] >= 97 && arr[i] <= 122 || arr[i] >= 65 && arr[i] <= 90){
            if(i == 0 || arr[i-1] == 32){
                if(arr[i] >= 97 && arr[i] <= 122){
                    arr[i] = arr[i] - 32;
                }
            }
            else{
                if(arr[i] >=65 && arr[i] <= 90){
                    arr[i] = arr[i] + 32;
                }
            }
        }
    }
    printf("%s", arr);
    return 0;
}