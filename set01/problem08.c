#include <stdio.h>

int array_size();
void array_elements(int n,int a[n]);
int sum_array_elements(int n, int a[n]);
void output(int n, int a[n], int sum);

int main()
{
    int n;
    n=array_size();
    int a[n];
    array_elements(n, a);
    int sum = sum_array_elements(n,a);
    output(n, a, sum);

    return 0;
}
int array_size()
{
    int n;
    printf("enter the array size:");
    scanf("%d",&n);
    return n;
}
void array_elements(int n, int a[n])
{
    int i;
    for (int i=0; i<n; i++)
    {
        printf("enter the array element:");
        scanf("%d",&a[i]);
    }
}
int sum_array_elements(int n, int a[n])
{
    int sum=0;
    for (int i=0; i<n; i++)
    {
        sum += a[i];
    }
    return sum;
}
void output(int n, int a[n], int sum)
{
    printf("the sum of all the numbers in the array = %d",sum);
}