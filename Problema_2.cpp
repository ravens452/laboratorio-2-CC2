//----------------------------------------  2  ------------------------------
//Implementar una función que invierta los elementos de un arreglo de enteros (Iterativa y recursiva). Tamaño del arreglo 1000000.

void crear(array<unsigned int,tamanio> &arreglo){
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> randomInt(1, 9);
    for ( unsigned int& elemento : arreglo) {
        elemento = randomInt(engine);
    }
}
void mostrar(const array<unsigned int,tamanio> arreglo){
    for (unsigned int elemento : arreglo ) {
        cout<<elemento<<" ";
    }
}
void reverso(const array<unsigned int,tamanio> arreglo){
    int i=0;
    cout<<"\nEl reverso del arreglo es:"<<endl;
    for(i=(tamanio-1); i>=0; i--)
        cout<<arreglo[i]<<" ";
    cout<<endl;
}
void reversoRecursivo(array<unsigned int,tamanio> arreglo,int tam){
    if(tam ==0){return;}
    else{
        unsigned int temp;
        unsigned int i= 0;
        temp = arreglo[i];
        arreglo[i] = arreglo[tam-1];
        arreglo[tam -1] = temp;
        reversoRecursivo(arreglo, tam-1);
    }
}

int main(){
    array<unsigned int,tamanio> arreglo{};
    crear(arreglo);
    mostrar(arreglo);
    reverso(arreglo);
    return 0;
}
