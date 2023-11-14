#include <stdio.h>

char arr[50];
int top = -1, i, result = 0;

void push(char bracket){
    arr[++top] = bracket;
}

int pop(){
    int prev = top - 1;
    if((arr[prev] == '{' && arr[top] == '}' || (arr[prev] == '(' && arr[top] == ')' || arr[prev] == '[' && arr[top] == ']'))){
        top = top - 2;
        result = 0;
    }
    else{
        result++;
        return 1;
    }
}

int main(){
    char exp[50];
    int length = 0;
    printf("Enter an expression for bracket matching : ");
    gets(exp);
    for(i = 0; exp[i] != '\0'; i++){
        length++;
    }
    for(i = 0; i < length; i++){
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
            push(exp[i]);
            pop();
        }
        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']'){
            push(exp[i]);
            pop();
        }
    }
    if(result == 0){
        printf("It is Balanced expression");
    }
    else{
        printf("It is not balanced expression !!");
    }
    return 0;
}