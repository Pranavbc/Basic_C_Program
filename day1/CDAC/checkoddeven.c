#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("given number is even");
    }
    else{
        printf("Given number is odd");
    }
}