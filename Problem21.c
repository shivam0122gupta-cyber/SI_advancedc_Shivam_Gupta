#include<stdio.h>

int main(){
    int n,rem;
    printf("enter the value of no.");
    scanf("%d",&n);
    for(int temp=n;temp<n;temp=temp/10)
    { rem=temp%10;
    if(rem=2||rem=3||rem=5||rem=7);
{printf("It is a prime number=%d\n",rem);}
     else
    {printf("it is not a prime number%d\n",rem);}
  } 
  printf("\n");
  return 0;
}