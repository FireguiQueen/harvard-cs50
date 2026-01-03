# O básico
Um compilador serve para transformar o código de uma determinada linguagem em código de máquina (binário; zeros e uns). É importante notar que você irá usar compiladores diferentes para linguagens diferentes, e claro, uma única linguagem pode conter diversos compiladores.

</br>

## Clang
Para a linguagem C, podemos usar o compilador "Clang". Cada compilador gera seus próprios comandos. Neste caso, a maneira mais básica possível para transformar um código em C para binário, será dando a seguinte instrução no terminal:
- `clang arquivoParaCompilar.c`

Após a compilação, será criado um arquivo chamado "a.out", traduzindo: "assembler output" (saída do programa montador). Você pode se perguntar o porquê deste nome. Bem, observe que em nenhum momento foi especificado no terminal o nome que desejamos para o arquivo compilado, logo, 'a.out' é o nome padrão dado ao executável compilado.
> a.out é um formato de arquivo usado em antigas versões de sistemas operacionais baseados no Unix para executáveis, código objeto e, em sistemas posteriores, bibliotecas compartilhadas. O nome vem de assembler output (saída do programa montador). a.out permaneceu como o nome padrão de saída para arquivos executáveis criados a partir de certos compiladores e linkers, quando nenhum nome era especificado, mesmo sendo esses executáveis não mais do formato a.out.

Digamos que você queira compilar e escolher um _nome adequado_ para o programa. Sendo assim, iremos dar a seguinte instrução:
- `clang -o nomeDesejado arquivoParaCompilar.c`

Observe que surgem três argumentos após o comando 'clang'.
O argumento `-o` significa "-output", ou seja, desejamos criar uma saída de informação, criar um arquivo. Após `-o`, iremos colocar o nome para esta saída, ou seja, o nome que desejamos para o arquivo compilado. E, por fim, iremos colocar qual arquivo desejamos compilar.

</br>


## Bibliotecas e os compiladores
Quando incluímos alguma biblioteca em nosso programa #include <stdio.h>, podemos pensar que elas estão adicionando funções prontas novas ao nosso programa, para que não precisemos criá-las do zero. Por exemplo, a função printf() é uma função da biblioteca <stdio.h>. Poderíamos até recriar esta função, mas seria algo extremamente trabalhoso. A biblioteca stdio.h não traz apenas o printf() para uso, mas também é responsável por gerar todo um sistema para possibilitar a entrada e saída de informações.
Mas onde entram os compiladores nesta história? Quando fazemos uso de algumas bibliotecas (não são todas), precisamos especificar ao nosso compilador como encontrar e incorporar essas bibliotecas em nosso código. As funções já foram criadas, mas agora, nosso compilador precisa entender como lê-las para transformar todo o nosso programa em zeros e uns.

____________________________________________

# Funcionamento Interno da Compilação em C
Até o momento, nosso saber sobre compilação é bem superficial; a única coisa que sabemos é que compilar um arquivo C por exemplo, significa transformar o código fonte em linguágem de máquina (binário), mas existem algumas etapas a serem seguidas antes de ação de compilar ser concluída. 

## CPP (pre-processors C)
O CPP (ou Pré-processador C) não é, na verdade, parte do compilador. O CPP é uma etapa preliminar no processo de 'compilação', mas faz parte da própria linguagem C. Você já deve ter notado o uso frequente do caractere '#' em nosso código. Bem, os compiladores C não são projetados para interpretar esse caractere e suas palavras-chave, e nem deveriam ser. O CPP é responsável por traduzir determinadas instruções de texto em código executável.
Por exemplo, quando escrevemos `#include <stdio.h>`, estamos informando ao C que desejamos usar a biblioteca 'stdio'. Essa biblioteca, na verdade, é um arquivo separado que contém as definições de todas as funções da biblioteca. No entanto, após o CPP processar essa diretiva, a declaração da função printf, por exemplo, é incluída no nosso código como uma informação sobre a interface da função, incluindo seus parâmetros e tipo de retorno.


<!-- Por exemplo, quando escrevemos #include <stdio.h>, estamos informando ao C que desejamos usar a biblioteca 'stdio'. Essa biblioteca, na verdade, é um arquivo separado que contém as definições de todas as funções da biblioteca. Quando usamos a biblioteca 'stdio', geralmente estamos interessados na função printf();, e foi exatamente nesse outro arquivo que essa função foi definida. Portanto, o CPP é uma ferramenta de substituição de texto que permite a transformação de instruções em código.
Podemos entender melhor com a imagem abaixo.:
--> 

![image](https://github.com/FireguiQueen/CS50/assets/98475125/b748ddc3-8412-4ccd-a038-39c6d7cb3326)

</br>

## Compiling
Nesta etapa, o compilador traduz seu código-fonte (por exemplo, código em C) em código de montagem (assembly). Agora, nossos processadores serão capazes de transformar nosso código assembly em linguagém de máquina (binário).
O código é transformado em assembly pois é a unica linguagem que os nosso processadores compreendem. 
O código ainda está em uma forma legível para nós humanos. Portanto, o código de montagem não é diretamente instruções de máquina binárias, mas sim uma representação intermediária.

![image](https://github.com/FireguiQueen/CS50/assets/98475125/24d2b69f-4531-45bd-917c-c57cb6b1e32c)

</br>

## Assembling
Na etapa anterior, nosso código foi transformado em assembly, agora, faremos com que o assembly se torne código binário. 
O resultado da etapa de montagem é um arquivo objeto binário que contém as instruções de máquina.

</br>

## Linkers
Agora que temos nossos arquivos binários após a etapa de montagem, é hora de juntá-los em um único executável. É nesse ponto que os linkers entram em cena.

Os linkers são ferramentas que desempenham um papel crucial na fase de ligação (linkagem) do processo de compilação. Sua principal tarefa é unir todas as partes do seu programa, incluindo seu código-fonte, bibliotecas e funções externas, em um único executável que pode ser executado no sistema operacional.

Os linkers resolvem referências entre diferentes partes do código, garantindo que as funções que você chamou no seu código estejam corretamente associadas às suas implementações reais nas bibliotecas ou em outros módulos do seu programa. Além disso, eles também podem otimizar o código, remover código não utilizado e garantir que tudo esteja configurado corretamente para a execução.

Resumidamente, você terá vários arquivos que foram traduzidos para binário, agora, com esta etapa, está na hora de juntá-los. 
