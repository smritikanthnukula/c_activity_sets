#include <stdio.h>
#include <math.h>

float input();
float square_root(float n);
void output(float n, float sqrroot);

int main()
{
    int n, sqrroot;
    n=input();
    sqrroot=square_root(n);
    output(n,sqrroot);
    
    return 0;
}
float input()
{
    float n;
    printf("enter the number:");
    scanf("%f",&n);
    return n;
}
float square_root(float n)
{
    int x_old=1, x_new=n/2;
    float precision=0.0001;
    while (fabs(x_old-x_new)>precision)
    {
        x_old=x_new;
        x_new=(x_old+n/x_old)/2;
    }
    return x_new;
}
void output(float n, float sqrroot)
{
    printf("the square root of %f is %f",n,sqrroot);
}