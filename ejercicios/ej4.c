// calcular el tamaño del tipo, direccion de a [5] y formula usada
//& a[0] = 5000 y & a[3] = 5012

//La diferencia de direcciones entre  a[3]  y  a[0]  es de 3 posiciones.
//Diferencia de direcciones:  5012 - 5000 = 12 
//Tamaño del tipo:  12 / 3 = 4  unidades de memoria.


//La dirección de un elemento  a[i]  se calcula como:  dirección_base + i * tamaño_del_tipo 
//Dirección base:  &a[0] = 5000 
//Dirección de  a[5] :  5000 + 5 * 4 = 5000 + 20 = 5020

//&a[i] = &a[0] + i * tamaño_del_tipo

// Tamaño del tipo: 4

// Dirección de  a[5] : 5020

//Fórmula:  &a[i] = &a[0] + i * tamaño_del_tipo
