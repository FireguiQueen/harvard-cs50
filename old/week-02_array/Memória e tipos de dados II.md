# Tipos de dados 
Cada tipo de dado  ocupa uma quantidade específica de memória, embora seja importante ressaltar que esses tamanhos podem variar entre diferentes sistemas de computadores. Mas em geral, podemos considerar as seguintes alocações de memória:
- `bool`    _1 byte_
- `char`    _1 byte_
- `double`  _8 bytes_
- `float`   _4 bytes_
- `int`     _4 bytes_
- `long`    _8 bytes_
- ..


### Importância
Nas linguagens de programação compiladas, como C e C++, quando escrevemos código-fonte, esse código passa por um processo de tradução. Primeiro, ele é convertido em uma sequência de instruções em linguagem de montagem (Assembly) e, em seguida, é transformado em código de máquina (binário) que pode ser executado diretamente pelo computador.

O tipo de dado desempenha um papel crucial nesse processo. Imagine que temos o número 5 no nosso código-fonte.
Podemos pensar que existem duas coisas que podemos fazer com este número 5. 

1. Utilizar ele para fazer a lógica do nosso programa, como realizar cálculos, condições e etc.. 
```c
int num1 = 5;
int num2 = 5; 
int total = num1 + num2; 
```

```c
int idade = 5; 

if (idade < 16)
{
    printf("Você não pode dirigir!");
}
```

</br>

2. Mas também podemos usá-lo para escrever coisas na tela
```c
printf("Você possui 5 anos!");
```

Quando digitamos o número cinco em nosso código, o computador precisa entender como interpretar esse número no mundo binário. Se nosso objetivo é tratá-lo como um caractere, o binário correspondente precisa ser `0110101`. No entanto, se pretendemos usá-lo para cálculos ou condições, então ele deve ser representado como o binário `101`.

É aqui que as palavras-chave, como "int" (para números inteiros) e "char" (para caracteres), entram em cena. Quando usamos "int", estamos informando ao computador que estamos lidando com números inteiros. Portanto, o computador compreende que o '5' precisa ser convertido em sua representação binária correspondente, que é `101`.

```c
// A variável 'num' recebe o binário 00000101
int num = 5;  
```

No entanto, se mudarmos o tipo de dado para "char", estamos indicando que queremos trabalhar com caracteres. 
Mas existem dois jeitos diferentes de se definir um caracter pelo tipo de dado `char`.

1. Quando utilizamos as aspas simples, estamos indicando explicitamente que queremos tratar o valor como um caractere. Portanto, se usarmos '5' para a nossa variável, o programa entenderá que se trata do caractere '5' e o representará internamente com seu valor ASCII, que é 53.
```c
// A variável 'letra' recebe número 53. 
// Após a compilação o valor recebido será 110101 
char letra = '5'; 
printf("%c \n", num); // Retorna '5'. 
```

</br>

2. Quando não usamos aspas simples, estamos tratando o valor como um número inteiro, não como um caractere. Nesse caso, o valor não é convertido automaticamente para um caractere. Se a variável char receber o valor 65, por exemplo, ela representará o caractere correspondente na tabela ASCII, que é 'A'. Nenhuma conversão explícita é realizada.
```c
char num = 65;
printf("%c \n", num); // retorna 'A'. 
```

__Resumidamente__, caso você coloque aspas simples e um caracter dentro, este caracter irá se transformar num número decimal e assim irá virar zeros e uns após a compilação.
Quando não usamos as aspas simples, aquele valor será entendido diretamente como um caracter de acordo com a tabela ASCII. 

</br>
</br>


# RAM (random acess memory) & HD (hard disk) 
Há muita confusão no que se diz a respeito de memória RAM e HD. 

O HD, ou disco rígido, é um dispositivo usado para armazenar dados permanentemente. Ele atua como uma espécie de vitrola, com um prato mecânico onde os dados são armazenados e uma agulha móvel para ler e gravar informações. Os HDs são essenciais para preservar dados que não podem ser perdidos, como nossos jogos, arquivos e sistema operacional. Eles são considerados um tipo de armazenamento não volátil, o que significa que os dados permanecem intactos mesmo quando o dispositivo está desligado.
>  armazenamento não volátil consiste no tipo de armazenamento em que se pode persistir dados; isto é: uma vez gravados, os dados são conservados e portanto não há perda ao se retirar a fonte de energia.

Por outro lado, a memória RAM (Random Access Memory) é uma parte temporária e ágil do computador. Ela funciona como um depósito temporário de informações digitais utilizado pelo processador para armazenar dados temporariamente. Praticamente todas as operações realizadas em um computador dependem da memória RAM.

