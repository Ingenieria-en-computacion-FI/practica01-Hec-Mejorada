
#include <stdio.h>
int main(){
int m[2][4]; 
int i,j;
for (i=0;i<2;i++){
    for(j=0;j<2;j++){
        printf("&m[%d][%d]=%p\n",i,j,&m[i][j]);
    }
}
return 0;    
    
}
