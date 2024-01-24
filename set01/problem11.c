#include <stdio.h>

struct complex_numbers
{
    float imaginary;
    float real;
};
typedef struct complex_numbers Complex;

Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
int main()
{

}
Complex input_complex()
{
    Complex c;
    printf("enter the real part of complex no:");
    scanf("%f",c.real);
    printf("enter the imaginary part of complex no:");
    scanf("%f",c.imaginary);
    return c;
}
Complex add_complex(Complex a, Complex b)
{
    Complex sum;
    sum.real=a.real+b.real;
    sum.imaginary=a.imaginary+b.imaginary;

}
void output(Complex a, Complex b, Complex sum)