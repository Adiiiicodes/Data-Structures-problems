#include<stdio.h>
int main(){
    int a1,a2,index=0,array3[index],i;

    printf("Enter the number of elements in array 1 : ");
    scanf("%d",&a1);
    int array1[a1];

    printf("Enter the elements in array 1 :\n");
    for(i=0;i<a1;i++) {
        scanf("%d",&array1[i]);
    }

    printf("The entered elements are :\n");
    for(i=0;i<a1;i++) {
        printf("%d",array1[i]);
        printf("\n");
    }

    printf("Enter the number of elements in array 2 : ");
    scanf("%d",&a2);
    int array2[a2];

    printf("Enter the elements in array 2 : \n");
    for(i=0;i<a2;i++) {
        scanf("%d",&array2[i]);
        printf("\n");
    }

    printf("The entered elements are :\n");
    for(i=0;i<a2;i++) {
        printf("%d",array2[i]);
        printf("\n");
    }

    int a3=a1+a2;

    for(i=0; i<a1;i++) {
     array3[index] = array1[i];
     index++;
    }

    for(i=0; i<a2;i++) {
     array3[index] = array2[i];
     index++;
    }

    printf("The merged array is :\n");

    for(i=0;i<a3;i++) {
        printf("%d",array3[i]);
        printf("\n");
    }




}