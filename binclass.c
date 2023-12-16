#include<stdio.h>
int class(int arr[])
{
	int i;
	
	if(arr[0]==0)
	{
		printf("\nclass A");
	}
	else if(arr[1]==0)
	{
		printf("\nclass B");
	}
	else if(arr[2]==0)
	{
		printf("\nclass C");
	}
	else if(arr[3]==0)
	{
		printf("\nclass D");
	}
	else 
	{
		printf("\nclass E");
	}
}


int main()
{
	int i;
	
	int arr[8];
	printf("\nEnter the first octet of IP address:");
	for(i=0;i<8;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nThe first octet is:");
	for(i=0;i<8;i++)
	{
		printf("%d",arr[i]);
	}
	
	class(arr);
	
}
