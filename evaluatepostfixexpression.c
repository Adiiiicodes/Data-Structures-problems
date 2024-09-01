#include <stdio.h>
#include <ctype.h>
#define MAX 100

float st[MAX];
int top = -1;

// Function prototypes
void push(float st[], float val);
float pop(float st[]);
float evaluatePostfixExp(char exp[]);

int main() {
    float val;
    char exp[100];

    printf("\nEnter any postfix expression: ");
    fgets(exp, sizeof(exp), stdin);  // Using fgets to read input safely

    val = evaluatePostfixExp(exp);
    printf("\nValue of the postfix expression = %.2f\n", val);

    return 0;
}

float evaluatePostfixExp(char exp[]) {
    int i = 0;
    float op1, op2, value;

    while (exp[i] != '\0') {
        if (isdigit(exp[i])) {
            push(st, (float)(exp[i] - '0'));
        } else if (exp[i] == ' ' || exp[i] == '\n') {
            // Skip spaces and newline characters
            i++;
            continue;
        } else {
            op2 = pop(st);
            op1 = pop(st);
            switch (exp[i]) {
                case '+':
                    value = op1 + op2;
                    break;
                case '-':
                    value = op1 - op2;
                    break;
                case '/':
                    value = op1 / op2;
                    break;
                case '*':
                    value = op1 * op2;
                    break;
                case '%':
                    value = (int)op1 % (int)op2;
                    break;
                default:
                    printf("\nInvalid operator encountered: %c\n", exp[i]);
                    return -1;
            }
            push(st, value);
        }
        i++;
    }
    return pop(st);
}

void push(float st[], float val) {
    if (top == MAX - 1) {
        printf("\nSTACK OVERFLOW\n");
    } else {
        top++;
        st[top] = val;
    }
}

float pop(float st[]) {
    if (top == -1) {
        printf("\nSTACK UNDERFLOW\n");
        return -1;
    } else {
        return st[top--];
    }
}
