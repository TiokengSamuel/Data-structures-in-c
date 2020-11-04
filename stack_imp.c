#include<stdio.h>
#define MAX 20;


int Stack[20];
int Top = -1;


void Push();
void Pop();
void Display();


void main() {
    int ch;


        printf("\n                      =====================================");
        printf("\n                      |WELCOME TO THE STACK IMPLEMENTATION|");
        printf("\n                      =====================================");


    do {
        printf("\n1. Push \n2. Pop \n3. Display \n4. Exit");
        printf("\n");
        printf("\n");
        printf("Enter a choice above: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1: Push();
                break;
            case 2: Pop();
                break;
            case 3: Display();
                break;
            default: warning();
                break;
        }

    } while(ch!=4);
}

void Push() {

    int item;
    int value = MAX - 1;

    if (Top == value) {
        printf("\n          ...UnderFlow Detected...");
        printf("\n---------------------------------------------------------------");
        printf("\n");
        }
    else {
        printf("\nEnter a value you want to Push: ");
        scanf("\n%d", &item);
        printf("\n---------------------------------------------------------------");
        printf("\n");

        Top = Top + 1;
        Stack[Top] = item;
    }
}

void warning() {

        printf("             \n----------------------------");
        printf("            \n|WARNING: Enter a valid choice|");
        printf("             \n----------------------------");
        printf("\n");
        printf("-------------------------------------------------------------");
}

void Pop() {
    int item;
    if(Top == -1) {
        printf("\n          ...UnderFlow Detected...");
        printf("\n---------------------------------------------------------------");
        printf("\n");
    }
    else {
        item = Stack[Top];
        Top = Top - 1;

        printf("\nThe item '%d' was deleted from the stack", item);
        printf("\n---------------------------------------------------------------");
        printf("\n");
    }
}

void Display() {
    int i;

    if (Top == -1) {
        printf("\n          ...UnderFlow Detected...");
        printf("\n---------------------------------------------------------------");
        printf("\n");
    }
    else {
        printf("\nThe stack Elements are ====>\n");
        for(i = Top; i>=0; i--) {
            printf("\n %d", Stack[i]);
        }
        printf("\n");
        printf("\n---------------------------------------------------------------");
    }
}
