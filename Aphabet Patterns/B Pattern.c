#include<stdio.h>
int main()
{
	int n=5,i,j;
	
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++)
		{
			if(j==1 || (i==1 || i==n || i==n/2+1) && j<=n-1)
			    printf("*");
			else if(i!=1 && i!=n && j==n)
			    printf("*");
			else
			    printf(" ");
		}
		printf("\n");
	}
}
