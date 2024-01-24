#include <stdio.h>

struct complex_numbers
{
    float real,imaginary;   
};
typedef struct complex_numbers Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main()
{
    int n;
    n=get_n();
    Complex complex_numbers[n];
    input_n_complex(n,complex_numbers);
    Complex result;
    result=add_n_complex(n,complex_numbers);
    output(n,complex_numbers,result);
    
    return 0;
}
int get_n()
{
    int n;
    printf("enter number of arrays:");
    scanf("%d",&n);
    return n;
}
Complex input_complex()
{
    Complex c;
    printf("enter the real part of the complex no:");
    scanf("%f",&c.real);
    printf("enter the imaginary part of the complex no:");
    scanf("%f",&c.imaginary);
    return c;
}
void input_n_complex(int n, Complex c[n])
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("array no: %d\n",i+1);
        c[i]=input_complex();
    }
}
Complex add(Complex a, Complex b)
{
    Complex result;
    result.real=a.real+b.real;
    result.imaginary=a.imaginary+b.imaginary;
    return result;
}
Complex add_n_complex(int n, Complex c[n])
{
    int i ;
    Complex result=c[0];
    for(i=1;i<n;i++)
    {
        result=add(result,c[i]);
    }
    return result;
}
void output(int n, Complex c[n], Complex result)
{
    printf("the sum of the complex number is %f + %fi",result.real,result.imaginary);
}