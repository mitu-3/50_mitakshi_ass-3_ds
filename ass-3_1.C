#include<conio.h>
#include<stdio.h>
#define SIZE 4
void push();
void show();
int top = -1, inp_array[SIZE];
void main()
{
   int choice;
   clrscr();
    while (1)
    {
	printf("\nPerform operations on the stack:");
	printf("\n 1.Push the element\n 2.Show\n 3.End");
	printf("\n\nEnter the choice: ");
	scanf("%d", &choice);

	switch (choice)
	{
	case 1:
	    push();
	    break;
	case 2:
	    show();
	    break;
	case 3:
	    exit(0);

	default:
	    printf("\nInvalid choice!!");
	}
    }
}

void push()
{
    int x;

    if (top == SIZE - 1)
    {
	printf("\nOverflow!!");
    }
    else
    {
	printf("\nEnter the element to be added onto the stack: ");
	scanf("%d", &x);
	top = top + 1;
	inp_array[top] = x;
    }
}
void show()
{
    int i;
    if (top == -1)
    {
	printf("\nUnderflow!!");
    }
    else
    {
	printf("\nElements present in the stack: \n");
	for (i = top; i >= 0; --i)
            printf("%d\n", inp_array[i]);
    }
}