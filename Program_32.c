#include <stdio.h>

int main(){
    char arr[50], ch;
    int i;
    printf("Enter a string : ");
    gets(arr);
    printf("Which character you want to remove : ");
    scanf("%c", &ch);
    for(i = 0; arr[i] != '\0'; i++){
        if(arr[i] == ch){
            continue;
        }
        printf("%c", arr[i]);
    }
    return 0;
}