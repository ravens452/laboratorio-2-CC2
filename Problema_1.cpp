//-------------------------------------------  1  -----------------------------------------

#include <iostream>
#include <iomanip>
#include <array>
#include <random>
#include <ctime>

using namespace std;
const size_t tamanio{3};

//********************************************************************************************************
//1.- Implementar una función reciba un arreglo de enteros y su tamaño y retorne la suma de los elementos de un arreglo. Tamaño del arreglo 1000000. (Iterativa y recursiva).
//********************************************************************************************************

/*---------------------------------------------
---------------  ITERATIVA  -----------------
---------------------------------------------*/
unsigned int sumaElementos(const array<unsigned int, tamanio>arreglo){
    unsigned int sum = 0;
    for (unsigned int elemento : arreglo) sum += elemento;
    cout<<sum<<endl;
    return sum;
}
void mostrar(const array<unsigned int, tamanio> arreglo){
    for (unsigned int elemento : arreglo ) {
        cout<<elemento<<" ";
    }
}
void crear(array<unsigned int, tamanio> &arreglo){
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1, 9);
    for ( unsigned int& elemento : arreglo) {
        elemento = randomInt(engine);
    }
}

/*---------------------------------------------
---------------  RECURSIVA  -----------------
---------------------------------------------*/
void crear(vector<unsigned int> &arreglo){
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1, 9);
    for ( unsigned int& elemento : arreglo) {
        elemento = randomInt(engine);
    }
}
void mostrar(const vector<unsigned int> arreglo){
    for (unsigned int elemento : arreglo ) {
        cout<<elemento<<" ";
    }
}
long sumaRecursiva(vector<unsigned int> arreglo, unsigned int posicion)
{
    if (posicion == arreglo.size()){return 0;}
    else
    {
        return (sumaRecursiva(arreglo, posicion + 1) + arreglo[posicion]);
    }
}

int main()
{
    vector<unsigned int > arreglo(10000);
    crear(arreglo);
//    mostrar(arreglo);
    unsigned int posicion = 0;
    cout << "actual: " << sumaRecursiva(arreglo, posicion) << std::endl;
}