#include<stdio.h>
void check(int firstoct)
{
	if(firstoct>=0&&firstoct<=127)
	{
		printf("\nThe IP address belongs to class 'A'");
	}
	else if(firstoct>=128&&firstoct<=191)
	{
		printf("\nThe IP address belongs to class 'B'");
	}
	else if(firstoct>=192&&firstoct<=223)
	{
		printf("\nThe IP address belongs to class 'C'");
	}
	else if(firstoct>=224&&firstoct<=239)
	{
		printf("\nThe IP address belongs to class 'D'");
	}
	else if(firstoct>=240&&firstoct<=255)
	{
		printf("\nThe IP address belongs to class 'E'");
	}
	else
	{
		printf("\nThe IP address is invalid");
	}
}


	 int main()
{
	
	
	char arr[15],arr1[14];
	int i,j=0,k=0,ck[4],count=0;
	
	printf("Enter the IP address:");
	scanf("%s",&arr[i]);
	
	
	
	for(i=0;i<4;i++)
	{
	 if(arr[i]!='.')
	 {
	 	arr1[j]=arr[i];
	 	j++;
	 }
	 else
	 {
	 	ck[k]=atoi(arr1);
		 check(ck[k]);
	 }
	
    }
    
}

