#ifndef CIRCLE_H
#define CIRCLE_H

namespace circle {
struct Point2D
{
    double x;
    double y;

}  ;
struct Parameters
{

    Point2D punto1;
    double radio;


};

double compute_perimeter(Parameters *datos);

}

#endif // CIRCLE_H
