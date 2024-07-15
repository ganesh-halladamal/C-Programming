#include<stdio.h>

int main(){
    char ch;
    printf("Enter a char : ");
    scanf("%c", &ch);

    char i=0;
    while (i<='z')
    {
        printf("%c\n", i);
        i++;

    }
    return 0;
}