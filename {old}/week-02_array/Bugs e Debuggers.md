# Algorítimos e seus problemas
Imagine que você está jogando um jogo de computador e, de repente, seu personagem fica preso em uma parede, incapaz de se mover. Esse é um exemplo de um bug. Um bug é um erro ou problema no código de software que faz com que ele não funcione como deveria. </br>
Os bugs não se resumem apenas a problemas lógicos que ocorrem devido à falta de um raciocínio preciso, mas eles também ocorrem devido aos erros de sintaxe, como por exemplo, não colocar o ponto e vírgula em determinada linha num código C, ou seja, o código não está apropriado de acordo com as regras da linguagem.
> _Lembre-se de que as máquinas precisam de todos os detalhes possíveis para executar um programa corretamente, não deve haver ambiguidades._

Essa falta de raciocínio preciso e atenção aos detalhes não ocorre somente quando nós, desenvolvedores num geral, estamos escrevendo nosso código, mas também pode ocorrer para os desenvolvedores de tecnologias. Por exemplo, você está fazendo uso da tecnologia X e seu código está 100% lógico e preciso, porém, ocorre um bug em seu software. Podemos deduzir bug ocorreu devido a um raciocínio impreciso na tecnologia que foi utilizada durante a construção do nosso software.

</br>


# Debugging (depuração)
A depuração é o processo de identificar, analisar e corrigir erros, falhas ou bugs em um programa de computador. O objetivo da depuração é garantir que o programa funcione conforme o esperado, produzindo resultados corretos e evitando comportamentos indesejados. Para realizar a depuração, existem ferramentas específicas criadas para esse fim, mas também podemos contar com soluções que, embora não tenham sido originalmente desenvolvidas para a depuração, podem servir a esse propósito.

</br>

## `printf()` 
Vamos pensar em um algoritmo no qual você precisa imprimir o caractere '%' cinco vezes. 
Para construí-lo, é bastante simples, basta usar um loop.
```c
    for(int i = 0; i <= 5; i++)
    {
        printf("$ \n");
    }
```

> Após usar o algorítimo acima, veremos o caractere "$" sendo repetido seis vezes, e não cinco.
```
$       // uma vez
$       // duas vezes
$       // três..
$       // quatro..
$       // cinco..
$       // seis..
```

Queríamos o cifrão se repetisse cinco vezes, e não seis.. Ou seja, temos um bug. Para a depuração, podemos usar a famosa função `printf()` da biblioteca `stdio.h`. Neste caso em específico, podemos imprimir o valor da nossa variável de controle "i" toda vez que nosso `for` for executado.
```c
    for(int i = 0; i <= 5; i++)
    {
        printf("O valor de I é: %i \n", i);  // Variável 'i' sendo chamada e imprimida.
        printf("$ \n");                      // nosso caractere sendo printado. 
    }
```

Após compilar e executar o código acima, teremos o seguinte resultado em nosso terminal:
```
O valor de I é: 0 
$

O valor de I é: 1 
$

O valor de I é: 2 
$

O valor de I é: 3 
$

O valor de I é: 4 
$

O valor de I é: 5 
$ 
```

Agora ficou muito simples solucionar o nosso bug. O valor de "i" variou de 0 a 5, e a cada valor diferente, o caractere "$" é impresso devido ao `printf()`. 
Como resultado, o "$" é repetido seis vezes, afinal, de zero a cinco temos 6 números no total (0, 1, 2, 3, 4, 5).

Vamos analisar o algoritimo feito:
- Inciar um loop
    1. __Definir uma variável de inicialização:__ _I = 0    (variável i recebe zero)_
       
    2. __Definir uma condição:__ _se a condição for verdadeira (ou seja, se I for _menor_ ou _igual_ a 5)_ </br>
        &nbsp; &nbsp; printe o caractere '$' no terminal.
       
    3. __Após rodar o bloco, adicione +1 a nossa variável de controle__
  > Na segunda vez que o "for" ser executado, o valor da nossa variável de inicialização será '1', na terceira vez, será '2' e assim respectivamente. 

Observamos no terminal que o valor de 'i' variou de 0 a 5 devido à segunda etapa do nosso algoritmo. Isso ocorreu porque a condição 'i <= 5' foi usada, o que significa que o loop continuará enquanto 'i' for menor ou __igual__ a 5. No entanto, na última iteração, 'i' atinge o valor 5, e como '5' é __igual__ a 5, o código será executado. Para corrigir esse erro e garantir que o caractere '$' seja impresso apenas cinco vezes, precisamos modificar a condição para 'i < 5'. Dessa forma, o loop será executado de 0 a 4,
```c
    for(int i = 0; i < 5; i++)
    {
        printf("$ \n");              
    }
```

</br>
</br>

## Debugger
Ao contrário da função printf() (que foi originalmente projetada para saída de dados, mas é frequentemente usada para depurar programas simples), o "debugger" é uma ferramenta específica para depuração que nos permite utilizar uma variedade de recursos para depurar nosso código.
Um exemplo disso é que, com um 'debugger', podemos fazer com que nosso programa seja executado passo a passo, linha por linha, o que nos permite compreender melhor o que está acontecendo.

Suponhamos que temos um loop for simples em nosso código:
```c
    for (int i = 1; i <= 5; i++) 
    {
        // Algum código aqui
    }
```
Usando uma ferramenta de depuração, como um ambiente de desenvolvimento integrado (IDE) ou um depurador de linha de comando, podemos adicionar pontos de interrupção (breakpoints) dentro do loop for. Quando o programa é executado no modo de depuração e atinge um ponto de interrupção, ele pausa a execução e nos permite inspecionar o valor da variável "i" naquele momento.

Isso é particularmente útil para entender como as variáveis mudam à medida que o programa é executado, permitindo-nos identificar problemas e corrigir possíveis erros em nosso código de maneira mais eficiente. Durante a depuração, podemos observar o valor de "i" em cada iteração do loop e garantir que ele está se comportando conforme o esperado.

</br>
</br>

## Rubber duck debugging
A ideia é você "conversar" com um pato. Claro, este é apenas um nome comumente utilizado, mas você pode falar com outros objetos, pessoas ou simplesmente falar. O objetivo disso é que, quando falamos, temos uma percepção maior do que está sendo feito. Ouvir a nós mesmos ou outras pessoas dizendo algo ilógico é mais perceptível do que ao ler. Essa técnica é especialmente útil quando estamos presos em um problema complexo e não sabemos por onde começar. 
Ao compartilhar nossos pensamentos em voz alta, ganhamos clareza e, muitas vezes, encontramos soluções que não teríamos descoberto de outra forma. 

Muitas vezes, quando lemos textos (e códigos), estamos a todo vapor, e por isso, podemos nem perceber quando uma palavra está escrita errada. E quando ouvimos alguém (ou a nós mesmos), somos muito mais atentos.
