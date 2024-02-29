//  Write a program to find the distance between two points.
#include<stdio.h>
struct point {
  float x;
  float y;
};

typedef struct point Point;

Point input();
void dist(Point a, Point b, float *res);
void output(Point a, Point b, float res);
int main()
{

}
Point input()
{
    Point p;
    printf("enter point 1 co-ordinates:");
    scanf("%f %f",p.x1,p.y1);
    printf("enter point 2 co-ordinates:");
    scanf("%f %f",p.x2,p.y2);
    return p;

}
void dist(Point a, Point b, float *res)
{
    *res=sqrt((a2-a1)*(a2-a1)+(b2-b1)*(b2-b1));
}
void output(Point a, Point b, float res);
