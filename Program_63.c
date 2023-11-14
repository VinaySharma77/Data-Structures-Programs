#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node *f = NULL;
struct node *r = NULL;
void insert(int d){
	struct node* n;
	n = (struct node*)malloc(sizeof(struct node));
	n->data = d;
	n->next = NULL;
	if((r==NULL)&&(f==NULL)){
		f = r = n;
		r->next = f;
	}
	else{
		r->next = n;
		r = n;
		n->next = f;
	}
} 
void delete(){
	struct node* t;
	t = f;
	if((f==NULL)&&(r==NULL))
		printf("\nQueue is Empty");
	else if(f == r){
		f = r = NULL;
		free(t);
	}
	else{
		f = f->next;
		r->next = f;
		free(t);
	}
}
void display(){
	struct node* t;
	t = f;
	if((f==NULL)&&(r==NULL))
		printf("\nQueue is Empty");
	else{
		do{
			printf("\n%d",t->data);
			t = t->next;
		}while(t != f);
	}
}
int main(){
    int choice,n;
    while(1){
        printf("\nOperations that queue can perform is : \n");
        printf("\n1. Press 1 to insert\n2. Press 2 to delete\n3. Press 3 to disply\n4. Press 4 to exit\n");
        printf("\nEnter your choice : ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                printf("Enter num to insert : ");
                scanf("%d",&n);
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