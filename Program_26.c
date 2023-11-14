#include <stdio.h>

int main(){
    char arr[50], replace, choice;
    int i;
    printf("Enter a string :");
    gets(arr);
    printf("Which character you want to replace : ");
    scanf("%c %c", &replace, &choice);
    for(i = 0; arr[i] != '\0'; i++){
        if(arr[i] == replace){
            arr[i] = choice;
        }
    }
    printf("After replacing string text is : ");
    printf("%s", arr);
    return 0;
}