#include<stdio.h>
#include<stdlib.h>
# define MAX 100
int top = -1, i, INT_MIN;
char stack[MAX];
int isFull(){
    return top == MAX - 1;
} 
int isEmpty(){ 
    return top == -1; 
}
void push(char item){
    if (isFull()) 
        return; 
	top++;
	stack[top] = item;
}
int pop(){ 
    if (isEmpty()) 
        return INT_MIN;    
    return stack[top--]; 
} 
int peek(){ 
    if (isEmpty()) 
        return INT_MIN; 
    return stack[top]; 
} 
int checkIfOperand(char ch){
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'); 
} 
int precedence(char ch){ 
    switch (ch){ 
    case '+': 
    case '-': 
        return 1; 

    case '*': 
    case '/': 
        return 2; 

    case '^': 
        return 3; 
    } 
    return -1; 
} 
int getPostfix(char* expression){ 
    int i, j;
    for (i = 0, j = -1; expression[i]; ++i){ 
        if(checkIfOperand(expression[i])) 
            expression[++j] = expression[i]; 
        else if(expression[i] == '(') 
            push(expression[i]);  
        else if(expression[i] == ')'){ 
            while(!isEmpty(stack) && peek(stack) != '(') 
                expression[++j] = pop(stack); 
            if(!isEmpty(stack) && peek(stack) != '(') 
                return -1;         
            else
                pop(stack); 
        } 
        else{ 
            while(!isEmpty(stack) && precedence(expression[i]) <= precedence(peek(stack))) 
                expression[++j] = pop(stack); 
            push(expression[i]); 
        } 
    } 
    while(!isEmpty(stack)) 
        expression[++j] = pop(stack); 
    expression[++j] = '\0';
}
void reverse(char *exp){
    int size = 0;
    for(i = 0; exp[i] != '\0'; i++){
        size++;
    }
    int j = size, i = 0;
    char temp[size];
    temp[j--] = '\0';
    while(exp[i] != '\0'){
        temp[j] = exp[i];
        j--;
        i++;
    }
    for(i = 0; i < size; i++){
        exp[i] = temp[i];
    }
}
void brackets(char* exp){
    int i = 0;
    while(exp[i] != '\0'){
        if(exp[i]=='(')
            exp[i]=')';
        else if(exp[i]==')')
            exp[i]='(';
        i++;
    }
}
void InfixtoPrefix(char *exp, int expSize){
    int size = expSize;
    reverse(exp);
    brackets(exp);
    getPostfix(exp);
    reverse(exp);
}
int main(){    
    int expLength;
    char expression[30]; 
    printf("Enter  infix expression : ");
    gets(expression);
    for(i = 0; expression[i] != '\0'; i++){
        expLength++;
    }
    InfixtoPrefix(expression,expLength); 
    printf("The prefix is: ");
    printf("%s\n",expression);
    return 0; 
}