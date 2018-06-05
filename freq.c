/* 
* C program to print all unique elements of an unsorted array 
*/
#include<stdio.h>
 
int main() {
 int array[100],a[100],x=0, size, i, j;
  
 printf("Enter number of elements in array\n");
 scanf("%d", &size);
 printf("Enter %d numbers\n", size);
  
 for(i = 0; i < size; i++){
  scanf("%d", &array[i]);
 }
  
 printf("Unique Elements\n");
 for(i = 0; i < size; i++) {
  for (j=0; j<i; j++){
      if (array[i] == array[j])
       break;
       }
      
     if (i == j){
      /* No duplicate element found between index 0 to i */
      a[x++]=array[i];
  }
 }
  
for(i=0;i<x;i++){
printf("%d",a[i]);
}
 return 0;
}
