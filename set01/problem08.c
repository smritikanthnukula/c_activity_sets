#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n],int sum);

int main()
{

}

int input_array_size()
{
    int n;
    printf("enter the array size:");
    scanf("%d",&n);
    return n;
}
void input_array(int n, int a[n])
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("enter the number:");
        scanf("%d",&a[i])
    }
}
int sum_n_array(int n, int a[n])
{
    
}
void output(int n, int a[n],int sum)