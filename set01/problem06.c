#include <stdio.h>

int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main()
{
    int a, b, c, largest;
    input(&a, &b, &c);
    compare(a, b, c, &largest);
    output(a, b, c, largest);

    return 0;
}
int input(int *a, int *b, int *c)
{
    printf("enter first no:");
    scanf("%d", a);
    printf("enter first no:");
    scanf("%d", b);
    printf("enter first no:");
    scanf("%d", c);
}
void compare(int a, int b, int c, int *largest)
{
    if (a >= b && a >= c)
    {
        *largest = a;
    }
    else if (b >= a && b >= c)
    {
        *largest = b;
    }
    else
    {
        *largest = c;
    }
      
}
void output(int a, int b, int c, int largest)
{
    printf("the largest in %d , %d and %d is %d", a, b, c, largest);
}