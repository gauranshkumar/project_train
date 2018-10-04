#include<stdio.h>

void swap(int *val1, int *val2)
{
	int temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}

int revrese_arr(int arr[], int n)
{
    n -= 1;
    for(int i=0;i<=(n/2);i++)
    {
        swap(&arr[i],&arr[n-i]);
    }
}

void main()
{
	int len;
	scanf("%d",&len);
	while(1)
	{
	if(len < 1 || len > 1000)
	{
        printf("Size of array must be in range of 1-1000. Please Enter again.\n");
        scanf("%d",&len);
	}
	else
	{
        break;
	}
	}
	int array[len];
	for(int i=0;i<len;i++)
	{
        scanf("%d",&array[i]);
	}
	for(int i=0;i<len;i++)
	{

        while(1)
        {
        if (array[i]<1 || array[i]>1000)
        {
            printf("\n%d element of array is out of range.\nEnter Number between 1-1000.",i);
            scanf("%d",&array[i]);
        }
        else
        {
            break;
        }
        }
	}
	for(int i=0;i<len;i++)
	{
        printf("%d ",array[i]);
	}

	revrese_arr(array,len);

	printf("\n");

	for(int i=0;i<len;i++)
	{
        printf("%d ",array[i]);
	}

}
