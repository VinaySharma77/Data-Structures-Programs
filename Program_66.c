#include<stdio.h>
int main(){
    int arr[5];
    int i,length=0;
    for(i=0;i<5;i++){
        printf("Insert number : ");
        scanf("%d",&arr[i]);
    }
    printf("Reverse of array : ");
    for(i=4;i>=0;i--){
        printf("%d\n",arr[i]);
    }
    return 0;
}