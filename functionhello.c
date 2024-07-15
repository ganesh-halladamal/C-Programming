#include<stdio.h>

// declaration/prototype
void printHello(); 

int main(){
    printHello(); //function call
    printHello();
    printHello();

    return 0;
}
void printHello(){
    printf("Hello!\n");
    printf("My name is Ganesh\n");
} 