#include <stdio.h>
#include "math.h"

float raizUniversal (int numero, float raiz);
int pideNumero();
float pideRaiz(int negativo);
void imprimeResultado(float raiz);

int main() {
    int num, negativo=0;
    float raiz, resul;
    num=pideNumero();
    if (num<0)
        negativo=1;
    raiz=(float)pideRaiz(negativo);
    imprimeResultado(raizUniversal(num,raiz));
}

int pideNumero(){
    int num;
    printf("Escribe el numero al cual le quieres extraer la raiz: ");
    scanf("%d",&num);
    return num;
}

float pideRaiz(int negativo){
    int num;
    printf("Escribe la raiz que quieres extraer: ");
    scanf("%d",&num);
    fflush(stdin);
    while (negativo==1 && num%2==0){
        printf("No se puede extraer una raiz par a un numero negativo.");
        printf("\nEscribe la raiz que quieres extraer: ");
        scanf("%d",&num);
        fflush(stdin);
    }
    return num;
}

float raizUniversal (int numero, float raiz){
    float resul;
    resul= pow(numero,1/raiz);
    return resul;
}

void imprimeResultado(float raiz){
    printf("La raiz es: %f",raiz);
}