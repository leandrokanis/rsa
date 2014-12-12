#include "function.h"

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
  
  FILE *fsaida, *fdescriptografado, *fdicionario;
  char ch, ch2;
  int confere;
  int i=0, j=0, x=0, tamanho=0;
  fsaida = fopen ( "saida.txt", "r" );
  fdicionario = fopen ( "dicionario.txt", "r" );
  fdescriptografado = fopen ( "decriptografado.txt", "a" ) ;

  // apaga o conteúdo do arquivo de saída
  freopen(NULL, "w+", fdescriptografado);

  //long primo1 = 8969, primo2 = 13711;
  long primo1 = 53, primo2 = 59;
  long n=0, chave=0;

  // chaves
  chave = 2011;
  n = 3127;

  string palavra[1000];
  string dicionario[1000];
  string decifra[1000];


  // separa cada palavra e coloca no array de strings palavra[]
  while (ch!=EOF) {
    ch = fgetc(fsaida);
    if(ch != ' '){
		  palavra[i] += ch;
    } else {
    	i++;
    }
  }

  // DECIFRAGEM
  // vare o arquivo
  for (int x = 0; x < 620; ++x){
    string letra[1000] = {};
    tamanho = palavra[x].size();

    // pega cada palavra
    for (int i = 0; i < tamanho/9; ++i){

      // pega cada letra
      for (int j = 0; j < 9; ++j){
        letra[i] += palavra[x][j+i*9];
      }
        decifra[i] = Desencriptar(Desdigitalizar(letra[i]), chave, n);
        fputs(decifra[i].c_str(), fdescriptografado);
    }
        fputs( " " , fdescriptografado);
  }

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


  fclose ( fdicionario );
  fclose ( fsaida );
  fclose ( fdescriptografado );
  
  return 0;
}
