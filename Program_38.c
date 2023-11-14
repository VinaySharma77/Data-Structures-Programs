#include <stdio.h>

int main(){
    char arr[100];
    int i;
    printf("Enter a number between 0 to 127 : ");
    scanf("%d", arr);
    for(i = 0; arr[i] != '\0'; i++){
        if(arr[i] >= 0 && arr[i] <= 127){
            printf("%d = %c\n", arr[i], arr[i]);
        }
    }
    return 0;
}