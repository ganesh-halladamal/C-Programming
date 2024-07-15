#include<stdio.h>

int main(){

    int x,y,z,sum;
    float avg;

    printf("Enter the value of x :");
    scanf("%d", &x);

    printf("Enter the value of y :");
    scanf("%d", &y);

    printf("Enter the value of z :");
    scanf("%d", &z);

    sum = x+y+z;
    avg = sum/3;

    printf("Avarage of x,y and z is : %.2f\n" , avg);
    return 0;

}