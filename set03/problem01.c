#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);
int main()
{
    float x1, y1, x2, y2;
    input(&x1,&y1,&x2,&y2);
    float distance=find_distance(x1,y1,x2,y2);
    output(x1,y1,x2,y2,distance);
    return 0;
}
void input(float *x1, float *y1, float *x2, float *y2)
{
    printf("enter point 1 co-ordinates:");
    scanf("%f %f",x1,y1);
    printf("enter point 2 co-ordinates:");
    scanf("%f %f",x2,y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
    float distance;
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    return distance;
}
void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("the distance between %f,%f and %f,%f is %f",x1,y1,x2,y2,distance);
}