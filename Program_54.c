#include<stdio.h>
#include <stdlib.h>
int INT_MIN;
struct Stack { 
    int top; 
    int maxSize;
    int* array; 
}; 
struct Stack* create(int max){ 
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack)); 
    stack->maxSize = max; 
    stack->top = -1; 
    stack->array = (int*)malloc(stack->maxSize * sizeof(int));
    return stack; 
} 
int isFull(struct Stack* stack){ 
    if(stack->top == stack->maxSize - 1){
        printf("Stack is full\n");
    }
    return stack->top == stack->maxSize - 1; 
} 
int isEmpty(struct Stack* stack){ 
    return stack->top == -1; 
}
void push(struct Stack* stack, int item){ 
    if (isFull(stack)) 
        return; 
    stack->array[++stack->top] = item; 
}
int pop(struct Stack* stack){ 
    if (isEmpty(stack)) 
        return INT_MIN; 
    return stack->array[stack->top--]; 
} 
int peek(struct Stack* stack){ 
    if (isEmpty(stack)) 
        return INT_MIN; 
    return stack->array[stack->top]; 
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
int convertInfixToPostfix(char* expression){ 
    int i, j, size=0; 
    for(i=0;expression[i]!='\0';i++){
        size++;
    }
    struct Stack* stack = create(size); 
    if(!stack) 
        return -1 ; 
    for (i = 0, j = -1; expression[i]; ++i){ 
        if (checkIfOperand(expression[i])) 
            expression[++j] = expression[i]; 
        else if (expression[i] == '(') 
            push(stack, expression[i]); 
        else if (expression[i] == ')'){ 
            while (!isEmpty(stack) && peek(stack) != '(') 
                expression[++j] = pop(stack); 
            if (!isEmpty(stack) && peek(stack) != '(') 
                return -1;              
            else
                pop(stack); 
        } 
        else{ 
            while (!isEmpty(stack) && precedence(expression[i]) <= precedence(peek(stack))) 
                expression[++j] = pop(stack); 
            push(stack, expression[i]); 
        } 
    } 
    while (!isEmpty(stack)) 
        expression[++j] = pop(stack); 
    expression[++j] = '\0'; 
    printf( "%s", expression); 
} 
int main(){
    char expression[] = "((a+(b*c))-d)"; 
    printf("\nInfix expression : %s",expression);
    convertInfixToPostfix(expression); 
    printf("\nPostfix expression : %s",expression);
    return 0; 
}