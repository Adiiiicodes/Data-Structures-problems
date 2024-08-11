#include<stdio.h>
int factorial(int x);
int main() {
    int x;
    printf("Enter the number whose factoria is to be calculated :");
    scanf("%d",&x);

    int y = factorial(x);
    printf("The factorial is : %d",y);
}

int factorial(int x) {
    
    if(x==1 || x==0) {
        return 1;
    } else {
        return x* factorial(x-1);
    }
}