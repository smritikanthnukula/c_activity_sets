#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
    int n , result;
    n = input_number();
    result = is_composite(n);
    output(n,result);

    return 0;
}
int input_number()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    return n;
}
int is_composite(int n)
{
    for(int i=2;i < n/2;i++)
    {
        if(n % i == 0)
        {
            return 1;
        }
        else
        return 0;
    }
}
void output(int n, int result)
{
    if (result == 1)
    {
        printf("the number %d is composite",n);
    }
    else
    printf("the number %d is prime",n);
    
}