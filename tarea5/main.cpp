#include "principal.h";
#include "square.h"
#include "circle.h"
#include "triangle.h"





int main()
{
    circle::Parameters parametros;
    square::Parameters parametros1;
    triangle::Parameters parametros2;


    cout<<"ingrese radio del circulo"<<endl;
    cin>>parametros.radio;

    double perimetroc,perimetros,perimetrot;

    perimetroc=circle::compute_perimeter(&parametros);


    cout << "El perimetro del circulo es :" <<perimetroc<<endl;


    cout<<"INGRESE COORDENADAS DEL CUADRADO :"<<endl;
    cout<<"PUNTO1.X :"<<endl;
    cin>>parametros1.punto1.x;
    cout<<"PUNTO1.Y :"<<endl;
    cin>>parametros1.punto1.y;
    cout<<"PUNTO2.X :"<<endl;
    cin>>parametros1.punto2.x;
    cout<<"PUNTO2.Y :"<<endl;
    cin>>parametros1.punto2.y;
    cout<<"PUNTO3.X :"<<endl;
    cin>>parametros1.punto3.x;
    cout<<"PUNTO3.Y :"<<endl;
    cin>>parametros1.punto3.y;
    cout<<"PUNTO4.X :"<<endl;
    cin>>parametros1.punto4.x;
    cout<<"PUNTO4.Y :"<<endl;
    cin>>parametros1.punto4.y;

    perimetros = square::compute_perimeter(&parametros1);

    cout << "El perimetro del cuadrado es :" <<perimetros<<endl;

    cout<<"INGRESE COORDENADAS DEL TRIANGULO :"<<endl;
    cout<<"PUNTO1.X :"<<endl;
    cin>>parametros2.punto1.x;
    cout<<"PUNTO1.Y :"<<endl;
    cin>>parametros2.punto1.y;
    cout<<"PUNTO2.X :"<<endl;
    cin>>parametros2.punto2.x;
    cout<<"PUNTO2.Y :"<<endl;
    cin>>parametros2.punto2.y;
    cout<<"PUNTO3.X :"<<endl;
    cin>>parametros2.punto3.x;
    cout<<"PUNTO3.Y :"<<endl;
    cin>>parametros2.punto3.y;

    perimetrot = triangle::compute_perimeter(&parametros2);

    cout << "El perimetro del Triangulo es :" <<perimetrot<<endl;

    return 0;

}


