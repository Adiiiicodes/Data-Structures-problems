#include<stdio.h>
#define MAX 100
int main() {
    int list[MAX],n,i;

    printf("ENter the number of elements required inside the list : ");
    scanf("%d",&n);

    list[n];

    printf("Enter the elements : \n");
    for(i=0;i<n; i++) {
        scanf("%d",&list[i]);
    }

    printf("The reverse of the lsit is : \n");
    for(i=n-1;i>=0; i--) {
        printf("%d\n", list[i]);
    }
}