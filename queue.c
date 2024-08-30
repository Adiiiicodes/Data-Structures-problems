#include <stdio.h>


#define MAX 10 // Changing this value will change the length of the array

int queue[MAX];
int front = -1, rear = -1;

void insert(void);
int delete_element(void);
int peek(void);
void display(void);

int main() {
    int option, val;

    do {
        printf("\n\n***** MAIN MENU *****");
        printf("\n1. Insert an element");
        printf("\n2. Delete an element");
        printf("\n3. Peek");
        printf("\n4. Display the queue");
        printf("\n5. EXIT");
        printf("\nEnter your option: ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                insert();
                break;
            case 2:
                val = delete_element();
                if (val != -1) {
                    printf("\nThe number deleted is: %d", val);
                }
                break;
            case 3:
                val = peek();
                if (val != -1) {
                    printf("\nThe first value in the queue is: %d", val);
                }
                break;
            case 4:
                display();
                break;
            case 5:
                printf("\nExiting the program...");
                break;  // Ensure exit condition is met
            default:
                printf("\nInvalid option, please try again.");
        }
    } while(option != 5);  // Exit loop when option is 5

    return 0;
}

void insert() {
    int num;
    printf("\nEnter the number to be inserted in the queue: ");
    scanf("%d", &num);

    if(rear == MAX - 1) {
        printf("\nOVERFLOW");
    } else {
        if(front == -1 && rear == -1) {
            front = rear = 0;
        } else {
            rear++;
        }
        queue[rear] = num;
        printf("\nInserted %d into the queue", num);  // Confirm insertion
    }
}

int delete_element() {
    int val;

    if(front == -1 || front > rear) {
        printf("\nUNDERFLOW");
        return -1;
    } else {
        val = queue[front];
        front++;
        if(front > rear) {
            front = rear = -1; // Reset queue after deleting the last element
        }
        return val;
    }
}

int peek() {
    if(front == -1 || front > rear) {
        printf("\nQUEUE IS EMPTY");
        return -1;
    } else {
        return queue[front];
    }
}

void display() {
    int i;

    if(front == -1) {
        printf("\nQUEUE IS EMPTY");
    } else {
        printf("\nQueue elements are:\n");
        for(i = front; i <= rear; i++) {
            printf("%d\t", queue[i]);
        }
    }
}

