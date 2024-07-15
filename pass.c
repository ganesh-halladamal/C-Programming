#include<stdio.h>

int main(){
    int marks;

    printf("Enter marks : ");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 30)
    {
        printf("Fail\n");
    }
    else if(marks >= 30 && marks <= 100)
    {
        printf("pass");
    }
    else{
        printf("Enter valid marks\n");
    }
    return 0;
}