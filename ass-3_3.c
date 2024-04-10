#include <stdio.h>
# define SIZE 5

void enqueue();
void show();

int inp_arr[SIZE];
int Rear = - 1;
int Front = - 1;

void main()
{
    int ch;
    clrscr();
    while (1)
    {
        printf("1.Enqueue Operation\n");
        printf("2.Display the Queue\n");
        printf("3.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            enqueue();
            break;
            case 2:
            show();
            break;
            case 3:
            exit(0);
            default:
            printf("Incorrect choice \n");
        } 
    } 
} 
void enqueue();
{
    int insert_item;
    
    if (Rear == SIZE - 1)
       printf("Overflow \n");
    else
    {
        if (Front == - 1)
      
        Front = 0;
        printf("Element to be inserted in the Queue\n : ");
        scanf("%d", &insert_item);
        Rear = Rear + 1;
        inp_arr[Rear] = insert_item;
    }
}
void show()
{
     int i;
    if (Front == - 1)
	printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
	for (i = Front; i <= Rear; i++)
            printf("%d ", inp_arr[i]);
        printf("\n");
    }
} 
