#include<stdio.h>

void calculatePrice(float value);

int main(){
    float value = 50;
    calculatePrice(value);
    return 0;
}
void calculatePrice(float value){
    value = value + (0.18 * value);
    printf("final price is : %f", value);
}