#include <stdio.h>
#include <stdlib.h>
#define MAX 5
struct node{
    int data;
    struct node *link;
}
*top = NULL;
void push();
void pop();
void print_top();
int main(){
    int choice;
    while (1){
        printf("1. push an element \n");
        printf("2. pop an element \n");
        printf("3. Print top of the stack \n");
        printf("4. exit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch(choice){
            case 1:    
                push();
                break;         
            case 2:    
                pop();
                break;         
            case 3:    
                print_top();
                break;         
            case 4:    
                return 0;
            default:
                printf("wrong choice !!\n");         
        }
    }
}
int st_count(){
    int count = 0;
    struct node *temp;
    temp = top;
    while(temp != NULL){
        temp = temp->link;
        count++;
    }
    return count;
}
void push(){
    int val, count;
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));
    count = st_count();
    if (count <= MAX - 1){
        printf("Enter value which you want to push into the stack :");
        scanf("%d", &val);
        temp->data = val;
        temp->link = top;
        top = temp;
    }
    else
        printf("WARNING: STACK FULL\n");
}
void pop(){
    struct node *temp;
    if (top == NULL)
        printf("**Stack is empty**\n");
    else{
        temp = top;
        printf("Value popped out is %d \n", temp->data);
        top = top->link;
    }
}
void print_top(){
    if(top == NULL)
        printf("**Top is not available for an EMPTY stack**\n");
    else
        printf("Top of the stack is %d\n", top->data);
}