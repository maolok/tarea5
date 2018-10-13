#ifndef TRIANGLE_H
#define TRIANGLE_H

namespace  triangle {

struct Point2D
{
    double x;
    double y;

}  ;
struct Parameters
{

    Point2D punto1;
    Point2D punto2;
    Point2D punto3;



};

double compute_perimeter(Parameters *datos);

}

#endif // TRIANGLE_H
