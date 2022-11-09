#include<stdio.h>
void main()
{
	int n,a[100],el,i,flag=0;
	printf("Enter the number :");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the elements to be searched");
	scanf("%d",&el);
	for(i=0;i<n;i++)
	{
		if(a[i]==el)
		{
			flag=1;
			break;
		}
		
	}
	if(flag==1)
	{
		printf("element is found");
	}
	else
	{
		printf("element is not found");
	}
}  
