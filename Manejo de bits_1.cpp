#include <iostream>
#include <bitset> //Para el manejo de bits.
#include <conio.h>

using namespace std;

//Complementos / Representación de numeros negativos en bits.
void complemento_a_uno(int num1, int num2){
	cout << "Si el bit mas significativo es un 1 entonces es un numero negativo, si es un 0 es un numero positivo" << endl;
	cout << "" << num1 << " = " << "" << (~num1) << " C1 (Complemento a 1) -> " << "" << bitset<8>(~num1) << endl;
    cout << "" << num2 << " = " << "" << (~num2) << " C1 (Complemento a 1) -> " << "" << bitset<8>(~num2) << endl;
}
/*void complemento_a_dos(int num1, int num2){
}*/

//Desplazmientos.
void desplazamiento_derecha(int num1, int num2, int desplazamiento_numero){
	cout << "" << num1 << " = " << (num1>>desplazamiento_numero) << " == " << "" << bitset<8>(num1>>desplazamiento_numero) <<endl;
	cout << "" << num2 << " = " << (num2>>desplazamiento_numero) << " == " << "" << bitset<8>(num2>>desplazamiento_numero) <<endl;
}
void desplazamiento_izquierda(int num1, int num2, int desplazamiento_numero){
	cout << "" << num1 << " = " << (num1<<desplazamiento_numero) << " == " << "" << bitset<8>(num1<<desplazamiento_numero) <<endl;
	cout << "" << num2 << " = " << (num2<<desplazamiento_numero) << " == " << "" << bitset<8>(num2<<desplazamiento_numero) <<endl;
}

//Operadores.
void operador_not(int num1, int num2){//NOT
    cout << "" << num1 << " -> " << "" << bitset<8>(num1) << " == " << "" << (~num1) << " -> " << "" << bitset<8>(~num1)<< endl;
	cout  << "" << num2 << " -> " << "" << bitset<8>(num2)<< " == " << "" << (~num2) << " -> " << "" << bitset<8>(~num2)<< endl;	
	
}
void operador_and(int num1, int num2){//AND
	cout << "" << num1 << " and " << "" << num2 << " == " << (num1 & num2) << endl;
	cout << "" << bitset<8>(num1) << endl << "" << bitset<8>(num2) << endl << "" << bitset<8>(num1 & num2) << " == "  << "" << (num1 & num2) << endl;
}
void operador_or(int num1, int num2){//OR
	cout << "" << num1 << " or " << "" << num2 << " == " << (num1 & num2) << endl;
	cout << "" << bitset<8>(num1) << endl << "" << bitset<8>(num2) << endl << "" << bitset<8>(num1 | num2) << " == "  << "" << (num1 | num2) << endl;
}
void operador_xor(int num1, int num2){//XOR
	cout << "" << num1 << " xor " << "" << num2 << " == " << (num1 ^ num2) << endl;
	cout << "" << bitset<8>(num1) << endl << "" << bitset<8>(num2) << endl << "" << bitset<8>(num1 ^ num2) << " == "  << "" << (num1 ^ num2) << endl;
}

//Suma de bits.
void suma_de_bits(int num1, int num2){
	cout << "" << (num1 ^ num2) << " :XOR" << " == " << "" << bitset<8>(num1^num2) << endl; //Operar con XOR, 1,2
	cout << "" << (num1 & num2) << " :AND" << " == " << "" << bitset<8>(num1&num2) << endl; //Operar con and 6, 7

	/*do {
		cout << "El resultado de and es diferente de 0\nDesplazamiento (and) a la izquierda: " << "" << ((num1 & num2)<<1) << " == " << bitset<8>((num1 & num2)<<1) << endl; //Desplazar el resultado de and un bit a la izquierda.
		// a == (num1 ^ num2)
		// b == ((num1 & num2)<<1) and
		cout << "XOR: " << "" << ((num1 ^ num2) ^ ((num1 & num2)<<1)) << " == " << "" << bitset<16>(((num1 ^ num2) ^ ((num1 & num2)<<1))) << endl;
	    cout << "AND: " << "" << ((num1 ^ num2) & ((num1 & num2)<<1)) << " == " << "" << bitset<16>(((num1 ^ num2) & ((num1 & num2)<<1))) << endl;
	    if ((num1 ^ num2) & ((num1 & num2)<<1)!=0){
	    	cout << "" << (((num1 ^ num2) & ((num1 & num2)<<1))<<1) << " == " << "" << bitset<16>((((num1 ^ num2) & ((num1 & num2)<<1))<<1)) << endl;//Desplazamos a la izquierda nuevamente.
	    	//Volvemos a operar.
	    	// a == ((num1 ^ num2) ^ ((num1 & num2)<<1)) XOR
	    	// b == (((num1 ^ num2) & ((num1 & num2)<<1))<<1) AND
	    	cout << "" << (((num1 ^ num2) ^ ((num1 & num2)<<1)) & (((num1 ^ num2) & ((num1 & num2)<<1))<<1)) << " == AND: " << "" << bitset<16>((((num1 ^ num2) ^ ((num1 & num2)<<1)) & (((num1 ^ num2) & ((num1 & num2)<<1))<<1))) << endl;
	    	cout << "" << (((num1 ^ num2) ^ ((num1 & num2)<<1))^(((num1 ^ num2) & ((num1 & num2)<<1))<<1)) << " == XOR: " << "" << bitset<16>((((num1 ^ num2) ^ ((num1 & num2)<<1))^(((num1 ^ num2) & ((num1 & num2)<<1))<<1))) << endl;
		}
		break;
	}while ((num1 & num2) != 0);
	if ((num1&num2) == 0) {
		cout << "El resultado de la suma de bits es " << "" << (num1 ^ num2) << " == en bits: " << "" << bitset<16>(num1 ^ num2) << endl;
	}*/
}
//Rotaciones de bits.

int main (int argc, char *argv[]){
	int num1, num2, desplazamiento_numero;
	cout << "Digita un numero: "; cin >> num1; cout << "y otro numero: "; cin >> num2; cout << "Ahora, elige un numero, este sera utilizado para el desplazamiento de bits (izquieda y derecha): "; cin >> desplazamiento_numero;
	cout << "-------------------------------------------------------------------------\nDESPLAZAMIENTO A DERECHA\n";
	desplazamiento_derecha(num1, num2, desplazamiento_numero);
	cout << "-------------------------------------------------------------------------\nDESPLAZAMIENTO A IZQUIERDA\n";
	desplazamiento_izquierda(num1, num2, desplazamiento_numero);
	cout << "-------------------------------------------------------------------------\nOPERADOR NOT\n";
	operador_not(num1, num2);
	cout << "-------------------------------------------------------------------------\nOPERADOR AND\n";
	operador_and(num1, num2);
	cout << "-------------------------------------------------------------------------\nOPERADOR OR\n";
	operador_or(num1, num2);
	cout << "-------------------------------------------------------------------------\nOPERADOR XOR\n";
	operador_xor(num1, num2);
	cout << "-------------------------------------------------------------------------\nCOMPLEMENTO A UNO\n";
	complemento_a_uno(num1, num2);
	cout << "-------------------------------------------------------------------------\nSUMA DE BITS\n";
	suma_de_bits(num1, num2);
	getch ();
	
	return 0;
}
