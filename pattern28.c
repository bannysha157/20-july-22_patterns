#include<stdio.h>
int main()
{
	int rows,i,j;
	printf("enter number of rows");
	scanf("%d",&rows);
	int num=1;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %d",num*j);
		}
		num++;
		printf("\n");
	}
	return 0;
}
