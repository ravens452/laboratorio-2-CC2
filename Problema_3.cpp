//---------------------------------------  3  --------------------------------------------------------------
// Implementar una función que ordene los elementos de un arreglo: ascendente. Tamaño del arreglo 1000000.
void crear(int *arreglo){
    default_random_engine engine(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<int> randomInt(1, 9);
    for(int i=0;i<tamanio;i++){
        *(arreglo+i) = randomInt(engine);
    }
}
void mostrar(int *const arreglo){
    for(int i=0;i<tamanio;i++){
        cout<<*(arreglo+i)<<" ";
    }
}
void ordenarNumeros(int *array,int nElementos){
    int aux;
    //Ordenamiento burbuja con punteros
    for(int i=0;i<nElementos;i++){
        for(int j=0;j<nElementos-1;j++){
            if(*(array+j) > *(array+j+1)){
                aux = *(array+j);
                *(array+j) = *(array+j+1);
                *(array+j+1) = aux;
            }
        }
    }
}
void ordenarNumRecursivo(int *arr, int n)
{
    if (n == 1)//Paso Base
        return;

    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
    ordenarNumRecursivo(arr, n - 1);
}

int main(){
    int *array = new int[tamanio];
    crear(array);
    cout<<"array sin ordenar: ";
    mostrar(array);
    cout<<endl;
    ordenarNumRecursivo(array,tamanio);
    cout<<"array  ordenado: ";
    mostrar(array);
    delete[] array;
    return 0;
}

