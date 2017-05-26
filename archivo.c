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

int main(int argc, char const *argv[])
{
    //Variables necesarias
    int x;
    //Presentación

char cadena[MAX]={0};
char letra[MAX]={0};
int numero=0;
strcpy(cadena,argv[2]);

strcpy(letra,argv[1]);
x = atoi(letra);
    printf("La frase encriptada es:   %s", encriptar(cadena, x));
    getchar();
    
    return 0;
}
