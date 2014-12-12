#include "function.h"

/*	Algoritimo:

	abre arquivo
	pega cada palavra
	testa uma chave
  compara com dicionario
    - se 3 palavras conferem: chave encontrada
  usa chave pra todas palavras
  escreve no arquivo de saída

 */

int main(int argc, const char *argv[]){
  
  FILE *fsaida, *fdescriptografado, *fdicionario;
  char ch, ch2;
  int confere;
  int i=0, j=0, x=0, h=0, g=0, tamanho=0;
  fsaida = fopen ( "saida.txt", "r" );
  fdicionario = fopen ( "dicionario.txt", "r" );
  fdescriptografado = fopen ( "decriptografado.txt", "a" );

  // apaga o conteúdo do arquivo de saída
  freopen(NULL, "w+", fdescriptografado);

  long primo1=0, primo2=0, certo=0;
  long n=0, totiente=0, original=0, encriptado=0;
  unsigned long long int desencriptado=0;
  long e=0, chave=0;

  long lista[5] = {43, 47, 53, 59, 61};


for (int h = 0; h < 5; ++h){
  for (int g = 0; g < 5; ++g){

  string palavra[1000] = {};
  string dicionario[1000] = {};
  string decifra[1000] = {};
  string testadecifra[1000] = {};
  string testainteira[1000] = {};

    // separa cada palavra e coloca no array de strings palavra[]
    i=0;
    while (ch!=EOF) {
      ch = fgetc(fsaida);
      if(ch != ' '){
        palavra[i] += ch;
      } else {
        i++;
      }
    }

    // carrega dicionario
    i=0;
    while (ch2!=EOF) {
      ch2 = fgetc(fdicionario);
      if(ch2 != '\n'){
        dicionario[i] += ch2;
      } else {
        i++;
      }
    }

    
    // primo1=lista[h];
    // primo2=lista[g];

    cout << "testanto com " << primo1 << " e " << primo2 << "\n";

  primo1 = 53;
  primo2 = 59;
    
  // zera a contagem
  certo = 0;

  // define os valores da cifra
  n = N(primo1, primo2);
  totiente = Totiente(primo1, primo2);
  e = E(totiente);
  chave = Chave(totiente, e);

  // define os valores da cifra
  n = N(primo1, primo2);
  totiente = Totiente(primo1, primo2);
  e = E(totiente);
  chave = Chave(totiente, e);

  // TESTA DECIFRAGEM
  // vare o arquivo
  for (int x = 0; x < 20; ++x){
    string letra[1000] = {};
    tamanho = palavra[x].size();

    // pega cada palavra
    for (int i = 0; i < tamanho/9; ++i){

      // pega cada letra
      for (int j = 0; j < 9; ++j){
        letra[i] += palavra[x][j+i*9];
      }
        testadecifra[i] = Desencriptar(Desdigitalizar(letra[i]), chave, n); 
        testainteira[x] += testadecifra[i];
    }
        //cout << testainteira[x] << "\n";
  } // end for TESTA


  //compara
  for (int i = 0; i < 20; i++){
    for (int j = 0; j < 100; j++){

      confere = dicionario[j].compare(testainteira[i]);
      cout << confere << "\n\n\n\n";

      if(!confere){
        cout << primo1 << " - " << primo2 << ": ";
        cout << i << ": "<< testainteira[i] << ": " << dicionario[j] << "\n";
        certo++;
        break;
      }
      if(certo==3)
        break;
    }
  }


  if(certo==3){
    cout << "chave encontrada" << "\n";
    cout << "primos são: " << primo1 << " e " << primo2 << "\n";
    
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
    break;
  } // end if correto


  } // end for g
} // end for h

  fclose ( fdicionario );
  fclose ( fsaida );
  fclose ( fdescriptografado );
  
  return 0;
}
