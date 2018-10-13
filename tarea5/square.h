#ifndef SQUARE_H
#define SQUARE_H

namespace square {

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
    Point2D punto4;


};

double compute_perimeter(Parameters *datos);

}

#endif // SQUARE_H
