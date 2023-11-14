#include<stdio.h>
#include<stdlib.h>
int queue[10], front = -1, rear = -1, i;
void insert();
void delete();
void display();
int main(){
    int choice;
    while(1){
        printf("\nOperations that queue can perform is : \n");
        printf("\n1. Press 1 to insert\n2. Press 2 to delete\n3. Press 3 to disply\n4. Press 4 to exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("\nInvalid choice ");
                break;
        }
    }
        return 0;
}
void insert(){
    if(rear == 9){
        printf("Stack is full");
    }
    else{
        if(front == -1){
            front = 0;
        }
        rear++;
        int value;
        printf("\nEnter value to insert : ");
        scanf("%d",&value);
        queue[rear] = value;
        printf("\nInserted -> %d", value);
  }
}
void delete(){
    if(front == -1)
        printf("\nQueue is Empty!!");
    else{
        printf("\nDeleted : %d", queue[front]);
        front++;
        if(front > rear)
            front = rear = -1;
    }
}
void display(){
    if(rear == -1)
        printf("\nQueue is Empty!!!");
    else{
        int i;
        printf("\nQueue elements are:\n");
        for (i = front; i <= rear; i++)
            printf("%d  ", queue[i]);
    }
    printf("\n");
}