#include <stdio.h>

#define max 5
int queue[max];
int front = -1, rear = -1;

void enq()
{
    int data;
    printf("enter data");
    scanf("%d", &data);
    if (rear == max - 1)
    {
        printf("overflow");
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = data;
    }
    else
    {
        rear++;
        queue[rear] = data;
    }
}

void deq()
{
    if (rear == -1 && front == -1)
    {
        printf("empty");
    }
    else if (rear == front)
    {
        int x = queue[front];
        printf("dequed element is %d", x);
        rear = -1;
        front = -1;
    }
    else
    {
        int x = queue[front];
        printf("dequed element is %d", x);
        front++;
    }
}

void display()
{
    int i;
    for (i = front; i <= rear; i++)
    {
        printf("%d  ", queue[i]);
    }
}

int main()
{
    int opt = 1;
    while (opt != 0)
    {
        printf("enter your choice\n1.enqueue\n2.dequeue\n3.display");
        scanf("%d", &opt);

        switch (opt)
        {
        case 1:
            enq();
            break;
        case 2:
            deq();
            break;
        case 3:
            display();
            break;
        }
    }
    return 0;
}