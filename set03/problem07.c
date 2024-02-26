// Write a program to find the length of a line
#include <stdio.h>
#include <math.h>
struct point {
    float x, y;
};
typedef struct point Point;

struct line {
    Point p1, p2;
    float distance;
};
typedef struct line Line;

Point input_point();
Line input_line();
void find_length(Line *l);
void output(Line l);

int main()
{
    Line l;
    l=input_line();
    find_length(&l);
    output(l);
    return 0;
}
Point input_point()
{
    Point p;
    printf("the coordinates x , y :");
    scanf("%f %f",&p.x,&p.y);
    return p;
}
Line input_line()
{
    Line l;
    printf("starting point of the line:");
    l.p1=input_point();
    printf("ending point of the line:");
    l.p2=input_point();
    return l;
}
void find_length(Line *l)
{
    float dx = l->p2.x - l->p1.x;
    float dy = l->p2.y - l->p1.y;
    l->distance = sqrt((dx*dx)+(dy*dy));
}
void output(Line l)
{
    printf("The distance between the points (%f,%f) and (%f,%f) is %f",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);
}