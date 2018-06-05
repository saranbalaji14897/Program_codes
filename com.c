#include <stdio.h>
#include <math.h>
 
void printPowerSet(int set[], int set_size)
{
    /*set_size of power set of a set with set_size
      n is (2**n -1)*/
    unsigned int pow_set_size = pow(2, set_size);
    int counter, j;
 
    /*Run from counter 000..0 to 111..1*/
    for(counter = 1; counter < pow_set_size/2; counter++)
    {
      int array1[100]={0};
      int array2[100]={0};
      int index1=0;
      int index2=0;
      int sum1=0;
      int sum2=0;
      for(j = 0; j < set_size; j++)
       {
          /* Check if jth bit in the counter is set
             If set then pront jth element from set */
          if(counter & (1<<j))
            {
              //printf("%d ", set[j]);
              array1[index1++]=set[j];
              sum1+=set[j];
            }
          else
          {
            array2[index2++]=set[j];
           
            sum2+=set[j];
          }
         
       }
       //printf("sum %d %d ",sum1/(index1),sum2/(index2));
       if((sum1/(index1))==(sum2/(index2)))
          {
            printf("set-1 -> ");
            for(int k=0;k<index1;k++)
              printf("%d ",array1[k]);
            printf(" set-2-> ");
            for(int k=0;k<index2;k++)
              printf("%d ",array2[k]);
            printf("\n");
          }
       //printf("\n");
    }
}
 
/*Driver program to test printPowerSet*/
int main()
{
    int  set[] = {2,4,8,10};
    printPowerSet(set, 4);
 
    getchar();
    return 0;
}
