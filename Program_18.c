#include <stdio.h>

int main(){
    char arr[50];
    int i, alpha = 0, num = 0, special = 0, space = 0;
    printf("Enter the string : ");
    gets(arr);
    for(i = 0; arr[i] != '\0'; i++){
        if(arr[i] >= 97 && arr[i] <= 122){
            printf("%c alphabet\n",arr[i]);
        }
        else if(arr[i] >= 65 && arr[i] <= 90){
            printf("%c alphabet\n",arr[i]);
        }
        else if(arr[i] >=48 && arr[i] <= 57){
            printf("%c number\n",arr[i]);
        }
        else if(arr[i] == 32){
            printf("%c space\n",arr[i]);
        }
        else{
            printf("%c Special character\n",arr[i]);
        }
    }
    return 0;
}