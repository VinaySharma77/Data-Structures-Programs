#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push(int item){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = item;
    newNode->next = top;
    top = newNode;
}
void pop(){
    if(top == NULL){
        printf("\nStack is empty !");
    }
    else{
        struct node *delNode;
        delNode = top;
        top = top->next;
        printf("%c",delNode->data);
        free(delNode);
    }
}
int main(){
    char str[20];
    int i;
    printf("Enter a string : ");
    gets(str);
    for(i = 0; str[i] != '\0'; i++){
        push(str[i]);
    }
    printf("Reverse of string is : ");
    for(i = 0; str[i] != '\0'; i++){
        pop();
    }
    return 0;
}