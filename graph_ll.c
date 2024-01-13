#include<stdio.h>
#include<stdlib.h>

struct node
{
	int vertex;
	struct node* next;
};

struct graph
{
	int vertices;
	struct node** list;
};
struct node* create(int data)
{
	struct node* t = (struct node*)malloc(sizeof(struct node));
	t->vertex=data;
	t->next=NULL;
	return t;
}
struct graph* createg(int n)
{
	struct graph* p=(struct graph*)malloc(sizeof(struct graph));
	p->vertices=n;
	p->list=(struct node**)malloc(n * sizeof(struct node*));
	int i;
	for(i=0;i<n;i++)
	{
		p->list[i]=NULL;
	}
	return p;
}
void edge(struct graph* p,int x,int y)
{
	struct node* t=create(y);
	t->next=p->list[x];
	p->list[x]=t;
	
	t=create(x);
	t->next=p->list[y];
	p->list[y]=t;
}
void print(struct graph* p)
{
	int i;
	for(i=0;i<p->vertices;i++)
	{
		struct node* c=p->list[i];
		printf("Adjacency list of vertex %d: ",i);
		while(c != NULL)
		{
			printf("%d -> ",c->vertex);
			c=c->next;
		}
		printf("NULL\n");
	}
}
int main()
{
	int vertices,edges,x,y;
	printf("Enter the number of vertices: ");
	scanf("%d", &vertices);
	struct graph* p= createg(vertices);
	printf("Enter the number of edges: ");
	scanf("%d", &edges);
	int i;
	for(i=0;i<edges;i++)
	{
		printf("Enter edge (from to): ");
		scanf("%d %d", &x, &y);
		edge(p,x,y);
	}
	print(p);
	return 0;
}
