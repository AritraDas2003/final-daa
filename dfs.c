#include<stdio.h>
#include<stdlib.h>
int visited[5]={0,0,0,0,0};  // stack
int A[5][5]={     // adj matrix
    {0,1,0,1,0},
    {0,0,1,0,0},
    {0,0,0,0,1},
    {0,0,0,0,0},
    {0,0,0,0,0},
};
	void dfs(int i)
{
	int j;
	printf("%4d",i);
	visited[i]=1;
	for(int j=0;j<5;j++)
	{
		if(A[i][j]==1 && visited[j]!=1)
		{
			dfs(j);
		}
	}
}
int main()
{
		printf("the visited list are:: ");
	dfs(0);
	return 0;
}