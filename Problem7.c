#include<stdio.h>

int main(){
    float area, circumference, r;
    printf("value of radius %d\n");
    scanf("%d",&r);
    area = 2*3.14*r*r;
    circumference = 2*3.14*r;
    printf("value of radius and circumference %d\n",area,circumference);
    return 0;

}