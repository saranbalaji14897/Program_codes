#include<stdio.h>
int main()
{
	int i,n,a[50];
	int logic;
		printf("press the NY KEY among a,b,c:\n");
		scanf("%d",&logic);
		switch(logic){
			case 1:
			printf("enter the num of values");
			scanf("%d",&n);
			printf("enter the values:\n");
			int sum=0;
			for(i=0;i<n;i++)
			{
			scanf("%d",&a[i]);
			sum=sum+a[i];
			}
			printf("the value of sum is:%d",sum);
			 break;
			
			case 2:
			
			printf("enter the num of values");
			scanf("%d",&n);
			printf("enter the values:\n");
			int sub;
            for(i=0;i<n;i++)
			{
			scanf("%d",&a[i]);
			sub=sub+a[i];
			}
			printf("the value of sub is:%d",sub);
			break;
			
			case 3:
			
			printf("enter the num of values");
			scanf("%d",&n);
			printf("enter the values:\n");
			int prod=1;
            for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			    prod=prod*a[i];
			}
			printf("the value of prod is:%d",prod);
			break;
			
			default:
			{
			float div=1;
			printf("enter the num of values");
			scanf("%d",&n);
			printf("enter the values:\n");
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
				div=a[i]/div;
			}
			printf("the value of div is:%f",div);
			break;
			}

		
	
		}	
				
}	

