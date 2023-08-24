#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,n,cost[50][50],d[50][50];
	printf("Enter the number of vertices:");
	scanf("%d",&n);
	printf("\n Enter the elements of the cost matrix:\n");
	for(i=1;i<=n;i++)
	 {
	 	for(j=1;j<=n;j++)
	 	{
	 		scanf("%d",&cost[i][j]);
		 }
	 }
	printf("\n----Cost Matrix----\n");
	for(i=1;i<=n;i++)
	    { 
	 	for(j=1;j<=n;j++)
	 	{
	     	printf("%d \t",cost[i][j]);
		 } 
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		  d[i][j]=cost[i][j];	
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				if( d[i][j] > (d[i][k]+d[k][j]) )
				   d[i][j]=d[i][k]+d[k][j];
				else
				   d[i][j]=d[i][j];
			}
		}
	}
	printf("\n----Final Minimum Distance Matrix----\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d \t",d[i][j]);
		}
		printf("\n");
	}
	return 0;
}