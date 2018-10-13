#include "principal.h"

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

double compute_perimeter(Parameters *datos)
{
   double perimetro;

   perimetro = 2*3.1415*datos->radio;

   return perimetro;


}




}
