#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,n,adj[50][50],p[50][50];
	printf("Enter the number of vertices:");
	scanf("%d",&n);
	printf("\n Enter the elements of the adjacency matrix:\n");
	for(i=1;i<=n;i++)
	 {
	 	for(j=1;j<=n;j++)
	 	{
	 		scanf("%d",&adj[i][j]);
		 }
	 }
	printf("\n----Adjacency Matrix----\n");
	for(i=1;i<=n;i++)
	    { 
	 	for(j=1;j<=n;j++)
	 	{
	     	printf("%d \t",adj[i][j]);
		 } 
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		  p[i][j]=adj[i][j];	
		}
	}
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n;i++)
		{
		    for(j=1;j<=n;j++)
				{
					if( p[i][j] < p[i][k]&&p[k][j] )
					{
						p[i][j]=p[i][k]&&p[k][j];
					}
					else 
					p[i][j]=p[i][j];
				}
		}
	}
	printf("\n----Final Path Matrix----\n");
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d \t",p[i][j]);
		}
		printf("\n");
	}
	return 0;
}