#include <stdio.h>
#include <stdlib.h>
typedef struct queue
{
    int front;
    int rear;
    int size;
    int *arr;
} queue;

queue *createQueue(int size)
{
    queue *q = (queue *)malloc(sizeof(queue));
    q->front = -1;
    q->rear = -1;
    q->size = size;
    q->arr = (int *)malloc(size * sizeof(int));
    return q;
}

void push(queue *q, int data)
{
    if (q->rear == q->size - 1)
    {
        printf("Queue is full\n");
        return;
    }
    if (q->front == -1)
    {
        q->front = 0;
    }
    q->rear++;
    q->arr[q->rear] = data;
}

void pop(queue *q, int *data)
{
    if (q->front == q->rear)
    {
        printf("Queue is empty\n");
        return;
    }
    *data = q->arr[q->front];
    q->front++;
    return;
}

int main()
{
    queue *q = createQueue(5);
    int data;
    push(q, 1);
    push(q, 2);
    push(q, 3);
    push(q, 4);
    push(q, 5);
    push(q, 6);
    pop(q, &data);
    printf("Popped element = %d\n", data);
    pop(q, &data);
    printf("Popped element = %d\n", data);
    pop(q, &data);
    printf("Popped element = %d\n", data);
    pop(q, &data);
    printf("Popped element = %d\n", data);
    pop(q, &data);
    printf("Popped element = %d\n", data);
    pop(q, &data);
    printf("Popped element = %d\n", data);
    return 0;
}