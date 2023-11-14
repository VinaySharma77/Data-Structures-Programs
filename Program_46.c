#include<stdio.h>

int top = -1, stack[50], i;
void push(char value){
    if(top == 50){
        printf("Stack is full");
    }
    else{
        stack[++top] = value;
    }
}

void pop(){
    printf("%c", stack[top--]);
}

int main(){
    char arr[50], count = 0;
    printf("Enter a string : ");
    gets(arr);
    for(i = 0; arr[i]!='\0'; i++){
        count++;
    }
    for(i = 0; i < count; i++){
        push(arr[i]);
    }
    printf("Reversed string is : ");
    for(i = 0; i < count; i++){
        pop();
    }
    return 0;
}