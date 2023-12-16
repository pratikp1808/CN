#include<stdio.h>
#include<math.h>
int main()
{
	int ip[4],i;
	int afteropr[4],lastadd[4];
	int nadd;
	printf("Enter the IP address:");
	for(i=0;i<4;i++)
	{
		scanf("%d",&ip[i]);
	}
	
	printf("\nThe IP address is:%d.%d.%d.%d",ip[0],ip[1],ip[2],ip[3]);
	

	if(ip[0]<=127)
	{
		int subclassA[4]={255,0,0,0};
	    for(i=0;i<4;i++)
	    {
		   afteropr[i]=ip[i]&subclassA[i];
	    }
	    
	    int n=8;
	    nadd=(pow(2,(32-n)));
	    
	    int lclassA[4]={0,255,255,255};
	    for(i=0;i<4;i++)
	    {
		   lastadd[i]=ip[i]|lclassA[i];
	    }
	}
	else if(ip[0]>=128&&ip[0]<=191)
	{
		int subclassB[4]={255,255,0,0};
	    for(i=0;i<4;i++)
	    {
		   afteropr[i]=ip[i]&subclassB[i];
	    }
	    
	    int n=16;
	    nadd=(pow(2,(32-n)));
	    
	    int lclassB[4]={0,0,255,255};
	    for(i=0;i<4;i++)
	    {
		   lastadd[i]=ip[i]|lclassB[i];
	    }
	}
	else if(ip[0]>=192&&ip[0]<=223)
	{
		int subclassC[4]={255,255,255,0};
	    for(i=0;i<4;i++)
	    {
	     	afteropr[i]=ip[i]&subclassC[i];
     	}
     	
     	int n=24;
	    nadd=(pow(2,(32-n)));
	    
	    int lclassC[4]={0,0,0,255};
	    for(i=0;i<4;i++)
	    {
		   lastadd[i]=ip[i]|lclassC[i];
	    }
	}
	else
	{
		printf("\nInvalid Class");
	}
	
	printf("\n\nFirst address is:%d.%d.%d.%d",afteropr[0],afteropr[1],afteropr[2],afteropr[3]);
	
	printf("\n\nNumber of addresses are:%d",nadd);
	
	printf("\n\nLast address is:%d.%d.%d.%d",lastadd[0],lastadd[1],lastadd[2],lastadd[3]);
}