Considere um programa que permite ao usuário inserir dois números e retorna a soma deles. Os valores digitados pelo usuário são armazenados em variáveis, e elas são temporariamente armazenadas na memória RAM.

Outro exemplo é o sistema operacional. O sistema operacional componente fundamental do computador, que reside no HD, mas para ser usado, requer a ajuda da memória RAM. A RAM é significativamente mais rápida do que o HD, permitindo que o processador acesse rapidamente as informações necessárias para realizar tarefas. No entanto, é crucial entender que a RAM é volátil, o que significa que os dados são apagados quando o computador é desligado, ao contrário do HD, que mantém os dados a longo prazo.
__A memória RAM é reponsável por manter os dados que estão em processamento__ 
> A memória RAM foi projetada para ser volátil, não faria sentido que ela desempenhasse outro papel. Ela serve apenas como um meio para que nossos processadores tenham dados disponíveis para leitura e armazenamento temporário. Esses dados sempre serão temporários, como, por exemplo, manter seu navegador aberto.

</br>

### Acesso aleatório & sequencial
A Memória de Acesso Aleatório é chamada assim porque você pode acessar qualquer posição de memória nela de forma direta e rápida, independentemente de onde os dados estejam armazenados. Isso significa que, se você precisa ler ou gravar dados em uma localização específica na RAM, não é necessário percorrer todos os dados anteriores ou posteriores para chegar a essa posição. Você pode acessar diretamente o __endereço__ de memória desejado.
> Podemos pensar na memória RAM como uma rua extensa. O dado que você deseja ler é a última casa desta rua. Em vez de você percorrer a rua inteira até chegar ao seu destino, você é instantaneamente teleportado para o endereço da casa desejada.

Em contraste, dispositivos de armazenamento sequencial, como as fitas magnéticas, exigem que você leia ou escreva os dados sequencialmente a partir de um ponto de partida. Se você quiser acessar os dados no final de uma fita, precisará percorrer todos os dados anteriores na fita, o que pode ser um processo demorado, especialmente se a fita for longa. Essa é uma das razões pelas quais a RAM é muito mais rápida para acesso aleatório do que dispositivos de armazenamento sequencial.


Os discos rígidos (HDDs) são considerados dispositivos de armazenamento de acesso sequencial em um nível técnico. Isso se deve ao fato de que, fisicamente, as cabeças de leitura/gravação precisam se mover para acessar diferentes trilhas (cylinders) e setores no disco. Esse movimento das cabeças e a espera pela rotação do disco podem causar atrasos no acesso aos dados, especialmente quando os dados estão localizados em locais físicos diferentes no disco.
No entanto, do ponto de vista do usuário e do sistema operacional, o HDD é geralmente visto como um dispositivo de armazenamento de acesso direto, graças ao sistema de endereçamento e às tabelas de alocação de arquivos mantidas pelo sistema operacional. Isso permite que os usuários acessem rapidamente arquivos e pastas específicos sem a necessidade de percorrer todo o disco.

+ Memórias de acesso aleatório: _SDD, RAM, Pendrives_
+ Memórias de acesso sequencial: _fitas magnéticas, HD_

</br>

