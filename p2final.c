#include<stdio.h>
struct _fraction
{
    int num,den;
};
typedef _fraction Fraction;
Fraction input_fraction()
{
    Fraction f ;
    printf("Enter the fractio\n");
    scanf("%d%d",&f.num,&f.den);
    return f;
    
}

Fraction smallest(Fraction f1,Fraction f2,Fraction f3)

{
    int common_denominator=f1.dem*f2.den*f3.den;
    int num1=f1.num+common_denominator/f1.den;
    int num2=f2.num+common_denominator/f2.den;
    int num3=f3.num+common_denominator/f3.den;
    if (num1<num2 && num1<num3)
       return f1;
    else if (num2<num3)
       return f2;
    else
       return f3;
}

 void output(Fraction s)
{
  printf("the smallest fraction is %d%d\n",s.num,s.den);
  
}
int main()
{
    Fraction f1,f2,f3,smallest;
    f1=input_fraction();
    f2=input_fraction();
    f3=input_fraction();
    s=samllest(f1,f2,f3);
    output(s);
    return 0;
    
}