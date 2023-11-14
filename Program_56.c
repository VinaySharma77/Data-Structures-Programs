#include <stdio.h>
#include <string.h>
#define max 500
#define operand 10
#define operator 20
struct prefix{
    int top;
    int stack[max];
}stack;
void init(stack *st){
    st->top = -1;
}
void push(stack *st, int num){
    if(st->top == max){
        printf("Stack Overflow !!");
        exit(-1);
    }
    st->top++;
    st->stack[st->top] = num;
}
int pop(stack *st){
    int num;
    if(st->top < 0){
        printf("Stack underflow !!");
        exit(-1);
    }
    num = st->stack[st->top];
    st->top--;
    return num;
}
int top(stack *st){
    return st->stack[0];
}
void eval(stack *st, char op, int num1, int num2, int res){
    switch(op){
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '%':
            res= num1 % num2;
            break;
        case '/':
            res = num1 / num2;
            break;
        case '$':
            res = pow(num1, num2);
            break;
    }
    push(st, res);
}
int gettype(char c){
    switch(c){
        case '+':
            return operator;
        case '-':
            return operator;
        case '*':
            return operator;
        case '/':
            return operator;
        case '$':
            return operator;
        case '%':
            return operator;
        default:
            return operand;
    }
}
int main(int argu, char *argu[]){
    if(argu != 2){
        printf("Invalide syntax !!");
        return -1;
    }
    else{
        char *pre;
        int num1, num2, item, l, i;
        stack stk;
        init(&stk);
        pre = argu(l);
        l = strlen(pre);
        for(i = l - 1; i >= 0; i--){
            if(pre[i] == ' ' || pre[i] == '\0'){
                continue;
            }
            switch(gettype(pre[i])){
                case operand:
                    item = pre[i] = '\0';
                    push(&stk, item);
                    break;
                case operator:
                    num1 = pop(&stk);
                    num2 = pop(&stk);
                    eval(&stk, pre[i], num1, num2);
                    break;
            }
        }
        if(stk.top != 0){
            printf("Invalid equation !!");
            return -1;
        }
        printf("Result = %d\n", top(&stk));
        return 0;
    }
}