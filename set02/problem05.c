#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
    int a, b, gcd;
    a=input();
    b=input();
    gcd=find_gcd(a,b);
    output(a,b,gcd);
    return 0;

}
int input()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    return n;
}
int find_gcd(int a, int b)
{
    int gcd;
    while (b != 0)
    {
        gcd = b;
        b = a % b;
        a = gcd;
    }
}
void output(int a, int b,int gcd)
{
    printf("the greatest common divisor of %d and %d is %d",a,b,gcd);
}