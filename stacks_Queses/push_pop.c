#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int first = -1;
int stack_arr[MAX];
int push (int data)
{
	int i;
	first = first + 1;
	for (i = first; i > 0; i--)
	{
		stack_arr[i] = stack_arr[i - 1];
	}
	stack_arr[0] = data;
}
int print()
{	int i;
	if (first == -1)
	{
		printf("STACK IS EMPTY");
		exit(1);
	}
	for(i = 0; i <= first; i++)
	{
		printf("%d", stack_arr[i]);
		printf("\n");
	}
}
int main ()
{
	push(20);
	push(30);
	push(40);
	print();
	return (0);
}
