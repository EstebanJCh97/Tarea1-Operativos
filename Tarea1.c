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
  int matriz1[dim][dim];
  int matriz2[dim][dim];
  int matriz3[dim][dim];

 
 llenar_Matriz(dim,matriz1);// esta parte llamo a la funcion
 llenar_Matriz(dim,matriz2);// esta parte llamo a la funcion


 printf("\nLa matriz A es la siguiente \n");
 mostrar_matriz(dim,matriz1);// esta parte llamo a la funcion para que me muestre la matriz
 
 printf("\nLa matriz B es la siguiente");
 printf("\n");
 mostrar_matriz(dim,matriz2);// esta parte llamo a la funcion para que me muestre la matriz


 producto_matriz(dim,matriz1,matriz2,matriz3);
 printf("\nEL resultado del producto matriz es el siguiente");
 printf("\n");
 mostrar_matriz(dim,matriz3);// esta parte llamo a la funcion para que me muestre la matriz
 
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

int producto_matriz(int dim,int matriz1[dim][dim],int matriz2[dim][dim],int matriz3[dim][dim]){


    // Necesitamos hacer esto por cada columna de la segunda matriz (B)
    for (int a = 0; a < dim; a++) {
        // Dentro recorremos las filas de la primera (A)
        for (int i = 0; i < dim; i++) {
            int suma = 0;
            // Y cada columna de la primera (A)
            for (int j = 0; j < dim; j++) {
                // Multiplicamos y sumamos resultado
                suma += matriz1[i][j] * matriz2[j][a];
            }
            // Lo acomodamos dentro del producto
            matriz3[i][a] = suma;
        }
    }
}
