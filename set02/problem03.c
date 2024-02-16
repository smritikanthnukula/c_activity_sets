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
    int count=0;
    for(int i=2;i<=n;i++)
    {
        if(n % i == 0)
        {
            count++;
            break;
        }
       

        if(count==0)
        {
            return 0;
        }
        
        else
        return 1;
    }
}
void output(int n, int result)
{
    if (result = 0)
    {
        printf("the number %d is composite",n);
    }
    else
    printf("the number %d is prime",n);
    
}