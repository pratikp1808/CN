#include<stdio.h>
int main()
{
	int d[7],c[11],i,pos;
	
	printf("Enter the data:");
	for(i=0;i<7;i++)
	{
		scanf("%d",&d[i]);
	}
	
	printf("\nThe input dataword is: ");
	for(i=0;i<7;i++)
	{
		printf("%d",d[i]);
    }
    
	pos=(pow(2,i)-1);
	
	pos=0;
	i=0;
	while(pos<11)
	{
		if(pos==0 || pos==1 || pos==3 || pos==7)
		{
			c[pos]=0;
			pos++;
		}
		else
		{
			c[pos]=d[i];
			pos++;
			i++;
		}
	}
	
	printf("\nThe output codeword is:");
	for(pos=0;pos<11;pos++)
	{
		printf("%d",c[pos]);
	}
	
	return 0;
	
}
