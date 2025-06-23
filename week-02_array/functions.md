# Functions 
We can think of functions as blocks of code designed to perform specific tasks. A function can either carry out an action, return a value to us or even do both.

Syntaxe: 
```c
data-type function-identifier() { // instructions to be executed when the function is called }
```

For instance, we could have a function that returns always someone's age.
```c
#include <stdio.h>

short davidAge(void)
{
    return 20; 
}


int main(void)
{
    printf("David age: %i", davidAge() )
}
```

Functions aren't strictly required in small programs, but they are very important for keeping your code organized, readable, and reusable—especially in larger projects.

---

## Exit status
It's a code practice to put exit status in our functions. The status is usually represented by an integer. Conventionally, a zero exit status indicates successful execution, while a non-zero status signals an encountered error.

#### Web



For instance



## Parameters and arguments 





# Parâmetros e argumentos
Vamos criar uma função que recebe dois argumentos e retorna a soma deles. Para isso, é importante lembrar que os parâmetros, como mencionado anteriormente, funcionam como variáveis. Quando criamos uma função que possui um ou mais parâmetros, precisamos especificar o tipo de dado que esses parâmetros aceitarão

Essa situação é comumente encontrada em várias circunstâncias, como, por exemplo, quando utilizamos a função `strlen` da biblioteca `string`. A função `strlen()` possui apenas um parâmetro, por consequência, ela requer apenas um único argumento. 
> Os parâmetros se assemelham a variáveis, e os argumentos são os valores que são atribuídos a essas variáveis.

```c
char nome[] = {'p', 'a', 'u', 'l', 'o'};
int quantasLetrasHa = strlen(nome);
```
Neste exemplo, o `nome` (que está dentro dos parênteses da função strlen) atua como o argumento. 
Dentro do corpo da função `strlen()`, há várias instruções que indicam o que fazer com o parâmetro. E quando passamos um argumento, esse parâmetro é substituído pelo valor do argumento fornecido.

</br>

## Sintaxe 
Vamos criar uma função que recebe dois argumentos e retorna a soma deles. 
Para isso, vamos precisar de dois parâmetros. E como mencionado anteriormente, eles funcionam como variáveis, sendo assim, precisamos definir o tipo de dado deles.

```c
int somar(int x, int y)
{
    return x + y;
}

int main(void)
{
    int num0 = 10; 
    int num1 = 50;

    somar(num0, num1);
}
```

No exemplo anterior, a função `somar()` é encarregada de calcular a soma entre dois números. O `int x` e `int y` desempenham a função de __parâmetros__ nesta função.

Por outro lado, os valores `num0` e `num1`, que são passados como __argumentos__ dentro da chamada da função somar (na linha 30). Então todas as partes do corpo da função `somar()` que utilia dos parâmetros `int x` e `int y` serão substituidos por 10 e 50.


## Compilação
No processo de compilar, também vemos a presença dos argumentos. 
Por exemplo, quando utilizamos o compilador GCC, iremos dar a seguinte instrução para compilar nosso código: </br> 
`gcc -o nomeDesejado arquivoParaCompilar.C`

Nesse contexto, os comandos `-o`, `nomeDesejado` e `arquivoParaCompilar.c` desempenham de argumentos. Em algum ponto do compilador, esses argumentos são inseridos nos devidos lugares, correspondendo aos parâmetros que a própria compilação requer.


