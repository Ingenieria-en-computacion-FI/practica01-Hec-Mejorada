/*

 Para  &m[0][3] :
 i = 0 ,  j = 3 
 Posición relativa:  0 * C + 3 = 3 
 Dirección:  dirección_base + 3 * t 

 Para  &m[1][0] :
 i = 1 ,  j = 0 
 Posición relativa:  1 * C + 0 = C 
 Dirección:  dirección_base + C * t


 Como en una matriz válida, el número de columnas  C  
 es al menos 4 (ya que existe  m[0][3] , lo que implica que  C > 3 ), entonces  C > 3 . Por lo tanto:
 C * t > 3 * t 
 dirección_base + C * t > dirección_base + 3 * t 
Es decir,  &m[1][0] > &m[0][3] .



&m[1][0]  es mayor que  &m[0][3] .


*/
