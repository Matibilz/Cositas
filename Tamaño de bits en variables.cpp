/*******************************************************************************
 * Problematica: Escribir un programa utlizando la función sizeof() que permita conocer la cantidad de bytes ocupados por una variable en un espacio de memoria en especifico.
*******************************************************************************/
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	//Variables
    int dato_entero; //ok
    unsigned int dato_unsigned; //ok
    float dato_flotante; //ok
    char dato_char; //ok
    unsigned unsignedint; //ok
    unsigned char dato_unsigchar; //ok
    unsigned long dato_unsigned_long; //ok
    unsigned long long dato_unsigned_longlong; //ok
    unsigned short dato_unsignedshort; //ok
    bool dato_booleano; //ok
    long dato_long; //ok
    long long dato_long_long; //ok
    short dato_shor; //ok
    double dato_double; //ok
    long double dato_longdouble; //ok
    
    printf ("%c El tamaño de la variable int es: %d bytes\n", 175, sizeof(dato_entero));
    printf ("%c El tamaño de la variable unsigned_int es: %d bytes\n", 175, sizeof(dato_unsigned));
    printf ("%c El tamaño de la variable float es: %d bytes\n", 175, sizeof(dato_flotante));
    printf ("%c El tamaño de la variable char es: %d bytes\n", 175, sizeof(dato_char));
    printf ("%c El tamaño de la variable unsigned es: %d bytes\n", 175, sizeof(unsignedint));
    printf ("%c El tamaño de la variable unsigned char es: %d bytes\n", 175, sizeof(dato_unsigchar));
    printf ("%c El tamaño de la variable unsigned long es: %d bytes\n", 175, sizeof(dato_unsigned_long));
    printf ("%c El tamaño de la variable unsigned long long es: %d bytes\n", 175, sizeof(dato_unsigned_longlong));
    printf ("%c El tamaño de la variable unsigned short es: %d bytes\n", 175, sizeof(dato_unsignedshort));
    printf ("%c El tamaño de la variable booleano es: %d bytes\n", 175, sizeof(dato_booleano));
    printf ("%c El tamaño de la variable long es: %d bytes\n", 175, sizeof(dato_long));
    printf ("%c El tamaño de la variable long long es: %d bytes\n", 175, sizeof(dato_long_long));
    printf ("%c El tamaño de la variable short es: %d bytes\n", 175, sizeof(dato_shor));
    printf ("%c El tamaño de la variable double es: %d bytes\n", 175, sizeof(dato_double));
    printf ("%c El tamaño de la variable long double es: %d bytes\n", 175, sizeof(dato_longdouble));
    
    return 0;
}

