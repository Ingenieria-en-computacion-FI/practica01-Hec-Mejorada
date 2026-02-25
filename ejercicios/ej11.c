/*

1. Tamaño del tipo
Diferencia entre  &a[1]  y  &a[0] :  1008 - 1000 = 8 
Diferencia entre  &a[2]  y  &a[1] :  1016 - 1008 = 8 
El tamaño del tipo es 8 unidades de memoria (generalmente bytes).

2. Tipo posible
En C, los tipos con tamaño de 8 bytes incluyen:
 double  (generalmente 8 bytes)
 long long  (generalmente 8 bytes)
 long  (en sistemas de 64 bits, suele ser 8 bytes)
El tipo más común con este tamaño es  double .

3. Fórmula usada
La dirección de un elemento  a[i]  se calcula como:
 &a[i] = &a[0] + i * tamaño_del_tipo



Tamaño del tipo: 8
Tipo posible:  double  (o  long long ,  long  en 64 bits)
Fórmula:  &a[i] = &a[0] + i * tamaño_del_tipo

*/
