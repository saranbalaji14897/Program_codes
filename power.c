#include <stdio.h>
#include <math.h>

void printPowerSet(int *set, int set_size,int target)
{
	/*set_size of power set of a set with set_size
	n is (2**n -1)*/
 int pow_set_size = pow(2, set_size);
	int counter, j,ar[100],x=0,y=0,i;

	/*Run from counter 000..0 to 111..1*/
	for(counter = 0; counter < pow_set_size; counter++)
	{
	    y=0;
	    x=0;
	for(j = 0; j < set_size; j++)
	{
		/* Check if jth bit in the counter is set
			If set then pront jth element from set */
		if(counter & (1<<j)){
			ar[y]=set[j];
			x+=ar[y];
			y++;
			   }
	}
	if(x==target){
	    for(i=0;i<y;i++){
	        printf("%d",ar[i]);
	    }
	printf("\n");
	}

	}
}

/*Driver program to test printPowerSet*/
int main()
{
	int set[100],n,i,target;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&set[i]);
	}
	scanf("%d",&target);
	printPowerSet(set, n,target);

	getchar();
	return 0;
}

