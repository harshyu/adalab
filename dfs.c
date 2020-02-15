#include<stdio.h>

int g[10][10] , visited[10] , n;

void dfs(int i)
{
	int j ;
	printf("\n %d" , i);
	visited[i]= 1;
	
	for (j=0; j<n; j++)
	{
		if(!visited[j] && g[i][j] == 1)
			{ dfs(j);
			}
	}
}


void main() {
	int i , j , n ;
	printf("Enter the number of Vertices \n");
	scanf("%d",&n);
	printf("Enter the adjacency Matrix of Graph \n");
	
	for(i=0 ; i<n ; i++) 
		{
			for(j=0 ; j<n ; j++) 
			{
			scanf("%d" , &g[i][j]);
			}
		}
	for(i=0 ; i<n ; i++)
	{
	 visited[i] = 0 ;
	}
	
	dfs(0);
}
	
