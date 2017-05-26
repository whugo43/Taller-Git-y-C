#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 26
//prototipo de funciones.
char * encriptar(char nuv_fra[MAX],int num);


char *  encriptar(char cadena[MAX],int llave){
    int i=0;
    int dif;
 	llave=llave % 26;
    while(cadena[i]!='\0'){
	if(cadena[i]>='A' && cadena[i]<='Z'){
		if((dif=cadena[i]+llave-'Z')>0){
			cadena[i]='A'+dif-1;
		}else{
        	cadena[i]+=llave;
        }
	}else if(cadena[i]>='a' && cadena[i]<='z'){
		if((dif=cadena[i]+llave-'z')>0){
			cadena[i]='a'+dif-1;
		}else{
        	cadena[i]+=llave;
        }
	}
	i++;
    }
    return cadena;  
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
    //Un especificador que admite texto:
    scanf("%26[^\n]", cadena);
    //Vacía el buffer del teclado
    while(getchar()!='\n');
    //Pedimos el número
    printf("introduce un numero:      ");
    scanf("%d",&x);
    //Vacía el buffer del teclado
    while(getchar()!='\n');
    //Llamamos a la función encriptar
    printf("La frase encriptada es:   %s", encriptar(cadena, x));
    getchar();
    
    return 0;
}
