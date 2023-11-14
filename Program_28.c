#include <stdio.h>

int main(){
    char arr1[50], arr2[50];
    int i, count1 = 0, count2 = 0, count = 0;
    printf("Enter first string : ");
    gets(arr1);
    printf("Enter second string : ");
    gets(arr2);
    for(i = 0; arr1[i] != '\0'; i++){
        count1++;
    }
    for(i = 0; arr2[i] != '\0'; i++){
        count2++;
    }
    for(i = 0; i < count1; i++){
        if(arr1[i] == arr2[i]){
            count++;
        }
    }
    if(count == count1){
        printf("Both strings are same");
    }
    else{
        printf("Both strings are not same");
    }
    return 0;
}