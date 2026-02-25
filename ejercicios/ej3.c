
#include <stdio.h>
int main(){

    int a[3];
    int b[3];
    int c[3];
    int i,j,k;
    for ( i=0; i < 3; i++)
    {  
    printf("&a[%d]=%p\n" ,i,&a[i]);
    }
    for ( j=0; j < 3; j++)
    {  
    printf("&b[%d]=%p\n" ,j,&b[j]);
    }
    for ( k=0; k < 3; k++)
    {  
    printf("&c[%d]=%p\n" ,k,&c[k]);
    } 

    return 0;
}
