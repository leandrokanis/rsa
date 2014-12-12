#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
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
  
  FILE *fp, *fw, *fdicionario;
  char ch, ch2;
  int confere;
  int i=0, j=0;
  fp = fopen ( "saida.txt", "r" );
  fdicionario = fopen ( "dicionario.txt", "r" );
  fw = fopen ( "decriptografado.txt", "a" ) ;

  string palavra[1000];
  string dicionario[1000];


  // separa cada palavra e coloca no array de strings palavra[]
  while (ch!=EOF) {
    ch = fgetc(fp);
    if(ch != ' '){
		  palavra[i] += ch;
    } else {
    	i++;
    }
  }

  // TODO desencriptar a palavra

  // TODO comparar com dicionario
  //      
  //      testa 10 palavras
  //      se 5 coferirem, 
  //        a chave está certa
  //      senão, tenta outra chave
  //      e começa de novo
  //

  // carrega dicionario
  while (ch2!=EOF) {
    ch2 = fgetc(fdicionario);
    if(ch2 != '\n'){
      dicionario[i] += ch2;
    } else {
      i++;
    }
  }

  //compara
  // for (int i = 0; i < 100; i++){
  //   for (int j = 0; j < 100; j++){

  //     confere = palavra[i].compare(dicionario[j]);

  //     if(confere){
  //       cout << i << palavra[i] << " ";
  //       break;
  //     }
  //   }
  // }

  // escrever no novo arquivo
	for (int i = 0; i < 200; ++i){

		fputs (dicionario[i].c_str(), fw);
		fputs (" ", fw);
	}

  char letra;
  cin >> letra;
  cout << pow ( int(letra), 2);



  fclose ( fdicionario );
  fclose ( fp );
  fclose ( fw );
  
  return 0;
}
