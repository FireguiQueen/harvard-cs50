#### Recommended reading: [Computer Science: introduction](https://github.com/FireguiQueen/CS50/blob/main/week-00_scratch/01_computer_science_introduction.md)

----------

## 📊 Difference between "data" and "information"
The word "data" refers to raw, unorganized facts, while "information" is data that has been processed, organized, and given context, making it meaningful and useful. 

**A simple analogy:** Imagine two people from different countries having a conversation. Considering they don't speak each other's language, they're essentially exchanging data — sounds or text that lack meaning to the other.
To turn that data into information, one of them needs to use a dictionary or a translation app to interpret the message. Once translated, the data gains context and meaning — and becomes information.

<br> 

## 🧠 Do humans receive raw data or processed data (information)?
From Guilherme Pire’s perspective — AKA my perspective — we receive raw data, and our brains process that data and transform it into information. 

To illustrate this, imagine we take a human and remove key cognitive functions from their brain. In theory, they’d still be able to see, hear, taste, and experience the world — assuming we didn’t touch the sensory systems. But without the brain's ability to process that input, they wouldn’t be able to truly understand what’s happening. They’d be receiving data, but not forming information — because they’d lack the ability to assign meaning.

Given that, I can think about our brains as a powerful hardware, which runs a kind of software — a set of instructions on how to handle the data we receive, turning it into meaningful information.


## 🖥️ Do computers receive raw data or processed data (information)? 
In short answer, **data**. But to fully understand why, we had better understand what's considered "data" for computers and what bits are. 

<br> 

### What is a bit?
A 'bit' is short for **binary digit**.  
- **Binary** means it can only have two possible values: `0` or `1`.  
- **Digit** refers to a position that holds a bit — either `0` or `1`.

> One bit equals one digit (like `0` or `1`).  
> Two bits equal two digits (like `00`, `01`, etc.).

In real-world terms, you can think of a bit like a switch — it's either **on** or **off**, **true** or **false**.

But with just one bit, you can only represent **two** options. To represent more options, we add more bits! 
- 1 bit → 2 combinations: `0` or `1`  
- 2 bits → 4 combinations: `00`, `01`, `10`, `11`  
- 3 bits → 8 combinations: `000`, `001`, `011`, `111`, `010`, `100`, `110`, `101`

### Why do computers use bits?
While our brains store data in incredibly complex patterns involving neurons and chemicals, computers are way simpler. They rely on **electricity**. Computers can’t see, hear, smell, or feel. The only way they can **receive** information is through electrical signals.

To represent a bit with electricity:
- A `1` (ON) might be **5 volts**
- A `0` (OFF) might be **1 volts**

This binary approach is reliable, fast, and easy to build hardware for.

### Where can we find bits in a computer?
Every digital thing on your computer is made of bits: images (`.jpg`, `.png`), videos (`.mp4`), music (`.mp3`), text files (`.txt`), programs and software.   
> Keep in mind that all of it is just billions of `0`s and `1`s under the hood.

#### Since every thing in our computer is just a bunch of bits, why we actually see content instead of them?
- When we open `file.txt`, we see **characters**.
- When we open `img.png`, we see **pixels**.
  
But that’s because we’ve built **software** that interprets all that **raw data** and turns it into something **human-friendly**.
So even though everything is just bits to the computer, what we see is the **result of processing** - through a software - those bits into meaningful **information**.

<!-- 
We can try to figure a simple box, with 3 levers (switches) inside of it. Each lever can only represent two states (on/off). 
Let's also suppose that we can switch between the states with eletrical signal. To switch to 'on' we send 1volt, to keep it 'off' we sent 0volt.

So, with a wire, I could send: `1volt - wait a moment - 0volts - wait a moment - 1volt`. With that order, my levers states, as we already expect, would be: 
`ON - OFF - ON`.

Knowing that we have 3 levers and each represent 2 states, how many possibilities do we have? That's simple!
```
OFF  - OFF  - OFF
OFF  - OFF  - ON
OFF  - ON   - ON
OFF  - ON   - OFF
ON   - OFF  - OFF
ON   - OFF  - OFF
ON   - OFF  - ON
ON   - ON   - ON  
```
> Using a bit of math, we could just do 2³, and the result is eight different possbilities. 

   --> 




















<!-- 
## Representação de Números

Imagine-se como um professor em sala de aula verificando a presença dos alunos. Para isso, você pode levantar um dedo de cada vez, representando cada pessoa. Esse sistema é chamado de 'sistema unário', onde cada dígito representa uma única unidade. No entanto, a contagem não permite ir muito longe. Somando os dedos erguidos, o máximo possível seria contar até 10 alunos.

