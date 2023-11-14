# include <stdio.h>

void flip(char *arr){
   if(*arr != '\0'){
      flip(arr + 1);
      printf("%c", *arr);
   }
}
int main(){
   char arr[50];
   printf("Enter a string : ");
   gets(arr);
   flip(arr);
   return 0;
}