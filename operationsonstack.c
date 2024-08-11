#include<stdio.h>
#define MAX 10
int push(int st[] , int *top );
int pop(int st[] , int *top);
int peek(int st[] , int top);
int display(int st[] , int top);
void exit_program();

int main() {

    int u,st[MAX],top=-1 , element;
    do {
    
    printf("************Enter the operation to perform*********** \n");
    printf("1. Push \n");
    printf("2. Pop \n");
    printf("3. Peek \n");
    printf("4. Display \n");
    printf("5. Exit \n");
    printf("Enter your choice : ");
    scanf("%d",&u);

    if (scanf("%d", &u) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clear the input buffer
            continue;

    switch(u) 
    {
        case 1:  push(st,&top);
        break;
        case 2:  pop(st,&top);
          break;
        case 3:  peek(st,top);
          break;
        case 4:  display(st,top);
          break;
        case 5: exit_program();
          break;
          default : printf("Invalid choice\n");
    }
    
} while (u !=5);
}

//functon push
int push(int st[] , int *top ) {
    int element;
    printf("Enter the element to be pushed");
    scanf("%d",&element);

    if(*top==MAX-1) {
        printf("Overflow");
        return 1;
    } else {
        *top++;
        st[*top]= element;
        return 0;
       
    }
}

// function pop
int pop(int st[] , int *top) {
    int element;
    if(*top==-1) {
        printf("Stack Underflow");
        return -1;
    } else {
        printf("The value poped from the stack is %d" , st[*top]);
        *top--;
        
        return 0;
    }

    
}

// function peek 
int peek(int st[] , int top) {
    int element;
    if(top==-1) {
        printf("Stack Underflow");
        return -1;
    } else {
        printf("The Top element is : %d", st[top]);
        return 0;
    }
}

int display(int st[] , int top) {
    int element;
    if(top==-1) {
        printf("The Stack is empty");
        return -1;
    } else { int i;
        printf("The Elements in the stack are :\n");
        for(i=top;i>=0;i--) {
            printf("%d",st[i]);
        }
    }
}

//exit
void exit_program() {
    printf("Exit successful\n");
}