# RSA encrypter/decrypter

Encriptador e desencriptador de cifra RSA

## Descrição do Problema

O objetivo deste trabalho é implementar em linguagem C o algoritmo RSA que seja capaz de
criptografar e decriptar uma mensagem de acordo com as chaves pública e privada. Além disso,
deverá ser implementado um algoritmo capaz de quebrar a criptografia RSA utilizando a ’força
bruta’, isto é, sem conhecer os números primos que estão associados a chave pública o usuário
deverá ser capaz de decifrar a mensagem. Os números primos que deverão ser utilizados para
criptografar a mensagem são: 8969 e 13711. O trabalho deverá ser entregue em conjunto com
um texto explicando detalhadamente o funcionamento do algoritmo RSA e também dos códigos
produzidos. No algoritmo que quebrará a criptografia deverá constar o tempo de execução, pois
este será utilizado para comparar a dificuldade de quebrar o algoritmo RSA com a dificuldade
em quebrar as cifras explicadas em sala de aula. O trabalho poderá ser executado em grupos
de três pessoas e deverá ser entregue até o dia 12/12/2014 no email: vrispoli@pgea.unb.br.
Para entender o funcionamento do algoritmo RSA existem diversas fontes na internet, inclusive
o Wikipédia. No entanto, sugiro procurar fontes confiáveis, como livros textos para embasar o
relatório que deverá ser entregue.
O texto que deverá ser utilizado no trabalho é o texto que segue:
"O narrador recorda-se do seu primeiro desenho de crianca, tentativa frustrada de os adultos entender o mundo
infantil ou o mundo das pessoas de alma pura. Ele havia desenhado um elefante engolido por uma jiboia, porem
os adultos so diziam que era um chapeu. Quando cresceu, testava o grau de lucidez das pessoas, mostrando-lhes
o desenho e todas respondiam a mesma coisa. Por causa disto, viveu sem amigos com os quais pudesse realmente
conversar. Pelas decepcoes com os desenhos, escolhera a profissao de Piloto e, em certo dia, houve uma pane em seu
aviao, vindo a cair no Deserto de Saara. Na primeira noite, ele adormeceu sobre a areia. Ao despertar do dia, uma
voz estranha o acordou, pedindo para que ele desenhasse um carneiro. Era um pedacinho de gente, um rapazinho
de cabelos dourados, o Pequeno Principe. O narrador mostrou-lhe o seu desenho. O Pequeno Principe disse-lhe
que nao queria um elefante engolido por uma jiboia e sim um carneiro. Ele teve dificuldades para desenha-lo, pois
fora desencorajado de desenhar quando era pequeno. Depois de varias tentativas, teve a ideia de desenha-lo dentro
de uma caixa. Para surpresa do narrador, o Pequeno aceitou o desenho. Foi deste modo que o narrador travou
conhecimentos com o Pequeno Principe. Ele contou-lhe que viera de um planeta, do qual o narrador imaginou ser
o asteroide B612, visto pelo telescopio uma unica vez, em 1909, por um astronomo turco. O pequeno Planeta era
do tamanho de uma casa. O Pequeno Principe contou o drama que ele vivia, em seu Planeta, com o baoba, arvore
  que cresce muito; por este motivo, ele precisava de um carneiro para comer os baobas enquanto eram pequenos.
  1Atraves do Pequeno Principe, o narrador aprendeu a dar valor as pequenas coisas do dia-a-dia; admirar o por-do-sol,
  apreciar a beleza de uma flor, contemplar as estrelas? Ele acreditava que o pequeno havia viajado, segurando nas
  penas dos passaros selvagens, que emigravam. O Principe conta-lhe as suas aventuras em varios outros planetas: o
  primeiro era habitado por apenas um rei; o segundo, por um vaidoso; o terceiro, por um bebado; o quarto, por um
  homem de negocios; o quinto, um acendedor de lampiao; no sexto, um velho geografo que escrevia livros enormes,
  e, por ultimo, ele visitou o nosso Planeta Terra, onde encontrou uma serpente, que lhe prometeu manda-lo de volta
  ao seu planeta, atraves de uma picada. No oitavo dia da pane, o narrador havia bebido o ultimo gole de agua e,
  por este motivo, caminharam ate que encontraram um poco. Este poco era perto do local onde o Pequeno Principe
  teria que voltar ao seu planeta. A partida dele seria no dia seguinte. Falou-lhe, tambem, que a serpente havia
  combinado com ele de aparecer na hora exata para pica-lo. O narrador ficou triste, ao saber disto, porque tomara
  afeicao ao Pequeno. O Principe lhe disse para que nao sofresse, quando constatasse que o corpo dele estivesse inerte,
  afirmando que devemos saber olhar alem das simples aparencias. Nao havia outra forma de ele viajar, pois o seu
  corpo, no estado em que se encontrava, era muito pesado. Precisava da picada para que se tornasse mais leve.
  Chegado o momento do encontro com a serpente, o Pequeno Principe nao gritou. Aceitou corajosamente o seu
  destino. Tombou como uma arvore tomba. E assim, voltou para o seu planeta, enfim. O narrador, dias mais tarde,
  conseguiu se salvar, sentindo-se consolado porque sabia que o Pequeno Principe havia voltado para o planeta dele,
  pois ao raiar do dia seguinte a picada, o corpo do Pequeno nao estava mais no local. Hoje, ao olhar as estrelas, o
  narrador sorri, lembrando-se do seu grande Pequeno amigo."

## Licensa

Creative Commons 3.0
