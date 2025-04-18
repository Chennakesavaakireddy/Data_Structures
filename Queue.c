#include<stdio.h>
#include<stdlib.h>
// Function prototypes for queue operations
int enqueue(int [],int,int);
int dequeue(int [],int,int);
void display(int [],int,int);

void main() {
    int queue[5],front=0,rear=-1,size=5,choice;
    // Loop for menu-driven queue operations
    while(1) {
        printf("====Operations on Queue====");
        printf("\nEnter 1 for insertion\nEnter 2 for deletion\nEnter 3 for displaying elements in queue\nEnter 4 to end operations on queue\n");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                rear=enqueue(queue,rear,size);
                break;
            case 2:
                rear=dequeue(queue,front,rear);
                break;
            case 3:
                display(queue,front,rear);
                break;
            default:
                exit(0);
        }
    }
}
// Function to push an element into the queue
int enqueue(int queue[],int rear,int size) {
    int item;
    if (rear>=size-1) {
        printf("Queue is full\n");
        printf("Insertion not possible\n");
    }
    else {
        printf("Enter an integer to be inserted into the queue: ");
        scanf("%d",&item);
        ++rear;
        queue[rear]=item;
    }
    return rear;
}
// Function to pop an element from the queue
int dequeue(int queue[],int front,int rear) {
    int i,temp;
    if(front>rear) {
        printf("Queue is empty");
        printf("Deletion not possible\n");
    }
    else {
        printf("Element deleted is: %d\n",queue[front]);
        for(i=0;i<rear;i++) {
            queue[i]=queue[i+1];
        }
        rear--;
    }
    return rear;
}
// Function to display elements in the queue
void display(int queue[],int front,int rear) {
    int i;
    if(front>rear) {
        printf("Queue is empty");
    }
    else {
        printf("Elements in the queue are:\n");
        for (i=front;i<=rear;i++) {
            printf("%d\n",queue[i]);
        }
    }
}
