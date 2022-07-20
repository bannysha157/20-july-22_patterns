#include<stdio.h>
int main()
{
	int i,j,k,rows;
	printf("enter the number of rows");
	scanf("%d",&rows);
	printf("the pattern is :\n");
	int a=1;
	for(i=1;i<=rows;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			printf("%d",a);
			a++;
		}
		printf("\n");
	}
	return 0;
}
