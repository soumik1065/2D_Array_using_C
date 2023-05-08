#include<stdio.h>

void main()
{
	int arr[50][50],row,column,i,j;

	printf("Enter the size of row: ");
	scanf("%d",&row);
	printf("Enter the size of column: ");
	scanf("%d",&column);

	printf("\nEnter the elements in the array:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}

	printf("\nElements in the array are:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}