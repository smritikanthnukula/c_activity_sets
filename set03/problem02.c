#include <stdio.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3);
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3);
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result);
int main()
{
    float x1,y1,x2,y2,x3,y3;
    input_triangle(&x1,&y1,&x2,&y2,&x3,&y3);
    int result = is_triangle(x1,y1,x2,y2,x3,y3);
    output(x1,y1,x2,y2,x3,y3,result);
    return 0;
}
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
    printf("enter the coordinates of point 1:");
    scanf("%f %f",x1,y1);
    printf("enter the coordinates of point 2:");
    scanf("%f %f",x2,y2);
    printf("enter the coordinates of point 3:");
    scanf("%f %f",x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
    float area;
    area = 0.5 * ((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y2-y1)));
    if (area > 0)
    {
        return 1;
    }
    else 
    return 0;
}
void output(float x1, float y1, float x2, float y2,float x3, float y3, int result)
{
    if (result == 1)
    {
        printf("the given points can be a triangle");
    }
    else 
    {
        printf("the given points cant be a triangle");
    }

}