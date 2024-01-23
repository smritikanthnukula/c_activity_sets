#include <stdio.h>

int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);

int main()
{
    int a, b, c, largest;
    a = input();
    b = input();
    c = input();
    largest = compare(a, b, c);
    output(a, b, c, largest);

    return 0;
}

int input()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    return n;
}

int compare(int a, int b, int c)
{
    int largest;
    if (a >= b && a >= c)
    {
        largest = a;
    }
    else if (b >= c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }
    return largest;
}
void output(int a, int b, int c, int largest)
{
    printf("the largest number of %d, %d and %d is %d", a, b, c, largest);
}