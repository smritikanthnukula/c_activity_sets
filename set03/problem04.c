#include <stdio.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);
int main()
{
    int n,fibo;
    n=input();
    fibo=find_fibo(n);
    output(n, fibo);
    return 0;

}
int input()
{
    int n;
    printf("enter the term :");
    scanf("%d",&n);
    return n;
}
int find_fibo(int n)
{
    if (n<=0)
    {
        return n;
    }    
      return find_fibo(n-1)+find_fibo(n-2);
}
void output(int n, int fibo)
{
    printf("the %dth term in fibonacci series is %d",n,fibo);
}