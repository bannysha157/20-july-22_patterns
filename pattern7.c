#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("enter the number of rows");
	scanf("%d",&rows);
	printf("the pattern is \n");
	for(i=rows;i>=1;i--)
{
	for(j=i;j<=rows;j++)
	{
		printf("%d",j);
	}
printf("\n");
}
return 0;
}
