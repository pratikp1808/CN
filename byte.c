#include<stdio.h>
int main()
{
	int iarr[8],farr[24],fixarr[8]={0,1,1,1,1,1,1,0},i,j;
	
	printf("Enter the input array:");
	for(i=0;i<8;i++)
	{
		scanf("%d",&iarr[i]);
	}
	
	printf("\nInput array is:");
	for(i=0;i<8;i++)
	{
		printf("%d",iarr[i]);
	}
	
	j=8;
	for(i=0;i<8;i++)
	{
		farr[j]=iarr[i];
		j++;
	}
	
	j=0;
	for(i=0;i<8;i++)
	{
		farr[j]=fixarr[i];
		j++;
	}
	
	j=16;
		
	for(i=0;i<8;i++)
	{
		farr[j]=fixarr[i];
		j++;
	}
	
	printf("\nFinal array is:");
	for(j=0;j<24;j++)
	{
		printf("%d",farr[j]);
		
	}
}


