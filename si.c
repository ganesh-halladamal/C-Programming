#include<stdio.h>

int main(){

   int p, t, r, si;

    printf("Enter p :");
    scanf("%d", &p);

    printf("Enter t :");
    scanf("%d", &t);

    printf("Entrt r :");
    scanf("%d", &r);

    si = (p*t*r) / 100;

    printf(" The simple intrest of given number is : %d", si);
    return 0;


}