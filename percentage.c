#include<stdio.h>

int calculatePercent(int sci, int math, int eng);

int main(){
    int sci = 50;
    int math = 55;
    int eng = 61;

    printf("percentage is : %d",(calculatePercent(sci, math, eng)) );
    return 0;
}
int calculatePercent(int sci, int math, int eng){
    return((sci + math + eng)/3);
}