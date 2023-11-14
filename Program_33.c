#include <stdio.h>

int main(){
    char arr[50];
    int i, wordcount = 0;
    printf("Enter a sentence : ");
    gets(arr);
    for(i = 0; arr[i] != '\0'; i++){
        if(arr[i] == 32){
            wordcount++;
        }
    }
    printf("Total words in a sentence are : %d", wordcount + 1);
    return 0;
}