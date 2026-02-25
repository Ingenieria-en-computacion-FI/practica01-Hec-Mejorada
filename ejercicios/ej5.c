/*
un estudiante afirma que : si a [0] = 1000 entonces a[10]= 1010.
demuestra formalmente si es correcto.




La dirección de memoria de  a[i]  se calcula como:
 &a[i] = &a[0] + i * sizeof(T) 
Aquí,  sizeof(T)  es el tamaño en memoria del tipo de dato  T . Por ejemplo, si  T  es un entero de 4 bytes,  
&a[10] = &a[0] + 10 * 4 = &a[0] + 40 . Pero esto se refiere a direcciones, no a los valores almacenados.



No existe una relación matemática fija entre 
a[0]  y  a[10]  en términos de sus valores. Los valores de los elementos de un arreglo son independientes a menos que se
hayan inicializado o modificado explícitamente. Por ejemplo:

 Si  a[0] = 1000 , 
a[10]  podría ser  500 ,  2000 ,  0  o cualquier otro valor, dependiendo de cómo se haya definido o manipulado el arreglo.


La afirmación del estudiante es incorrecta porque confunde el valor de los elementos del arreglo con la dirección de memoria de estos.
El valor de  a[10]  no se deriva simplemente de sumar 10 al valor de  a[0] .




*/
