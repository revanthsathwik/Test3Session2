#include<stdio.h>
void input(int *n,int *r)
{
    printf("enter n  value \n");
    scanf("%d",n);
    printf("enter r valur\n");
    scanf("%d",r);
    
}
int factorial(int r)
{
    int n,i,v=1;
    for(i=r;i>=1;i--)
    {
        v=v*i;
    }
    return v;
}
int ncr(int n,int r)
{
    int x;
    x=factorial(n)/(factorial(r)*factorial(n-r));
    return x;
}
void output(int n,int r,int x)
{
    printf("the ncr value is %d",x);
}
int main()
{
    int n,r,x;
    input(&n,&r);
    x=ncr(n,r); 
    output(n,r,x);
    return 0;

}