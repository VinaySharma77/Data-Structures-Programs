#include <stdio.h>

int i = -1, arr[10];
int push();
int pop();
int show();

int main(){
    int choice;
    while(1){
        printf("Operation performed by stack : \n");
        printf("1. Push the element\n2. Pop the element\n3. Show the element\n4. End\n");
        printf("Enter the choice : ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                show();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid Choice !!\n");
        }
    }
}

int push(){
    int num;
    if(i == 9){
        printf("Stack Overflow\n");
    }
    else{
        i++;
        printf("Enter element to be inserted to the stack : ");
        scanf("%d", &arr[i]);
        printf("Element inserted successfully\n");
    }
}

int pop(){
    if(i == -1){
        printf("Stack is empty !!\n");
    }
    else{
        printf("Item popped is : %d\n", arr[i]);
        i--;
    }
}

int show(){
    if(i == -1){
        printf("Stack is empty !!\n");
    }
    else{
        printf("\nValue of top element is : %d\n", arr[i]);
    }
}
