#include<stdio.h>
int main()
{
	int i,j,rows=5;
	char ch='e';
	for(i=rows;i>=1;i--)
	{
		for(j=rows;j>=i;j--)
			printf("%c",96+i);
		printf("\n");
	}
}
