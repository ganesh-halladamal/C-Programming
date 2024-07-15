#include<stdio.h>

int main()
{
    int a,b;
    
    printf("Enter two numbers : ");
    scanf("%d %d",&a ,&b);

    if(a>b){
        printf("Smallest num is %d\n", b);
    }
        else{
            printf("Smallest num is %d\n", a);
        }
    
}