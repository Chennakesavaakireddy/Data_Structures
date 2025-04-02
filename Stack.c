#include<stdio.h>
#include<stdlib.h>
// Function prototypes for stack operations
int push(int [],int,int);
int pop(int [],int);
void display(int [],int);

void main() {
    int choice,top=-1,stack[5],size=5;;
    // Loop for menu-driven stack operations
    while(1) {
        printf("\n==== Stack Operations ====");
        printf("\nEnter 1 for push()\nEnter 2 for pop()\nEnter 3 for displaying elements in stack\nEnter 4 to end operations on stack\n");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                top=push(stack,top,size);
                break;
            case 2:
                top=pop(stack,top);
                break;
            case 3:
                display(stack,top);
                break;
            default:
                exit(0);
        }
    }
}
// Function to push an element into the stack
int push(int stack[],int top,int size) {
    int item;
    if(top==size-1) {
        printf("Stack is full, \n Overflow condition arises!!!");
    }
    else {
        printf("Enter an integer to push into stack: ");
        scanf("%d",&item);
        top++;
        stack[top]=item;
        printf("Integer %d pushed into the stack\n",item);
    }
    return top;
}
// Function to pop an element from the stack
int pop(int stack[],int top) {
    if(top==-1) {
        printf("Stack is empty, \n Underflow condition arises!!!");
    }
    else {
        printf("Integer poped is %d",stack[top]);
        top--;
    }
    return top;
}
// Function to display elements in the stack
void display(int stack[],int top) {
    if(top==-1) {
        printf("Stack is empty!!!");
    }
    else {
        printf("Elements in the stack are:\n");
        for(int i=top;i>=0;i--) {
            printf("%d\n",stack[i]);
        }
    }
}
