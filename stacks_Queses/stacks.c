#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top = -1;

int isEmpty()
{
	if (top == -1)
		return (1);
	else
		return (0);

}
int isFull()
{
	if (top == MAX - 1)
		return (1);
	else
		return (0);
}
int top_element()
{
	if (isEmpty())
        {
                printf("STACK IS EMPTY");
                exit(1);
        }
	return (stack_arr[top]);
}
void push(int data)
{
	if (isFull())
	{
		printf("STACK IS FULL\n");
		return;
	}
	top = top + 1;
	stack_arr[top] = data;
}
int pop()
{
	int value;
	if (isEmpty())
	{
		printf("STACK IS EMPTY");
		exit(1);
	}
	
	value = stack_arr[top];
	top = top - 1;
	return (value);

	}
void print()
{	int i;
	if (top == -1)
	{
		printf("STACK IS EMPTY");
		return;	
	}
	for (i = top; i >= 0; i--)
	{
		printf("%d", stack_arr[i]);
	}
	printf("\n");
	



}
int main()
{
	int choice, data;

	while (1)
	{
	printf("1. push\n");
	printf("2. pop\n ");
	printf("3. print the top element\n");
	printf("4. print all element of the stack\n");
	printf("5. Quit\n");
	printf("please enter your choice :");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			printf("enter the element you want to push it :");
			scanf("%d", &data);
			push(data);
			break;
		case 2:
			data = pop();
			printf("the deleted element is %d", data);
			break;
		case 3:
			printf("the top element is %d\n", top_element());
			break;
		case 4:
			print();
			break;
		case 5:
			exit(1);
			break;
		default:
			printf ("wrong choice\n");

	}
	}

	return (0);
}
