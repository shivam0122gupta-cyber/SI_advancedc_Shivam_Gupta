#include<stdio.h>

int main(){
    int num;
    printf("enter the value of number%d");
    scanf("%d",&num);
    for(int i=1;i<num;i=num/10)
    {
        int rem = num%10;
        if(rem%2==0)
        {
            printf("even number %d\n",rem);
        }
        else{
            printf("odd number %d\n",rem);
        }
    }
    return 0;
}