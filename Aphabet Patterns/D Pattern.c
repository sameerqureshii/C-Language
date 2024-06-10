//Step no.1

#include<stdio.h>
int main(){
	int n=5,i,j;
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=2*n; j++)
		{
			if(j==1 || ((i==1 || i==n)
			  && j<=n-1))
			  printf("*");
			else if(i!=1 && i!=n && j==n)
			  printf("*");
			else
			  printf(" ");
		}
		printf("\n");
	}
}


//Step no.2

//#include <stdio.h>
//int main()
//{
//	int i,j;

//	for(i=1;i<=7;i++)
//	{
//		for(j=1;j<=5;j++)
//		{
//			if((i==1&&j<5) || (i==7&&j<5) || j==1 || (j==5&&i>1&&i<7))
//			{
//				printf("* ",j);
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//			printf("\n");
//		}
//		return 0;
//	}

