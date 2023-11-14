#include <stdio.h>

int main(){
    char arr[50], rev[50];
    int begin, end, count = 0, flag;
    printf("Enter a string : ");
    scanf("%s", arr);
    while(arr[count] != '\0')
        count++;
    end = count - 1;
    for(begin = 0; begin < count; begin++){
        rev[begin] = arr[end];
        end--;
    }
    rev[begin] = '\0';
    for(begin = 0; begin < count; begin++){
        if(arr[begin] != rev[begin]){
            flag = 1;
        }
    }
    if(flag == 1){
        printf("%s word is not palindrome", arr);
    }
    else{
        printf("%s word is palindrome", arr);
    }
    return 0;
}