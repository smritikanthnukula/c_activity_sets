#include <stdio.h>
int input_number();
int is_prime(int n);
void output(int n, int result);
int main()
{
    int n, result; 
    n=input_number();
    result=is_prime(n);
    output(n, result);
    return 0;
}
int input_number()
{
    int n;
    printf("enter the number n:");
    scanf("%d",&n);
    return n;
}
int is_prime(int n)
{
    for (int i=2;i<n;i++)
    {
        if (n % i == 0)
        {
            return 0;
        }  
    }
}
void output(int n, int result)
{
    if (result == 0)
    {
        printf("the given number %d is a composite number.",n);
    }
    else
    {
        printf("the given number %d is a prime number.",n);
    }
}