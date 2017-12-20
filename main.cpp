#include <iostream>
//En este lenguaje, el orden de declaracion de clases y variables es muy importante, a diferencia de java, que cualquier orden vale.

using namespace std;

class MyClass{
    
};

int main()
{
    int *p1;    //ambos son punteros, lo que importa es que tengan el asterisco delante.
    int* p2;
    int numero1 = 20;
    int numero2 = 1;
    p1 = &numero1;      //se utiliza como alias el simbolo "&".
    p2 = &numero2;
    cout<<numero1<<endl;    //"endl" es como un print line.
    cout<<numero2<<endl;
    cout<<*p1<<endl;     //"*" es el operador de puntero, lo que hace que la direccion devuelva el contenido, en vez de la direccion de memoria. 
    cout<<p2<<endl;

    MyClass stack = MyClass();  //"memoria de monticulo(heap)" puede variar el tama�o(memoria din�mica). Esta variable es un objetio puro.
    MyClass* heap = new MyClass();  //"memoria de pila(stack)" el tama�o es fijo, pero es m�s r�pida. Arduino solo tiene esta. 
                                    //Al a�adirle el asterisco a la variable, se convierte en un puntero.
    
    cout<<&stack<<endl; //necesita el alias
    cout<<heap<<endl;   //al ser ya un puntero, no necesita el asterisco para convertirlo en puntero 
    
    return 0;
}