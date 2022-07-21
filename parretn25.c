#include<stdio.h>
int main()
{
	int i,j,rows=5;
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			(i%2==0)?printf("%c",i+96):printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
