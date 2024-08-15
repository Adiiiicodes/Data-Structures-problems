#include<stdio.h>
int main() {
    int a, b,gcd;

    printf("Enter the numbers :");
    scanf("%d %d",&a, &b);

    while(a!=b) {
        if(a>b) {
            a=a-b;
        } else {
            b=b-a;
        }
    }
    gcd=a;
     printf("GCD of the given numbers is: %d\n", gcd);

    return 0;
}