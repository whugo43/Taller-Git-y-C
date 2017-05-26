 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #define MAX 26
 //prototipo de funciones.
 void encriptar(char frase[MAX],int numero);
 
 void encriptar(char frase[MAX],int numero)
 {
     int i=0;
     char letra;
     while(frase[i]!='\0')
     {
         frase[i]=frase[i]+numero;
         i++;
     }
     printf("\nLa frase encriptada es:\n%s\n",frase);
 }
 
 int main()
 {
     //Variables necesarias
     int x;
     char cadena[MAX];
     //Presentación
    
     printf("        cifrado cíclico:\n");
     printf("-----------------------------\n");
     printf("introduce una cadena:     ");
     scanf("%26[^\n]", cadena);
     while(getchar()!='\n');
     printf("introduce un numero : ");
     scanf("%d",&x);
     while(getchar()!='\n');
     encriptar(cadena, x);
     getchar();
     
     return 0;
 }
