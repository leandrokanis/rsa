#include <iostream>
#include <stdio.h>
#include <climits>
#include <cassert>
#include <string>
#include <sstream>
#include <iomanip>
#include "function.h"
using std::string;
using namespace std;

int main(int argc, const char *argv[]){
  
  FILE *fp, *fw;
  char ch;
  int i=0;
  fp = fopen ( "texto.txt", "r" );
  fw = fopen ( "saida.txt", "a" ) ;
  int tamanho=0;

  long primo1 = 8969, primo2 = 13711;
  //long primo1 = 53, primo2 = 59;
  long n=0, totiente=0, original=0, encriptado=0;
  unsigned long long int desencriptado=0;
  long e=0, chave=0;

  n = N(primo1, primo2);
  totiente = Totiente(primo1, primo2);
  e = E(totiente);
  chave = Chave(totiente, e);


  string palavra[1000];
  string cifra[1000];

  // separa cada palavra e coloca no array de strings palavra[]
  while (ch!=EOF) {
    ch = fgetc(fp);
    if(ch != ' '){
		  palavra[i] += ch;
    } else {
    	i++;
    }
  }
  
  // encriptar cada palavra
  for (int i = 0; i < 620; ++i){
    tamanho = palavra[i].size();
    for (int j = 0; j < tamanho; ++j){

      // cifra cada letra
      cifra[i] = Digitalizar(Encriptar((long)palavra[i][j], e, n));
      // escreve cada letra no arquivo
      fputs(cifra[i].c_str(), fw);

    }
      fputs(" ", fw);
  }

  fclose ( fp );
  fclose ( fw );
  
  return 0;
}
