#include<stdio.h>
int V;
void nodes()
{
	
	printf("Enter the number of nodes : ");
	scanf("%d",&V);
}

void init(int a[][V])
{
	int i,j;
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
		{
			a[i][j]=0;
		}
	}
}

void edge(int a[][V])
{
	int i,j;
	printf("Enter the 1st node : ");
	scanf("%d",&i);
	printf("Enter the 2nd node : ");
	scanf("%d",&j);
	printf("\n");
	printf("The edge is created\n");
	a[i][j]=1;
	a[j][i]=1;
}

void printmat(int a[][V])
{
	int i,j;
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
}
void connect(int a[][V])
{
	int i,j;
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
		{
			if(a[i][j]==1)
			{
				printf("Node %d and node %d are connected to each other ",i,j);
				printf("\n");
			}
		}
	}
}
void prtnbrs(int a[][V])
{
	int i,node;
	printf("Enter the node that you want to find the neighbours of : ");
	scanf("%d",&node);
	printf("Neighbours of node %d : ",node);
	for(i=0;i<V;i++)
	{
		if(a[node][i]==1)
		{
			printf(" %d ",i);
		}
		
	}
	printf("\n");

}

int main()
{
	nodes();
	int arr[V][V];
	int n,p,q;
	
	init(arr);
	printf("Values of the nodes must be from 0,1,2,3... in any order ");
	printf("\n");
	printf("The number of nodes are %d ",V);
	printf("\n");
	for(q=1;q<=V;q++)
	{
		printf("Enter the number %d node : ",q);
		scanf("%d",&p);
	}
	printf("Enter the total number of edges present in the graph : ");
	scanf("%d",&n);
	int k,l;
	printf("For the edges : ");
	printf("\n");
	for(k=0;k<n;k++)
	{
		edge(arr);
	}
	printf("\n");
	printf("This is the adjacency matrix : ");
	printf("\n");
	printmat(arr);
	printf("\n");
	connect(arr);
	printf("\n");
	for(l=0;l<V;l++)
	{
		prtnbrs(arr);
	}
	
	return 0;
}