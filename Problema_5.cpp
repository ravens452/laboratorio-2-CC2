//---------------------------------------------  5  -------------------------------------------------------------------------
//5. Implemente una función que reciba dos cadenas a y b; dicha función debe concatenar la cadena a a la cadena b.
//(asuma que la cadena b tiene el tamaño suﬁciente para contener los elementos de a).
void mostrar(char cadena []){
    for (int i = 0; cadena[i] != '\0';i++) {
        cout<<cadena[i]<<" ";
    }
}
int main() {
  char cadena1[100] = "Hola ", cadena2[] = "Mundo";
  int longitud = 0;

  while (cadena1[longitud] != '\0') {//hallamos longitud de cadena1
    ++longitud;
  }

  for (int i = 0; cadena2[i] != '\0'; ++i, ++longitud) { //concatenando desde posicion "longitud"
      cadena1[longitud] = cadena2[i];
  }
  cadena1[longitud] = '\0';//damos fin a la cadena1
  cout<<"Cadena Concatenada: ";
  mostrar(cadena1);
  return 0;
}