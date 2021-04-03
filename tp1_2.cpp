#include<stdio.h>
#include<stdlib.h>

int potencia(int n);
void potenciaVoid(int n);
void invertir();
void ordenar();

int main(){

    int num,res;
    printf("ingrese un numero para calcular su cuadrado: ");
    scanf("%d",&num);

    res=potencia(num); //potencia por funcion que devuelve un valor

    printf("\n");
    printf("Cuadrado por funcion que devuelve un valor:\n");
    printf("El cuadrado de %d es: %d\n",num,res);

    printf("\nLa direccion de memoria de la variable resultado es: %p\n",&res);


    potenciaVoid(num); //potencia por funcion que devuelve void


    invertir(); //funcion invertir valores
    ordenar(); //funcion ordenar de menor a mayor

    system("PAUSE");

     return (0);



}





int potencia(int n){
    int res=n*n;
    return(res);

}

void potenciaVoid(int n){
    int res=n*n;
    printf("\n");
        printf("Cuadrado por funcion que devuelve void :\n");
    printf("El cuadrado de %d es: %d\n",n,res);
    printf("\nLa direccion de memoria de la variable resultado es: %p\n",&res);
    

}

void invertir(){

    int a,b;
    
    printf("\n");
    printf("Ingrese 2 valores para invertir su orden:\n ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\nEl orden de los valores es %d %d",a,b);
    printf("\nEl nuevo orden de los valores es %d %d\n",b,a);


}

void ordenar(){

    int a,b,c;
    
    printf("\n");
    printf("Ingrese 2 valores para invertir su orden:\n ");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\nEl orden de los valores es %d %d",a,b);
    if(a<b){
        printf("\nEl orden de los valores de menor a mayor es %d %d\n",a,b);
    }
    else{
         printf("\nEl orden de los valores de menor a mayor es %d %d\n",b,a);
    }

}