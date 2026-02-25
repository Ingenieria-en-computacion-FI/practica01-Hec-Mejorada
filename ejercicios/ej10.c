
#include <stdio.h>

int BIG[10000000];
int main(){
    
    return 0;
}


/*

¿Por qué falla?
Porque las variables locales se almacenan en el stack, que tiene un tamaño limitado
(generalmente 1 MB a 8 MB según el sistema operativo). Un arreglo de 10,000,000 enteros ocupa:
10,000,000 × 4 bytes = 40,000,000 bytes = ~38 MB
Eso supera el límite del stack, causando un Stack Overflow


¿Dónde se almacena?
Las variables locales 
(declaradas dentro de main o cualquier función) 
se almacenan en el stack. El stack no tiene espacio suficiente para arreglos tan grandes.


Solución sin memoria dinámica
Declarar el arreglo como variable global 
(fuera de main), ya que las variables globales se almacenan en el segmento de datos (heap estático), 
que tiene mucho más espacio disponible



*/
