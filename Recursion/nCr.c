#include<stdio.h>

int C(int n,int r)
{
    if(r==0 || n==r)
        return 1;
    else
        return C(n-1,r-1)+C(n-1,r);
}

int main()
{
    int n,r;
    printf("Enter the value of n and r=");
    scanf("%d%d",&n,&r);
    printf("nCr value=%d",C(n,r));
    return 0;
}