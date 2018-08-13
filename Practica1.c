#include <stdio.h>

void main(){
  int opcion=0;
  int opcion_estructura=0;
  int opcion_hoja=0;
  printf("---------------------------------------------------------------\n");
  printf("               ");
  printf("[EDD-B] Practica 1-201318564\n");
  printf("1. Estructuras de Datos\n2. Hoja de calculo\n3. Salir\n");
  printf("Elija una opcion (1-3): " );
  scanf("%d",&opcion);
//  printf("La opcion seleccionada es: %d",opcion);
  if(opcion==1){
    printf("-----------------------------------------\n");
    printf(" ");
    printf(" ");
    printf("Estructuras de datos\n");
    printf("1.1. Pila\n1.2. Cola\n1.3. Lista Doblemente enlazada\n1.4. Lista Circular Simplemente enlazada\n1.5. Regresar\n");
    printf("Elija una opcion (1-5): " );
    scanf("%d",&opcion_estructura);
  }else if(opcion==2){
    printf("-----------------------------------------\n");
    printf(" ");
    printf(" ");
    printf("Hoja de calculo\n");
    printf("2.1. Crear Hoja\n2.2. Insertar\n2.3. Sumar\n2.4. Restar\n2.5. Multiplicar\n2.6. Graficar\n2.7. Regresar\n");
    printf("Elija una opcion (1-7): " );
    scanf("%d",&opcion_hoja);

  }else{
    printf("No existe esa opcion");
  }
}
