#include <iostream>
#include <stdio.h>
using namespace std;

/*	Algoritimo:

x	abre arquivo
x	pega cada palavra
	testa uma chave
  compara com dicionario
    - se 3 palavras conferem: chave encontrada
  usa chave pra todas palavras
x escreve no arquivo de saída

 */

int main(int argc, const char *argv[]){
  
  FILE *fp, *fw;
  char ch;
  int i=0;
  fp = fopen ( "texto.txt", "r" );
  fw = fopen ( "saida.txt", "a" ) ;

  string palavra[1000];

  // separa cada palavra e coloca no array de strings palavra[]
  while (ch!=EOF) {
    ch = fgetc(fp);
    if(ch != ' '){
		palavra[i] += ch;
    } else {
    	i++;
    }
  }

  // TODO encriptar a palavra

  // escrever no novo arquivo
	for (int i = 0; i < 100; ++i){

		fputs (palavra[i].c_str(), fw);
		fputs (" ", fw);
	}

  fclose ( fp );
  fclose ( fw );
  
  return 0;
}
