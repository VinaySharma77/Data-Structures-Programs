#include <stdio.h>

int main(){
    char arr[50];
    int i, alpha = 0, num = 0, special = 0, space = 0;
    printf("Enter some value : ");
    gets(arr);
    for(i = 0; arr[i] != '\0'; i++){
        if(arr[i] >= 97 && arr[i] <= 122){
            alpha++;
        }
        else if(arr[i] >= 65 && arr[i] <= 90){
            alpha++;
        }
        else if(arr[i] >=48 && arr[i] <= 57){
            num++;
        }
        else if(arr[i] == 32){
            space++;
        }
        else{
            special++;
        }
    }
    printf("Alphabets in text are : %d\nNumbers in text are : %d\nSpeical Characters in text are : %d\nSpaces in text are : %d", alpha, num, special, space);
    return 0;
}