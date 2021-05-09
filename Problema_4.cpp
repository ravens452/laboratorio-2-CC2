//----------------------------------------------  4  ----------------------------------------------------------
//4. Implemente una función que reciba una cadena y retorne su tamaño. (Iterativa y recursiva)
int tamanioCadena ( const char cadena[] ) {
    int c = 0 ;
    while ( cadena[c] != '\0' )
        c ++;
    return c ;
}
int tamanioCadenaRecursivo (char* cadena ) {
    if (* cadena == '\0' ) // Condición base
        return 0 ;
    return (1 + tamanioCadenaRecursivo(++cadena) ) ;
}

int main(){
    char cadena[] = {'C','S','d','e','l','a','C','o','m','p','u','t','a','c','i','o','n'};
    cout<<"La longitud de la cadena es: "<<tamanioCadena(cadena)<<endl;

}