#include <stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main()
{
    int a, b, c, isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a, b, c);
    output(a, b, c, isscalene);
    
    return 0;
}
int input_side()
{
    int n;
    printf("enter the side:");
    scanf("%d",&n);
    return n;
}
int check_scalene(int a, int b, int c)
{
    if (a != b && a != c && b != a && b != c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void output(int a, int b, int c, int isscalene)
{
    if (isscalene)
    printf("the triangle with %d, %d and %d is scalene");
    else
    printf("the triangle is not scalene");
}