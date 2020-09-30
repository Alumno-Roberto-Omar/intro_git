#include<stdio.h>
int main(){
    char nombre[100];
    unsigned int edad;
    printf("Hola mundo!\n");
    printf("Nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s\n",nombre);
    printf("Edad: ");
    scanf("%u",&edad);
    printf("\nEntonces vas a cumplir %u",edad+1);
    return 0;
}