![Random_vs_sequential_access](https://github.com/FireguiQueen/CS50/assets/98475125/5904c1dd-a65a-4116-8a50-0042aac2b8e7)

</br>
</br>


# Diferentes tipos de dados sendo armezenados em memória
Vimos que cada tipo de dado ocupa uma quantidade fixa de espaço na memória, mas como exatamente funciona esse armazenamento? Primeiro, vejamos o que é a memória RAM em si.
![ramMemoryIMG0](https://github.com/FireguiQueen/CS50/assets/98475125/b1df96f0-5f12-48af-833d-9bf1c53d3d64)

Nesta imagem, o que nos interessa são esses pequenos chips. A memória RAM tem uma capacidade limitada de armazenamento temporário; em geral, os pentes de memória RAM variam de 2 GB a 64 GB. Por exemplo, se um pente de memória RAM possui 8 GB, podemos imaginar que cada chip contribui com 2 GB. No entanto, para este exemplo, seremos um pouco mais limitados. Vamos imaginar que cada quadrado representa 1 byte (8 bits), o que totalizaria 36 bytes por chip, ou seja, nosso pente de RAM teria um total de 144 bytes. 
> Podemos representar a memória RAM com uma grade para entender de maneira mais simples como funciona o endereçamento e a ocupação de dados na memória.

![ramMemoryIMG1](https://github.com/FireguiQueen/CS50/assets/98475125/013c99dc-0d76-498a-99e3-b2bd75ce8e75)


</br>

Quando definimos uma variável, ela é alocada em algum lugar na nossa memória RAM. E aqui podemos ver a importância dos nomes e dos tipos de dados para essas variáveis. Os nomes desempenham um papel fundamental no endereçamento; não seria muito útil definir que em algum lugar da memória será armazenado o número 5 se não conseguíssemos localizar esse valor para usá-lo posteriormente.

A definição dos tipos de dados (int, char, long) determina a quantidade de bytes que iremos utilizar para armazenar o valor da variável. Além disso, ela também é responsável por informar ao computador como aquele valor da variável será armazenado na memória.
 
O tipo de dado `long` é usado para representar números inteiros que são muito grandes, geralmente acima de 2 bilhões. No entanto, também é possível atribuir valores pequenos a uma variável do tipo long. Isso, no entanto, não é recomendado, dado que esse tipo de dado ocupa 8 bytes de memória; em vez disso, poderíamos simplesmente usar o tipo int, que ocupa apenas 4 bytes.

```c
// É possível fazer isso, mas não é aconselhável.
long num = 5;


// A maneira recomendada é usar o tipo int.
int num = 5;
```

Quando definimos uma variável, ela ocupará uma quantidade de espaço na memória de acordo com o seu tipo. Por exemplo, o tipo `int` exige _4 bytes de armazenamento_, o que significa que 4 bytes da nossa memória RAM serão reservados para essa variável.

![ramMEMORY2](https://github.com/FireguiQueen/CS50/assets/98475125/147c4bc4-e08d-4752-abc2-c23e03815cf1)

Para tornar as coisas mais compreensíveis, podemos imaginar a memória RAM como uma grande grade, onde cada pequeno quadradinho representa 1 byte.

![image](https://github.com/FireguiQueen/CS50/assets/98475125/749a8901-a28b-4d8b-ab09-0aa6c791aa37)

Definir tipos de dados não serve apenas para determinar a quantidade de memória que uma variável ocupará, mas também para especificar como aquele valor específico será armazenado em formato binário.

```c
int num = 5;
char letra = 'A';
```
Na memória RAM, podemos considerar a seguinte representação:

> Para fins de ilustração, usamos "1000001" para o CHAR e "101" para o INT. No entanto, é importante notar que há zeros adicionais, uma vez que o CHAR utiliza 8 bits (oito dígitos binários), enquanto o INT utiliza 32 bits. Portanto, a representação precisa seria: </br>
> CHAR - 01000001
> INT - 00000000 00000000 00000000 00000101.
![image](https://github.com/FireguiQueen/CS50/assets/98475125/684515ac-75d6-4860-b4df-5466d97edff7)

</br>

_________________________________________________________


# Array
Um array (também conhecido como vetor) é uma coleção de elementos, onde cada elemento é identificado por um índice. Arrays são fundamentais para tornar nosso código mais dinâmico e eficiente, pois nos permitem armazenar múltiplos valores em uma única variável.

### Sintaxe
Assim como objetos, números e caracteres, os arrays também são um tipo de dado em programação. Definir um array é bastante simples.

1. Comece definindo uma variável.
2. Ao lado do nome da variável, coloque colchetes duplos []. Dentro dos colchetes, especifique quantos elementos você deseja que o array contenha. Se você não souber quantos elementos ele precisa ter, deixe esse campo em branco (isso permitirá que você coloque infinitos elementos - mas não é uma prática muito recomendada).
3. Em seguida, use o sinal de atribuição e coloque chaves. É dentro das chaves que nossos elementos serão armazenados. Os elementos do array serão separados por vírgulas dentro das chaves.

</br>

### Acessando valores
Para acessar um valor específico em um array, você precisa fornecer o nome da variável que representa o array, seguido por colchetes [] e o índice do elemento que deseja acessar. 
> Os índices são números inteiros que indicam a posição do elemento no array. É importante lembrar que os índices começam em 0, ou seja, o primeiro elemento de um array tem o índice 0, o segundo tem o índice 1, o terceiro tem o índice 2, e assim por diante. 
 
```c
// Foi definido que será recebido 3 elementos. 
// Se passar disso, irá ocorrer um erro: "excess elements in array initializer".
int numeros[3] = {510, 220, 310};

// Acessando o primeiro elemento do array.
printf("%i", numeros[0]);
```

```c
// Foi definido que será recebido infinitos elementos. 
// É possível colocar qualquer quantidade de elementos.
int numeros[] = {510, 220, 310, 55, 22, 55, 66, 12412, 4214, 424};

// Acessando o quarto elemento do array
printf("%i", numeros[3]);
```

Há outra maneira de definir um array e adicionar elementos a ele.

1. Comece definindo uma variável.
2. _Nesse_ caso, você __deve__ especificar quantos elementos o array irá conter.

Para adicionar os elementos, é simples: basta especificar um índice e atribuir um valor a ele.

```c
// Definindo um array que irá conter 3 elementos.
int numeros[3];

// Definindo o valor do índice 0.
numeros[0] = 10;

// Definindo o valor do índice 1.
numeros[1] = 55;

// Definindo o valor do índice 2.
numeros[2] = 90;
```

</br>



## Arrays e strings
As "strings" são uma sequência de caracteres, ou seja, uma palavra, uma frase, um texto, etc. Em muitas linguagens, como por exemplo o Javascript, a "string" é um tipo de dado. Portanto, quando definimos uma variável que recebe um ou mais caracteres, o tipo daquela variável será uma string. 
```js
/* exemplo em código Javascript */

// Definindo uma variável que recebe caracteres.
const nome = "Flora";

// Perguntando o tipo de dado desta variável. Irá retornar "string".
console.log(typeof nome);
``` 

No entanto, em algumas outras linguagens, como C, a `string` __não__ é um tipo de dado nativo. Ela é apenas um termo que usamos para nos referir a uma sequência de caracteres.

Em C, o único tipo de dado para caracteres é o `char` (character), que serve exclusivamente para representar um único caractere. É nesse momento que os arrays entram em cena. Com os arrays, podemos criar uma coleção de valores de um tipo de dado. Portanto, basta criar um array que contenha diversos caracteres, e pronto, você terá uma string.

```c
/* exemplo em código C */

char nome[] = {'G', 'u', 'i', 'l', 'h', 'e', 'r', 'm', 'e'};
```

Agora temos caracteres organizados em um array. No entanto, eles ainda estão separados e, consequentemente, ainda não formam uma STRING. Para fazer isso, você pode usar um `loop for` para iterar (percorrer) sobre cada elemento (caractere) dentro do array e concatená-los para criar a string desejada
```c
// Array do tipo 'char'. Só haverá valores do tipo 'char' neste array.
// Este array contém 9 elementos ao total.
char nome[] = {'G', 'u', 'i', 'l', 'h', 'e', 'r', 'm', 'e'};

// Primeiro vamos formar uma condição onde é perguntado se o nosso 'i' é menor do que 9 (o array possui 9 elementos).
// Na primeira execução do FOR, o nosso 'i' vale 0. Sendo assim, será printado o 'G', pois: nome[0].
// Na segunda execução, o nosso 'i' vale 1. Sendo assim, será printado o 'u', pois: nome[1]
// Na última execução, o nosso 'i' vale 8. Sendo assim, será printado o último 'e', pois: nome[8]
// Após isso, o nosso valor de 'i' irá valer 9. Será perguntado I < 9, ou seja, 9 < 9? A resposta é false..
// pois o nove não é menor do que nove, então, o for loop irá acabar.
for (int i = 0; i < 9; i++)
{
    printf("%c", nome[i]);
}
```

Observamos que a nossa condição utiliza o número 9 pois já sabemos que a string possui 9 caracteres..
Mas e se não soubessemos quantos elementos há na string? Como podemos descobrir?
> Não se esqueça, uma string, é na verdade, é um array de chars. Sendo assim, o que nós realmente precisamos descobrir é quantos elementos do tipo 'char' existem no array. 

</br>



### strlen 
O `strlen()` é uma função da biblioteca `string.h`. 
Esta função __retorna__, através do `return`, a quantidade de elementos que existem em um determinado array de _caracteres_. 
E claro, o retorno é um número inteiro, sendo assim, precisamos definir uma variável do tipo `int` e atribuir a ela esta função. 
> Como argumento, a função pede o array que desejamos saber quantos elementos há.

```c
#include <string.h>
#include <stdio.h>

int main(void)
{
    char nome[] = {'F', 'l', 'o', 'r', 'a'};
    int comprimentoArray = strlen(nome);

    printf("%i", comprimentoArray);
}
```

</br>
</br>



### sizeof
A função `sizeof()` é uma função nativa da linguagem de programação C. Em tradução para o português, seu nome pode ser interpretado como "Tamanho de...". No entanto, seu propósito __não__ é determinar a quantidade de elementos em um array, mas sim a quantidade de bytes _ocupados_ por um determinado tipo de dado, como arrays, chars, inteiros, entre outros.

Para entender isso melhor, vejamos alguns exemplos:

1. O número `4500` é, por padrão, do tipo `int (integer)`, e esse tipo de dado ocupa 4 bytes.
```c
int quantidadeDeBytes = sizeof(4500);

// Isso retornará 4. 
printf("%i", quantidadeDeBytes);
```

</br>

2. O número `2200000000` (dois bilhões e duzentos milhões) é do tipo `long (long integer)`, que ocupa 8 bytes.
```c
int quantidadeDeBytes = sizeof(2200000000);

// Isso retornará 8.
printf("%i", quantidadeDeBytes);
```

</br>

Quando utilizamos um array como argumento para a função `sizeof()`, os bytes retornados se referem ao tamanho total da memória ocupada por esse array. Exemplos:

1. Será retornado __0 bytes__. O array é do tipo int, o que significa que cada elemento ocupa 4 bytes, no entanto, não há elementos no array.
```c
int numeros[] = { };
int bytes = sizeof(numeros);

printf("%i", bytes); // 0
```

</br>


2. Será retornado __40 bytes__. Mesmo que ainda não tenhamos definido quais elementos iremos armazenar, especificamos (utilizando _colchetes_) quantos elementos o array irá conter.
```c
int numeros[10];
int bytes = sizeof(numeros);

printf("%i", bytes); // 40
```

</br>


3. Será retornado __20 bytes__, porque cada elemento no array ocupa 4 bytes.
```c
int numeros[] = {50, 90, 40, 70, 85};
int bytes = sizeof(numeros); 

printf("%i", bytes); // 20
```

#### Comprimento do array
Para obter o número de elementos em um array usando a função `sizeof()`, é comum dividir o valor retornado por ela pelo tamanho de um elemento individual do array.

Por exemplo, se tivermos um array de inteiros como `int numeros[] = {20, 10, 25, 99, 76, 67, 34};`, sabemos que cada elemento ocupa 4 bytes de memória. Portanto, o `sizeof()` retornará 28 bytes. Para descobrir quantos elementos estão no array, dividimos o valor retornado (28 bytes) por 4 bytes (pois cada elemento ocupa 4 bytes).
```c
int numeros[] = {20, 10, 25, 99, 76, 67, 34};

int length = sizeof(numeros) / 4; 
```

Se não soubermos o tipo de dado do array com antecedência, podemos usar a função `sizeof(array)` para obter o tamanho total do array em bytes e, em seguida, dividir esse valor pelo tamanho de um elemento individual do array, que é obtido com `sizeof(array[0])`. Isso nos dará o número exato de elementos, independentemente do tipo de dado.
```c
long numeros[] = {20, 10, 25, 99, 76, 67, 34};

int length = sizeof(numeros) / sizeof(numeros[0]); 
```

</br>
</br>



### \0 
O caractere \0 é um caractere especial utilizado na linguagem C e também é conhecido como 'null' (nulo). Ele é empregado para representar o fim de uma string, ou seja, o fim de um array do tipo char.
> Esta barra invertida pode parecer estranha, mas vemos o uso dela para outros caracteres, como por exemplo o '\n', que serve para pular para a próxima linha. 

Podemos observá-lo em nosso array quando ultrapassamos o índice final.
```c
char name[] = {'L', 'u', 'i', 'z'};
```

Neste array, o último índice é o terceiro, e seu elemento é o 'z'.
```c
printf("%c", name[3]); // retorna 'z'
```

_Mas o que acontece se ultrapassarmos esse índice?_
```c
printf("%c", name[4]); // retorna ''
```

__Nada é retornado, mas esse é o resultado esperado, afinal, estamos tentando imprimir o caractere "null".__

Como já foi dito inúmeras vezes, os caracteres são, na verdade, representados por números inteiros, onde cada número corresponde a um caractere.
```c
printf("%i", name[3]); // retorna 122. Este é o número inteiro que representa o caracter 'z'. 
```

Portanto, também podemos verificar qual número inteiro representa o nosso caractere 'nulo'.
```c
printf("%i", name[4]); // retorna 0

```

#### Comprimento do array
Para obter o comprimento do array usando o caractere nulo, podemos criar um algoritmo que percorre o nosso array de caracteres __enquanto__ o valor atual for diferente de nulo (\0). A cada iteração, adicionamos +1 à nossa variável de contagem de elementos.

```c
    char nome[] = {'F', 'l', 'o', 'r', 'a'};
    int total = 0;

    for (int i = 0; nome[i] != '\0'; i++)
    {
        total++;
    }
    printf("%i", total);
```

</br>

Ou também podemos fazer da seguinte maneira:
```c
    char nome[] = {'F', 'l', 'o', 'r', 'a'};
    int total = 0;

    while(nome[total] != '\0')
    {
        total++;
    }
    printf("%i", total);
```
