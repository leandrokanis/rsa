#include <iostream>
#include <stdio.h>
#include <climits>
#include <cassert>
#include <cstdlib>
#include <string>
#include <cstring>
#include <sstream>
#include <iomanip>
using std::string;
using namespace std;

unsigned long long int congruencia(unsigned long long int base, unsigned long long int expoente, unsigned long long int modulo) {
  base %= modulo;
  unsigned long long int resultado = 1;
  while (expoente > 0) {
    if (expoente & 1) resultado = (resultado * base) % modulo;
    base = (base * base) % modulo;
    expoente >>= 1;
  }
  return resultado;
}
 
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
	return (long)congruencia(original, e, n);
}

unsigned long long int Desencriptar(long encriptado, long chave, long n){	
	return  congruencia(encriptado, chave, n);
}

// transforma de long para string
string Digitalizar(long val){   
  string Result;
  ostringstream convert;
  convert << setfill('0') << setw(9) << val;
  //convert << val;
  Result = convert.str();
  return Result;
}

// transforma de string pra long
unsigned long long int Desdigitalizar(string val){ 
	return strtoull(val.c_str(), (char **)NULL, 10);
}
