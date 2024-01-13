#include<stdio.h>
#include<stdlib.h>

 struct stack 
{
	int size;
	int top;
	int *S;
};
 void create(struct stack *st)
 {
	printf("Enter the no. of elements : ");
	scanf("%d", &st->size);
	st->top=-1;
	st->S=(int*)malloc(st->size*sizeof(int));
 }
 void push(struct stack *st,int x)
{
	if(st->top==st->size-1)
	{
		printf("Stack is full");
	}
	else
	{
		st->top++;
		st->S[st->top]=x;
		printf("%d is pushed ",x);
	}
}
 int pop(struct stack *st)
{
	int x=-1;
	if(st->top==-1)
	{
		printf("Stack is empty");
	}
	else
	{
		x=st->S[st->top];
		st->top--;
		printf("%d is popped",x);
	}
}
 void display(struct stack st)
{
	int i;
	printf("Stack is : ");
	for(i=0;i<st.top;i++)
	{
		printf("%d",st.S[i]);
	}
	printf("\n");
}
int main()
{
	struct stack st;
	create(&st);
	push(&st,1);
	push(&st,2);
	push(&st,3);
	push(&st,4);
	push(&st,5);
	printf(" ");
	pop(&st);
	pop(&st);
	printf(" ");
	display(st);
	return 0;
}
	