
#include <stdio.h>
int main(){

    int a[5];
    int i,

    for (i=-1;i<4;i++){
        printf ("&a[%d]=%p\n",i,&a[i]);
    }

    return 0;
}


/*

1. ¿Por qué compila?
En C,  a[i]  equivale a  *(a+i) , así que  &a[i]  es solo  a+i . El compilador no verifica límites, solo calcula direcciones con aritmética de punteros.

2. ¿Por qué es peligroso?
Acceder a  a[-1]  o  a[5]  es comportamiento indefinido: puedes leer datos ajenos, corromper memoria o causar fallos en el programa.

3. ¿Qué revela sobre la memoria?

 La memoria es un espacio lineal y direccionable.

 C no protege límites; arreglos y punteros son equivalentes.

 Los límites del arreglo son lógicos, no impuestos por el lenguaje.



*/
