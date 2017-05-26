#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 26
//prototipo de funciones.

void morse(char frase[MAX]);

void morse(char frase[MAX])
{
    int i=0;
    char letra[MAX]="0";
printf("\n La frase en morse es:    ");
    while(frase[i]!='\0')
    {
        
if (frase[i] == 32){strcpy(letra,"/ ");}//espacio
if (frase[i] == 46){strcpy(letra," — · — · —");}//.
if (frase[i] == 44){strcpy(letra,"— · — · — —");}//,

if (frase[i] == 48){strcpy(letra,"— — — — —");}//0
if (frase[i] == 49){strcpy(letra,". — — — —");}//1
if (frase[i] == 50){strcpy(letra,"· · — — —");}//2
if (frase[i] == 51){strcpy(letra,"· · · — —");}//3
if (frase[i] == 52){strcpy(letra,"· · · · —");}//4
if (frase[i] == 53){strcpy(letra,"· · · · ·");}//5
if (frase[i] == 54){strcpy(letra,"— · · · ·");}//6
if (frase[i] == 55){strcpy(letra,"— — · · ·");}//7
if (frase[i] == 56){strcpy(letra,"— — — · ·");}//8
if (frase[i] == 57){strcpy(letra,"— — — — ·");}//9

if (frase[i] == 65){strcpy(letra,"· —");}//A
if (frase[i] == 66){strcpy(letra,"— · · ·");}//b
if (frase[i] == 67){strcpy(letra,"— · — ·");}///c
if (frase[i] == 68){strcpy(letra,"— · ·");}//d
if (frase[i] == 69){strcpy(letra,".");}//e
if (frase[i] == 70){strcpy(letra,"· · — ·");}//f
if (frase[i] == 71){strcpy(letra,"— — ·");}//g
if (frase[i] == 72){strcpy(letra,"· · · ·");}//h
if (frase[i] == 73){strcpy(letra,"· ·");}//i
if (frase[i] == 74){strcpy(letra,"· — — —");}//j
if (frase[i] == 75){strcpy(letra,"— · —");}//k
if (frase[i] == 76){strcpy(letra,"· — · ·");}//l
if (frase[i] == 77){strcpy(letra,"— —");}//m
if (frase[i] == 78){strcpy(letra,"— ·");}//n
if (frase[i] == 79){strcpy(letra,"— — —");}//o
if (frase[i] == 80){strcpy(letra,"· — — ·");}//p
if (frase[i] == 81){strcpy(letra,"— — · —");}//q
if (frase[i] == 82){strcpy(letra,"· — ·");}//r
if (frase[i] == 83){strcpy(letra,"· · ·");}//s
if (frase[i] == 84){strcpy(letra,"—");}//t
if (frase[i] == 85){strcpy(letra,"· · —");}//u
if (frase[i] == 86){strcpy(letra,"· · · —");}//v
if (frase[i] == 87){strcpy(letra,"· — —");}//w
if (frase[i] == 88){strcpy(letra,"— · · —");}//x
if (frase[i] == 89){strcpy(letra,"— · — —");}//y
if (frase[i] == 90){strcpy(letra,"— — · .");}//z

if (frase[i] == 97){strcpy(letra,"· —");}//A
if (frase[i] == 98){strcpy(letra,"— · · ·");}//b
if (frase[i] == 99){strcpy(letra,"— · — ·");}///c
if (frase[i] == 100){strcpy(letra,"— · ·");}//d
if (frase[i] == 101){strcpy(letra,".");}//e
if (frase[i] == 102){strcpy(letra,"· · — ·");}//f
if (frase[i] == 103){strcpy(letra,"— — ·");}//g
if (frase[i] == 104){strcpy(letra,"· · · ·");}//h
if (frase[i] == 105){strcpy(letra,"· ·");}//i
if (frase[i] == 106){strcpy(letra,"· — — —");}//j
if (frase[i] == 107){strcpy(letra,"— · —");}//k
if (frase[i] == 108){strcpy(letra,"· — · ·");}//l
if (frase[i] == 109){strcpy(letra,"— —");}//m
if (frase[i] == 110){strcpy(letra,"— ·");}//n
if (frase[i] == 111){strcpy(letra,"— — —");}//o
if (frase[i] == 112){strcpy(letra,"· — — ·");}//p
if (frase[i] == 113){strcpy(letra,"— — · —");}//q
if (frase[i] == 114){strcpy(letra,"· — ·");}//r
if (frase[i] == 115){strcpy(letra,"· · ·");}//s
if (frase[i] == 116){strcpy(letra,"—");}//t
if (frase[i] == 117){strcpy(letra,"· · —");}//u
if (frase[i] == 118){strcpy(letra,"· · · —");}//v
if (frase[i] == 119){strcpy(letra,"· — —");}//w
if (frase[i] == 120){strcpy(letra,"— · · —");}//x
if (frase[i] == 121){strcpy(letra,"— · — —");}//y
if (frase[i] == 122){strcpy(letra,"— — · .");}//z
  printf("%s",letra);
	
        i++;
    }
    
}


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
if (argc<=1){
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
morse(cadena);
    getchar();}
else{
char cadena[MAX]={0};
char letra[MAX]={0};
int numero=0;
strcpy(cadena,argv[2]);

strcpy(letra,argv[1]);
x = atoi(letra);
    printf("La frase encriptada es:   %s", encriptar(cadena, x));
    morse(cadena);
    getchar();
    
    
}return 0;}
