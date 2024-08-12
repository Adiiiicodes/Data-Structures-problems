#include<stdio.h>
int expo(int x , int y);
int main() {
    int x,y;
    printf("ENter the base number : ");
    scanf("%d",&x);

    printf("Enter the exponential number : ");
    scanf("%d",&y);

    int z= expo(x,y);
    printf("The answer is : %d",z);
}

int expo(int x , int y) {
    if(y==0) {
        return 1;
    } else {
        return x*expo(x,y-1);
    }
}

