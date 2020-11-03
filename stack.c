#include<stdio.h>
#define MAX 5;

int Stack[5];
int Top = -1;

void Push();
void Pop();
void Display();


void main() {
    int ch;

    do {
        printf("\n=====================================");
        printf("\n|WELCOME TO THE STACK IMPLEMENTATION|");
        printf("\n=====================================");

        printf("\n1. Push \n2. Pop \n3. Display \n4. Exit");
        printf("\n");
        printf("\n");
        scanf("%d", &ch);

        switch(ch) {
            case 1: Push();
                break;
            case 2: Pop();
                break;
            case 3: Display();
                break;
        }
    } while(ch!=4);
}

void Push() {

    int item;
    int value = MAX - 1;

    if (Top == value) {
        printf("\nOverFlow...");
    }
    else {
        printf("\nEnter a value you want to Push: ");
        scanf("\n%d", &item);

        Top = Top + 1;
        Stack[Top] = item;
    }
}

void Pop() {
    int item;
    if(Top == -1) {
        printf("\nUnderFlow...");
    }
    else {
        item = Stack[Top];
        Top = Top - 1;

        printf("\n%d Item Deleted from Stack", item);
    }
}

void Display() {
    int i;

    if (Top == -1) {
        printf("\nUnderFlow...");
    }
    else {
        printf("\nStack Elements are ====>\n");
        for(i=Top; i<=0; i--) {
            printf("\n %d", Stack[i]);
        }
    }
}