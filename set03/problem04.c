#include <stdio.h>
int input();
int find_n_fib(int n);
void output(int n, int fibo);
int main()
{
    int n, fibo;
    n = input();
    fibo = find_n_fib(n);
    output(n, fibo);
    return 0;
}
int input()
{
    int n;
    printf("enter the nth term:");
    scanf("%d",&n);
    return n;
}
int find_n_fib(int n)
{
    int a=0, b= 1, c= 0, i =0;
    while (c<=n-2)
    {
        i = a+b;
        a=b;
        b=i;
        c++;
    }
    return i; 
    
}
void output(int n, int fibo)
{
    printf("the %dth term is %d in fibonacci series.", n ,fibo);
}