Por outro lado, existem outras formas de representar números maiores usando o sistema unário.
Por exemplo, você poderia desenhar pequenos traços em uma folha, onde cada traço representa um aluno presente. 
Essa representação visual pode ser capaz de indicar uma alta quantidade de alunos presentes. 

Mas existe um método ainda mais eficiente e prático para representar os alunos, conhecido como __sistema decimal ou base 10__. Neste método, agrupamos diferentes unidades numéricas (0, 1, 2, 3..). Ao combinar esses números distintos teremos um valor final, e cada __posição__ neste valor pode conter dez valores distintos, variando de 0 a 9. 

![analogia](https://github.com/FireguiQueen/CS50/assets/98475125/0f560714-8f1f-44fb-a092-3a2833aa61de)

Isso nos permite criar valores para representar a quantidade de alunos presentes de forma precisa e escalável.

<br>

## Como os humanos compreendem valores? 
Quando olhamos para o valor `250`, pensamos no número _duzentos e cinquenta__. Isso ocorre pois o 0 está na coluna das unidades, o 5 está na coluna das dezenas e o 2 está na coluna das centenas. 
- **Unidade:** 0 _(10⁰ * __0__ = 0)_;
- **Dezena:** &nbsp; 5  _(10¹ * __5__ = 50)_;
- **Centena:** 2 _(10² * __2__ = 200)_.
- **RESULTADO = 200 + 50 + 0**

![image 2](https://github.com/FireguiQueen/CC50/assets/98475125/43cf09fb-06c8-4d56-906b-0cd7022c1f76)
> A regra fundamental da notação decimal é que cada posição à __esquerda__ de um número é _dez vezes maior do que a posição à sua direita_. Por isso que uma dezena é composta por 10 unidades, uma centena por 10 dezenas, e assim por diante.

<br>

# Representatividade de informações por computadores e humanos

## O conceito de informação
> _"Informação é um conceito amplo, mas em termos gerais, pode ser definida como dados organizados de forma significativa, que têm o potencial de __transmitir conhecimento__ ou __instrução para aqueles que a recebem__."_ 

Tudo o que presenciamos ao nosso redor, sejam ruas, diálogos entre pessoas, animais, plantas.. Absolutamente tudo existente em nosso universo podem ser interpretado como "meras" informações. 

Em uma conversa, por exemplo, somos capazes de receber conhecimento ou instruções de outras pessoas, e este conceito nada mais é do que uma informação transmitida do ponto A (pessoa 1) até o ponto B (pessoa 2).

Quando vemos um 'S.O.S' escrito na areia de uma ilha, sabemos que aquilo é uma informação, e ganhamos o conhecimento de que alguém possivelmente esteja precisando de ajuda.

Ao olhar para um jornal, vemos diferentes notícias sobre acontecimentos e fatos, e isto é uma informação, pois nos dá o conhecimento sobre determinado evento.

___A partir do momento que somos capazes de interpretar algo, podemos considerar aquilo uma informação.___

### Como objetos mais abstratos continuam sendo informações? 
Para entender isto, podemos pensar em uma flor. Uma flor pode aparentar não ser uma informação, pois ela, supostamente, não está lhe transmitido conhecimento ou instruções. Mas a realidade é que uma flor comunica uma série de informações valiosas sobre si mesma e de seu ambiente. 

Vamos supor que um biólogo que vive na Europa seja teleportado para um local aleatório no mundo. De repente, ele se depara com uma flor de Carajás, que só existe no Brasil, na Amazônia. Neste momento, já podemos imaginar que esta flor avistada pelo biólogo, é um tipo de informação, pois deu a ele um conhecimento (que neste caso, foi mostrar ao biólogo sua localização).

## Semelhança entre o mundo real e o computacional 
Tudo ao nosso redor __é feito energia__. Um exemplo disso é o corpo humano, que em um nível fundamental, é formado por máteria (átomos, que formam moléculas, que formam células, que formam tecidos, orgãos), e como nós já sabemos, matéria é formada por energia. 

Nos computadores, isto não é diferente. Para criarmos informações, juntamos dois estados básicos: ligado/desligado.
E isto, só é possível através de energia. 
 



# Estados básicos são capazes de criar infinitas informações
......

Na vida real, temos acesso aos 10 diferentes números: 0, 1, 2, 3, 4, 5, 6, 7, 8 e 9; E nós utilizamos eles para formar
valores cada vez maiores, a fim de representar um valor final.  

A diferença é que os computadores só tem acesso a dois números: __0 e 1__

em outras palavras, só tem acesso a dois bits. Por isso, eles fazem uso da base de dois (binário) para a criação de outros números.
> Bits é derivado de "binary digits". Dígitos binários são: 0 e 1.

__Qual é o motivo pelo qual as máquinas operam exclusivamente com o binário?__
Antes disso, vamos refletir um pouco sobre como nós, seres humanos, interpretamos informações.
1. __INPUT:__ _Entrada de uma informação (seja ouvindo, vendo ou até mesmo pelo tato)_
2. __PROCESSAMENTO:__ _Tratamento desta informação (pensamos como podemos resolver este problema)_
3. __OUTPUT:__ _Saída de uma solução (transmitimos a resposta pensada na etapa anterior)_

Percebemos que nosso cérebro simplifica muito as coisas. O nosso 'input' (nossa entrada de informação) pode ser captada de diversas maneiras: ouvindo, vendo ou até mesmo pelo tato.
__No entanto, o que os computadores utilizam como INPUT?__ Na realidade, apenas eletricidade.
Algo que todos nós fazemos ao utilizar um dispositivo eletrônico é garantir que esteja conectado à tomada ou que tenha energia na sua bateria/pilha.
Através dessa eletricidade, começamos a representar informações. </br>
Um dispositivo que recebe eletricidade é capaz de estar em dois estados: desligado/ligado. Esse comportamento de ligar/desligar pode ser denominado de forma binária, 0 e 1.

Dado que os computadores possuem basicamente um único tipo de ENTRADA física (eletricidade), podemos aproveitar isso para armazenar informações.

Pense em três lâmpadas de luz. Se seguirmos um método convencional de contagem, teremos 3 como resultado, já que cada lâmpada representa uma unidade.

Porém, e se, ao invés disso, atribuirmos a cada posição das lâmpadas uma potência da base 2?
- Primeira posição:   2<sup>0</sup> (1)
- Segunda posição:    2¹ (2)
- Terceira posição:   2² (4)
> Com este metódo, podemos obter 7 unidades ao total, enquanto no outro, apenas 3 unidades.

E é dessa maneira que o computador opera. O sistema binário aparenta ser limitado por utilizar bits, mas é possível criar uma variedade infinita de outros valores. Em última análise, nos computadores, há milhões de interruptores (conhecidos como transistores) que podem assumir os estados de desligado ou ligado, 0 ou 1. Assim sendo, se você tem a habilidade de alterná-los entre esses estados, é possível criar uma sequência de dígitos de zeros e uns. Com essa sequência gerada entre '0' e '1', é possível gerar números cada vez maiores.

<details>
    <summary>Base decimal x base binária</summary>
    <h4>..10 <sup>4</sup> &nbsp; 10 <sup>3</sup>&nbsp; 10 <sup>2</sup> &nbsp; 10 <sup>1</sup>&nbsp; 10 <sup>0</sup> </h4>
    <img src="https://github.com/FireguiQueen/CC50/assets/98475125/6f0a983d-9674-4378-857c-24dc1469336c"/>
    <h4>..10 <sup>8</sup> &nbsp; 2 <sup>4</sup>&nbsp; 2 <sup>2</sup> &nbsp; 2 <sup>1</sup>&nbsp; 2 <sup>0</sup> </h4> <a name="img2">
    <img src="https://github.com/FireguiQueen/CC50/assets/98475125/38d021f4-3a21-4420-a6f5-553ab31b898e"/>
</details>


## Como os computadores criam outros números
Os computadores precisam de um sistema capaz de criar outros números além de 0 e 1. Mas eles não usam da base decimal `(10¹, 10², 10³..)`, e sim da base de dois: `2¹`, `2²`, `2³`.

Aprendemos que '1' representa 'ligado' pois na computação, o '1' representa passagem de energia, isso quer dizer que, ao colocar o '1' em uma determinada posição, estamos ativando o valor correspondente. Ao somarmos todos os números em laranja, obtemos 68 como resultado, e é dessa maneira que os _valores em binário são construídos_, __uma cadeia de zeros e uns__.

> Na imagem, os números em laranja representam os valores que foram ativados devido à presença de energia.
![Valores binarios](https://github.com/FireguiQueen/CC50/assets/98475125/736efe04-d419-4ace-9d14-83132d0a73a4)
--> 


