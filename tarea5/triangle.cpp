#include "principal.h"

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

double compute_perimeter(Parameters *datos)
{
    double temp = pow((datos->punto1.x - datos->punto2.x),2);
    double temp2 = pow((datos->punto1.y - datos->punto2.y),2);
    double lado1 = sqrt(temp + temp2);

    double temp4 = pow((datos->punto2.x - datos->punto3.x),2);
    double temp5 = pow((datos->punto2.y - datos->punto3.y),2);
    double lado2 = sqrt(temp4 + temp5);

    double temp7 = pow((datos->punto1.x - datos->punto3.x),2);
    double temp8 = pow((datos->punto1.y - datos->punto3.y),2);
    double lado3 = sqrt(temp7 + temp8);



    double perimetro = lado1 + lado2 + lado3;

    return perimetro;


}


}
