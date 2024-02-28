// Write a program to find all the prime numbers between 2 to n Eratosthenes Sieve method.
#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
void erotosthenes_sieve(int n, int a[n]);
void output(int n, int a[n]);
int main()
{
    int n ;
    n=input_array_size();
    int a[n];
    input_array(n,a);
    erotosthenes_sieve(n,a);
    output(n,a);
    return 0;
}

int input_array_size()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    int i;
    for (i=2;i<=n;i++)
    {
        a[i]=i;
    }
}
void erotosthenes_sieve(int n, int a[n])
{
    for (int i=2;i<=n;i++)
    {
        
        for(int j=i+i;j<=n;j=j+i)
        {
            a[j]=0; 
        }
    }
}
void output(int n, int a[n])
{
    printf("the prime numbers till are:");
    for (int i = 0; i <= n;i++)
    {
        if(a[i] != 0 && a[i] <= n)
        {
            printf("%d,",a[i]);
        }
        
    }
}