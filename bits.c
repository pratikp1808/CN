#include <stdio.h>
int main()
 {
    int arr[50], n, count = 0, i, j;

    printf("Enter number of elements in the array\n");
    scanf("%d", &n);

    printf("Enter %d elements\n", n);
    for (i = 0; i < n; i++)
    {
    	scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++) 
	{
        if(arr[i] == 1) 
		{
            count++;
            if(count == 5) 
			{
                for (j = n; j > i; j--)
                    arr[j] = arr[j - 1];
                arr[i + 1] = 0;
                n++;
                count = 0;
            }
        } 
		else 
		{
            count = 0;
        }
    }

    printf("Resultant array is\n");
    for (i = 0; i < n; i++)
    {
       	printf("%d", arr[i]);
    }
    return 0;
}

