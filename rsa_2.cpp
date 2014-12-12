#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <iostream>
using namespace std;
  
long E(long totiente){	
	long i, e=0;
	long resto;
	
	for(i = 2; i<totiente; i++){
		e = i;
		resto = totiente%e;	
		while(resto!=0)
              {
                  totiente = e;
                  e = resto;
                  resto = totiente%e;     
              } if(e == 1){
              	break;
              }
	}
	return i;
}

long Totiente(long primo1, long primo2){
	return (primo1-1)*(primo2-1);
}

long N(long primo1, long primo2){
	return primo1*primo2;
}

long Chave(long toriente, long e){
	return ((2*toriente) + 1)/e;
}

long Encriptar(long original, long e, long n){	
	return (long)pow(original, e)%n;
}

unsigned long long int Desencriptar(long encriptado, long chave, long n){	
	return  (long long int)pow(encriptado, chave)%n;
}


int main(){

    long primo1 = 8969, primo2 = 13711;
    //long primo1 = 53, primo2 = 59;
    long n=0, totiente=0, original=0, encriptado=0;
    unsigned long long int desencriptado=0;
    long e=0, chave=0;

    n = N(primo1, primo2);
    totiente = Totiente(primo1, primo2);
    e = E(totiente);
    chave = Chave(totiente, e);

    original = 89;
    encriptado = Encriptar(original, e, n);
    desencriptado = Desencriptar(encriptado, chave, n);

	cout << "n: " << n << "\n";
	cout << "totiente: " << totiente << "\n";
	cout << "original: " << original << "\n";
	cout << "e: " << e << "\n";
	cout << "Chave: " << chave << "\n";
	cout << "encriptado: " << encriptado << "\n";
	cout << "desencriptado: " << desencriptado << "\n";
    return 0;
}
