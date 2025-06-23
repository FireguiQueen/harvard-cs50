# Functions 
We can think of functions as blocks of code designed to perform specific tasks. A function can either carry out an action, return a value to us or even do both.

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
It's considered good practice to include an **exit status** in our functions, especially in the `main()` function of a C program. This status is typically represented by an integer. 

By convention:
- A return value of `0` indicates **successful execution**
- A **non-zero** value signals that an **error** or unexpected condition occurred

#### Web
Exit statuses are used beyond programming languages — they're everywhere, including the web.When a client (your browser) requests a resource from a server, and the connection is successful but the specific page or file can't be found, the server returns an **HTTP status code** like:

![error](../assets/error404.png)


## Parameters and arguments 
The most efficient way to provide input to a function is through **parameters**. Parameters are variables defined in the function declaration — they only exist within the function's scope and cannot be accessed outside of it.
> When we **call** a function and pass values into it, those values are called **arguments**.

```c
int sum(int x, int y)
{
    return x + y; 
}

int main()
{
    printf("%i", sum(50, 40) )    
}
```


<!-- ## Compilação
No processo de compilar, também vemos a presença dos argumentos. 
Por exemplo, quando utilizamos o compilador GCC, iremos dar a seguinte instrução para compilar nosso código: </br> 
`gcc -o nomeDesejado arquivoParaCompilar.C`

Nesse contexto, os comandos `-o`, `nomeDesejado` e `arquivoParaCompilar.c` desempenham de argumentos. Em algum ponto do compilador, esses argumentos são inseridos nos devidos lugares, correspondendo aos parâmetros que a própria compilação requer.
--> 
