#include <stdio.h>
#include<string.h> 
#include <stdlib.h> 
#include <stdio.h>
#include <time.h>
void menu();
void operatrans(int u);
float precioruta(int usuario);
float descuento(float distancia, float precio, int u){
if (distancia>=0 && distancia<50)
{
    printf("Usuario %d su precio a pagar es $%.2f\n",u, precio);
    operatrans(u);
}
else if (distancia>=50 && distancia<100)
{
    precio=precio*0.95;
    printf("Usuario %d se le ha aplicado un descuento del 5 porciento, su precio a pagar es $%.2f\n",u, precio);
    operatrans(u);
}
else if (distancia>=100 && distancia<500)
{
    precio=precio*0.9;
    printf("Usuario %d se le ha aplicado un descuento del 10 porciento, su precio a pagar es $%.2f\n",u, precio);
    operatrans(u);
}
else
{
    precio=precio*0.8;
    printf("Usuario %d se le ha aplicado un descuento del 20 porciento, su precio a pagar es $%.2f\n",u, precio);
    operatrans(u);
}
return;
}
float precioruta(int usuario){
    int ruta;
    float precio, distancia;
    while (usuario!=5)
    {
    printf("Usuario:%d\n",usuario);
    printf("Seleccione un tipo de ruta.\n 1. Urbana\n 2. Interurbana\n 3. Internacional\n");
    scanf ("%d", &ruta);
    switch (ruta)
    {
    case 1:
        printf("Su ruta es Urbana\n");
        do
        {
            printf("Ingrese la disctancia en kilometros a recorrer\n");
            scanf("%f", &distancia);
        } while (distancia<0);
        precio=distancia*0.10;
        descuento(distancia, precio, usuario);
        break;
    case 2:
        printf("Su ruta es Interurbana\n");
       do
        {
            printf("Ingrese la disctancia en kilometros a recorrer\n");
            scanf("%f", &distancia);
        } while (distancia<0);
        precio= distancia*0.15;
        descuento(distancia, precio, usuario);
        break;
    case 3:
        printf("Su ruta es Internacional\n");
        do
        {
            printf("Ingrese la disctancia en kilometros a recorrer\n");
            scanf("%f", &distancia);
        } while (distancia<0);
        precio= distancia*0.20;
        descuento(distancia, precio, usuario);
        break;
    default:
        printf("La ruta seleccionada no existe, intentelo nuevamente\n");
        precioruta(usuario);
        break;
    }
    }
    return;
}
void operatrans(int u){
    u=u+1;
    while (u!=6)
    {
        precioruta(u);
    }
    menu();
    
}
void redes(){
 int publicaciones=1,puntuacion;
 char mensaje[200];
 while (publicaciones!=6)
 {
    printf("Ingrese el mesaje para su publicacion\n");
    scanf("%s", &mensaje);
    do
    {
        printf("Ingrese una puntuacion del 1 al 5 para su mensaje\n");
        scanf("%d", &puntuacion);
    } while (puntuacion<0 && puntuacion>=5);
    switch (puntuacion)
    {
    case 1:
        printf("\nPublicacion %d\n", publicaciones);
        printf("Mensaje negativo\n");
        printf("%s\n\n", mensaje);
        break;
    case 2:
        printf("\nPublicacion %d\n", publicaciones);
        printf("Mensaje negativo\n");
        printf("%s\n\n", mensaje);
        break;
    case 3:
        printf("\nPublicacion %d\n", publicaciones);
        printf("Mensaje neutral\n");
        printf("%s\n\n", mensaje);
        break;
    case 4:
        printf("\nPublicacion %d\n", publicaciones);
        printf("Mensaje positivo\n");
        printf("%s\n\n", mensaje);
        break;
    case 5:
        printf("\nPublicacion %d\n", publicaciones);
        printf("Mensaje positivo\n");
        printf("%s\n\n", mensaje);
        break;
    }
    publicaciones=publicaciones+1;
 }
 
}
void opciones(int op){
    switch (op)
    {
    case 1:
    op=0;
    operatrans(op);
        break;
    case 2:
    redes();
        break;
    case 3:
    printf("Tenga un lindo dia");
        exit(0);    
    default:
        printf("Opcion invalida, intentelo nuevamente\n");
        menu();
        break;
    }
    return;
}
void menu(){
    int op;
    while (op!=4){
    printf("Seleccione una opcion\n");
    printf("1. Operacion de transporte\n");
    printf("2. Intereacturar en la red social\n");
    printf("3. Salir\n");
    scanf("%d", &op); 
    opciones(op);
    }
    return;    
}
int main (void)
{
    int acep, u1, u2, u3, inten, icus;
    char us1[10]="Andres";
    char us2[10]="User";
    char us3[10]="Eder";
    int cus1=25024, cus2=67890, cus3=12345;
    char ius[10];
    inten=3;
    do {
        printf("Log in\n");
        printf("Ingrese el usuario\n");
        scanf("%s", &ius);
        printf("Ingrese la contrasena\n");
        scanf("%d", &icus);
        u1 = strcmp(ius,us1);
        u2 = strcmp(ius,us2);
        u3 = strcmp(ius,us3);
        if (u1==0 && cus1==icus || u2==0 && cus2==icus || u3==0 && cus3==icus)
        {
            printf("Usuario y contrasena correctos\n");
            acep=1;
        }

        else{
            inten=inten-1;
            printf("Usuario o contrasena incorrectos.\n Intentelo nuevamente.\n Le quedan %d intentos\n", inten);
             if (inten==0)
            {
            printf("Imposible ingresar, intentelo en otro momento\n");
            exit(0);
            }
        }
    }while(acep!=1 || inten==0);
    menu();
    
    return 0;
}