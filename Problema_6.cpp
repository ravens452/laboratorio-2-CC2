//----------------------------------------------  6  ------------------------------------------------------------------------
//6. Implemente una función que reciba un arreglo de cadenas y su tamaño y ordene lexicográﬁcamente dicho arreglo.
//Tamaño del arreglo 1000000.
#include <iostream>
using namespace std;
void ordenLexicografico(string cadena[]){
    string temp;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9 - i; ++j) {
            if (cadena[j] > cadena[j + 1]) {
                temp = cadena[j];
                cadena[j] = cadena[j + 1];
                cadena[j + 1] = temp;
            }
        }
    }
}
void mostrar(string cadena[]){
    for(int i = 0; i < 10; ++i)
    {
        cout << cadena[i]<<" ";
    }
}
int main()
{
    string cadena[10] = {"Hola","Companieros","de","2do","anio"};
    cout << "Cadena sin ordenar:          ";
    mostrar(cadena);
    cout<<endl;
    ordenLexicografico(cadena);
    cout << "En orden lexicografico: ";
    mostrar(cadena);
    return 0;
}