#include<stdio.h>
#include<stdlib.h>
#define size 10
int queue[size], front = -1, rear = -1, i;
void insert(int);
int delete();
void display();
int main(){
    int choice,n;
    while(1){
        printf("\nOperations that queue can perform is : \n");
        printf("\n1. Press 1 to insert\n2. Press 2 to delete\n3. Press 3 to disply\n4. Press 4 to exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Enter num to insert : ");
                scanf("%d", &n);
                insert(n);
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
void insert(int num){
    if((front == rear+1) || (front==0 && rear == size-1)){
        printf("Stack is full");
    }
    else {
    if (front == -1){
        front = 0;
    }
    rear = (rear + 1) % size;
    queue[rear] = num;
    printf("\nInserted -> %d", num);
  }
}
int delete(){
    int element;
    if (front == -1){
    printf("\n Queue is empty !! \n");
    return (-1);
    }
    else{
        element = queue[front];
    if(front == rear){
        front = -1;
        rear = -1;
    } 
    else{
        front = (front + 1) % size;
    }
    printf("\n Deleted element -> %d \n", element);
    return (element);
    }
}
void display(){
    if(rear == -1)
        printf("\nQueue is Empty!!!");
    else{
        printf("\n Front -> %d ", front);
        printf("\n Items -> ");
        for(i = front; i != rear; i = (i + 1) % size){
            printf("%d ", queue[i]);
        }
        printf("%d ", queue[i]);
        printf("\n Rear -> %d \n", rear);
    }
}