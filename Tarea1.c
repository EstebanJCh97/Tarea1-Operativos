#include<stdio.h>
#include<time.h>
#include<stdlib.h>



void llenar_Matriz(int dim, int matriz[dim][dim]);
void mostrar_matriz(int dim, int matriz[dim][dim]);

int main(){
 srand(time(NULL));
    int dim;
 printf("Ingrese la dimension: ");
 scanf("%d",&dim);
  int matriz[dim][dim];
 
 llenar_Matriz(dim,matriz);// esta parte llamo a la funcion
 
 mostrar_matriz(dim,matriz);// esta parte llamo a la funcion para que me muestre la matriz
 
 
 return 0;
}




// esta funcion muestra la matriz generada
void mostrar_matriz(int dim, int matriz[dim][dim]){
 int i,j;
 for(i=0;i<dim;i++){
  for(j=0;j<dim;j++){
   printf("%d\t",matriz[i][j]);
  }
  printf("\n");
 }
}


// esta funcion para llenar la matriz al azar
void llenar_Matriz(int dim, int matriz[dim][dim]){
 int i,j;
 for(i=0;i<dim;i++){
  for(j=0;j<dim;j++){
    matriz[i][j]= 1+rand() % 9;
  }
 }
}
