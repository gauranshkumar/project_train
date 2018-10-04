#include<stdio.h>

void main()
{
    int num,ot;
    printf("Enter Number : ");
    scanf("%d",&num);
    ot = num;
    int ar_size=num+(num-1);
    int out_array[ar_size][ar_size];
    for(int i = 0;i<ar_size;i++)
    {
		for(int j=0;j<ar_size;j++)
		{
			for(int k=num;k<=num;k--)
			{
                out_array[i][k]=num;
			}
			printf("%d ",ot);
		}
        printf("\n");

    }
}
