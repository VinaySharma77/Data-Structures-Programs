#include <stdio.h>
int main(){
    char arr[50];  
    int i, j, k, count = 0, n;
    printf("Enter the string : ");
    gets(arr);
    for(j = 0; arr[j]; j++);
	    n = j;
	printf("Frequency of each character is :\n");
    for(i = 0; i < n; i++){
     	count = 1;
    	if(arr[i]){
 		    for(j = i + 1; j < n; j++){   
	            if(arr[i] == arr[j]){
                    count++;
                    arr[j] = '\0';
	     	    }
	        }  
	        printf(" %c = %d \n", arr[i], count);
       }
 	} 
    return 0;
}