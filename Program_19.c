#include <stdio.h>

int main(){
    char arr[50], rev[50];
    int begin, end, count = 0;
    printf("Enter a string : ");
    gets(arr);
    while(arr[count] != '\0')
        count++;
    end = count - 1;
    for(begin = 0; begin < count; begin++){
        rev[begin] = arr[end];
        end--;
    }
    rev[begin] = '\0';
    printf("Reversed string is : %s", rev);
    return 0;
}