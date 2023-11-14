#include<stdio.h>
int top=-1, stack[20], i;
void push(char value){
    if(top == 19){
        printf("Stack is full");
    }
    else{
        stack[++top] = value;
    }
}
void pop(int queue[]){
    for(i=0;i<5;i++){
        queue[i] = stack[top--];
    }
}
int main(){
    int queue[] = {1,5,78,21,24};
    printf("\nOriginal queeue : \n");
    for ( i = 0; i < 5; i++){
        printf("%d\t",queue[i]);
    }
    for(i=0;i<5;i++){
        push(queue[i]);
    }
    for(i=0;i<5;i++){
        pop(queue);
    }
    printf("\nreverse :\n");
    for( i = 0; i < 5; i++){
        printf("%d\t",queue[i]);
    }
    return 0;
}