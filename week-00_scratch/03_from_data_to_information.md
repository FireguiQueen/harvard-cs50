#### Recommended reading: [Computer Science: introduction](https://github.com/FireguiQueen/CS50/blob/main/week-00_scratch/01_computer_science_introduction.md); [Computer Science: data and information](https://github.com/FireguiQueen/CS50/blob/main/week-00_scratch/02_simplifying_information.md)

---

# From raw data to information 
At this point, we already know that everything on our computers — files, images, apps — is just bits under the hood. But at what point do those bits become meaningful information?

Let’s use a simple text file as an example.

When you create a .txt file and type some characters into it, then save it, your hard drive (HDD or SSD) stores that data as bits, not actual characters. The storage device doesn’t know anything about "letters" — it only understands binary values.

Later, when you open that same file (say, using Notepad), the operating system loads those bits into RAM, assigning them a memory address. From there, the software you're using (Notepad) reads the bits from RAM and interprets them based on a character encoding system (like ASCII or UTF-8), turning them into visible characters on your screen.

## Bits: ASCII
ASCII (American Standard Code for Information Interchange) was developed to standardize how specific sets of bits correspond to specific characters. For example, when you type the character 'a' in a .txt file, what’s actually stored on your disk is the binary sequence 01100001—not the letter itself. The storage device handles nothing but bits, so we rely on agreed-upon standards like ASCII to translate those bits into meaningful characters.

#### ASCII Isn't Enough — Enter UTF-8
The original ASCII system uses 7 bits (commonly stored in an 8-bit byte) to represent characters, giving us 128 unique combinations. While this range is sufficient for the basic English alphabet, numbers, and punctuation, it falls short for representing characters from many other languages (such as Japanese, Arabic, or Chinese) and modern symbols like emojis (😂).

To accommodate the vast array of characters used worldwide, UTF-8 was developed. UTF-8 is a variable-length encoding that can represent every character in the Unicode standard. This flexibility makes it possible to use text from nearly any language, as well as an array of symbols and emojis, on almost every device and platform.

## Bits: RGB
Have you ever wondered why you can see things on your screen? It’s all thanks to bits! Just as ASCII is a standard that uses bits to represent characters, the RGB color model uses bits to standardize colors. In the RGB model, each primary color—red, green, and blue—is represented by 8 bits. This means a full color is described by a sequence like: `00000000-00000000-00000000` (which, in this case, represents the absence of red, green, and blue.. i.e., black).

#### How a screen works
Modern screens are made up of millions of tiny elements called **pixels**, if you look closely, you’ll notice them. Each one of these pixels is composed of three subpixels: one for **red**, one for **green**, and one for **blue**. These subpixels blend together at different intensities to produce the broad spectrum of colors you see in a pixel.

For example, to display a pixel that is completely blue, the computer assigns the following bit pattern: `00000000-00000000-11111111`

This pattern means:
- **Red subpixel:** `00000000` (no light)
- **Green subpixel:** `00000000` (no light)
- **Blue subpixel:** `11111111` (maximum light)

These bits are converted into electrical signals which control the brightness of each subpixel. When the blue subpixel receives its full signal while the red and green receive none, the pixel appears fully blue on your screen.



<!-- 
Antigamente a principal função dos computadores era computar, ou seja, atuar como calculadoras. Eles foram originalmente criados para facilitar cálculos matemáticos demorados ou complexos para os seres humanos.
Contudo, nos dias de hoje, os computadores desempenham uma vasta gama de funções. As atividades que realizamos neles, como assistir a vídeos, jogar e realizar transações bancárias, são muito mais complexas do que simples cálculos. Naturalmente, todas essas ações envolvem interações com caracteres, que são essenciais nas interfaces dos softwares. E isso não se aplica apenas aos utilizadores finais, mas também aos desenvolvedores, que necessitam manipular caracteres de várias maneiras ao criar os seus softwares.

### O Conceito de Interfaces 
Uma interface é um conceito bastante amplo, mas, em geral, podemos pensar que ela é uma forma de comunicação entre a máquina e o ser humano.
Um exemplo claro de interface é quando você lê este texto em seu computador, através de um navegador. O navegador apresenta uma interface gráfica amigável que simplifica a navegação na web. Porém, por trás dessa interface, estão linhas de código complexas que executam todas as ações. A interface serve como um canal de comunicação que permite que você interaja com essas linhas de código de maneira intuitiva.

Além disso, muitos programas, como calculadoras, também oferecem interfaces para que você possa usá-la. Por exemplo, a interface de uma calculadora geralmente irá incluir botões numéricos, operadores e outras opções de interação. Essas interfaces são projetadas para tornar a utilização do programa mais fácil e eficiente.

</br>

#### GUI (graphic user interface)
A GUI é uma interface visual que utiliza elementos gráficos, como botões, ícones e janelas, para permitir a interação do usuário com o sistema. Essa abordagem é altamente intuitiva e amplamente adotada em aplicativos, jogos e sistemas operacionais, como o Windows e o macOS. Na GUI, os usuários podem clicar, arrastar e soltar elementos na tela para executar ações, tornando-a acessível até mesmo para pessoas sem conhecimentos técnicos profundos.

![image](https://github.com/FireguiQueen/CS50/assets/98475125/d21179e6-7102-4362-938e-0931437ce526)

</br>

#### CLI (command line interface)
A CLI, por outro lado, é uma interface baseada em texto, onde os usuários interagem com o sistema através da digitação de comandos específicos em um terminal. Embora possa parecer menos amigável à primeira vista, a CLI oferece um alto nível de controle e eficiência para usuários avançados e desenvolvedores. Ela é frequentemente usada em ambientes de programação, administração de servidores e tarefas automatizadas, permitindo que os usuários executem comandos precisos e personalizados.

![image](https://github.com/FireguiQueen/CS50/assets/98475125/5bb084b0-91de-4d43-a6bc-ac010c1eee21)

</br>

### Como os computadores são capazes de apresentar caracteres (alfabéticos, numéricos..) em interfaces?
A humanidade teve uma ideia muito simples e útil nos primórdios da computação ao tentar representar caracteres. Foi pensado: Vamos atribuir caracteres aos números em binário. Por exemplo, a sequência de bits '1000001' forma o número 65; portanto, vamos associar a letra "A" a essa sequência de bits. 
Para isso, foi criado o ASCII (American Standard Code for Information Interchange), um sistema utilizado para representar letras, algarismos, sinais de pontuação e caracteres de controle por meio de sequências de bits.

O ASCII foi desenvolvido não apenas para representar letras, números e símbolos, mas também para padronizar essa representação. Imagine ter 10 padrões ASCII diferentes, usados por organizações diferentes. Se um computador X usa um padrão onde a letra 'A' é representada pelo valor 65, e um computador Y usa um padrão diferente onde 'A' é representada pelo valor 97, isso causaria problemas. Ao enviar um arquivo de texto do seu computador para o computador Y, os caracteres no arquivo serão interpretados de maneira diferente no computador Y. Isso ocorre porque, por trás dos caracteres, estão os BITS. Uma sequência de BITS representa 'A', mas essa mesma sequência no computador Y pode ser interpretada como 'J'.

Uma forma de perceber que os caracteres são representados por bits é abrir o Bloco de Notas, digitar o número '1' (ou qualquer outro caractere), salvar e fechar o arquivo. Agora, localize o arquivo, clique com o botão direito e selecione "Propriedades" para verificar o tamanho do arquivo. Esse tamanho será exatamente a quantidade de bits contidos nele. Cada caractere do conjunto ASCII é representado por uma sequência de 8 bits. Portanto, quando inserimos o número '1' no Bloco de Notas, por trás dos panos, o que está realmente armazenado são 8 bits (ou oito dígitos binários). Ao verificar o tamanho do arquivo, constataremos que ele ocupa 8 bits, o que equivale a 1 byte.

![image](https://github.com/FireguiQueen/CS50/assets/98475125/e902b927-333e-4723-9e07-b14caa4c69f4)



### O grande problema do ASCII
Para representar cada caractere, o ASCII utiliza um conjunto de 8 bits (00000000). A princípio, essa abordagem atenderia às necessidades do sistema americano, uma vez que 8 bits possibilitam a representação de até 256 caracteres distintos _(0, %, G, !, ?..)_.

Contudo, existem inúmeros outros idiomas pelo mundo, cada um contendo letras, e até mesmo pontuações e sinais únicos. Tornar-se inviável representar todos esses algarismos, letras e acentuações com apenas 256 caracteres disponíveis.

Um exemplo simples que é impossível representar tudo com somente 256 caracteres são os emojis. Eles são formados por sequências de bits. Um dos emojis mais famosos é o '😂'. Essa simples representação de um simples rostinho, exige 17 bits (0000000000000000). 
> Sequência de bits para colocar o emoji: 11111011000000010. Decimal: 128.514; Consequentemente, o uso do ASCII para codificar emojis não seria viável, já que o ASCII apenas permite alocar 8 bits para a representação de um único caractere.

À medida que o tempo avança, testemunhamos o surgimento de novas abordagens de representação que permitem a utilização de 16 ou até mesmo 32 bits para codificar caracteres. Passamos do antigo padrão ASCII para o UNICODE, que oferece uma gama mais ampla de possibilidades de representação.

#### Resumo 
- _ASCII foi definido como padrão em 1968. Ele foi e ainda é utilizado para representar caracteres_
- _Caracteres não englobam apenas letras, mas também sinais e números: A, a, 7, @, !, "", _,.._ 
- _Cada caractere é representado por um código de 8 bits (um byte)_
- _'A' é representado pelos bits 1000001 `(65)`, 'B' pelo 1000010 `(66)` e assim por diante.._

</br>
</br>

__________________________________

# BITS: o surgimento das cores
Vimos anteriormente como os caracteres são representados por meio de bits, e com as cores, não é muito diferente. 
O ASCII é um padrão para representar caracteres usando sequências de bits, enquanto o RGB é uma das maneiras mais comuns de representar cores por meio de bits. 

#### Como o monitor funciona e por que usamos RGB?
Os monitores são compostos por milhões de pequenos quadrados de luz chamados pixels. Cada pixel contém três pontos, conhecidos como "fósforos", sendo um  fósforo vermelho, verde e azul (RGB). Usando bits, controlamos a quantidade de luz enviada a cada fósforo em um pixel. Quanto mais "luz" enviamos, maior será a intensidade da cor em determinado fósforo. 

#### Fontes
- [Por que os monitores eram monocromáticos, exibindo apenas verde e preto?](https://gizmodo.uol.com.br/tela-verde-preto/)
- [A Matemática por Trás das Cores do Computador](https://mentalidadesmatematicas.org.br/a-matematica-por-tras-das-cores-do-computador/)

### Criação das cores
Sabemos que há uma quantidade finita de cores, e elas são geradas através da combinação de três cores fundamentais: vermelho, verde e azul (RGB). Essas três cores primárias nos permitem criar uma ampla variedade de tonalidades. </br>
Na computação, adotamos este mesmo conceito. Através da atribuição de três sequências de bits distintas, uma para cada uma das cores primárias, somos capazes de criar uma infinidade de novas cores ao combinar esses bits de maneiras variadas.
> Enquanto o sistema ASCII usa 8 bits para representar um caractere, no sistema RGB, usamos 8 bits para representar a intensidade de luz enviada a cada um dos três fósforos de um pixel. Isso significa que são necessários 24 bits para representar uma cor.

</br>

Para entender melhor o sistema RGB, considere a sequência de bits abaixo:
- 111111110000000000000000

Essa sequência contém 24 bits (3 bytes) no total. Vamos dividi-la em três partes, cada uma com 8 bits (1 byte):
1. 11111111
2. 00000000
3. 00000000
   
Lembre-se do que foi dito anteriormente: 'Um pixel é formado por três fósforos - vermelho, azul e verde'.
Portanto, a primeira parte representa o fósforo vermelho do pixel, a segunda parte representa o fósforo verde do pixel e, por fim, a terceira parte representa o fósforo azul do pixel. Como resultado desta sequência de bits `(111111110000000000000000)`, teremos uma cor vermelha extremamente intensa. Isso ocorre porque atribuímos a sequência "11111111" ao quanto de "luz" o fósforo vermelho irá receber. E essa sequência de bits "1111..." representa o número 255, ou seja, um valor máximo de intensidade. Já que os outros fósforos receberam "00000000" (número 0), nenhum deles emite sua respectiva cor, já que o nível de intensidade é zero. Mas por que a maior intensidade de um fósforo é representada pela sequência '11111111' (255)? A resposta é simples, mas antes, vamos fazer uma breve incursão na matemática: </br>
Imagine que temos 8 posições (8 bits) para representar uma cor (um fósforo). Em cada dígito desses 8 bits, podemos ter apenas 0 ou 1 (duas possibilidades). Com 8 posições e duas possibilidades em cada uma, podemos expressar isso como 2<sup>8</sup> (2 * 2 * 2 * 2 * 2 * 2 * 2 * 2). Na matemática, 2<sup>8</sup> resulta em 256, mas estamos trabalhando com computadores, o que significa que começamos a contar do zero, então temos 255. Portanto, o número 0 representa uma intensidade baixa (indicando a ausência de luz para aquele fosfóro), enquanto o número 255 simboliza a intensidade máxima de luz para o outro fósforo. Os valores de intensidade de cada componente são combinados para criar uma cor específica.
 
#### Isso resultaria em uma cor vermelha intensa, pois somente o canal vermelho está recebendo intensidade.
- Red: 255
- Green: 0
- Blue: 0
> Por trás dos panos, teremos esta sequência de bits: _111111110000000000000000_

</br>

#### Isso resultaria em uma cor vermelha menos intensa, pois o fósforo da cor vermelha está recebendo menos 'luz'.
- Red: 120
- Green: 0
- Blue: 0
> Por trás dos panos, teremos esta sequência de bits: _011110000000000000000000_

</br>

#### Aumentar a intensidade de outras cores, como o azul, resulta em cores mais azuladas, que podem se aproximar de tons de roxo e rosa:
- Red: 210
- Green: 0
- Blue: 120
> Por trás dos panos, teremos esta sequência de bits: _11010010000000001111000_

</br>
</br>

# BITS: o surgimento das imagens
Da explicação acima, compreendemos que a criação de uma cor requer 24 bits (3 bytes) e que podemos associar uma cor a um pixel. Um pixel é simplesmente um pequeno quadrado preenchido com uma cor. E, como sabemos, uma imagem é composta de muitos e muitos pixels. Portanto, podemos concluir que tanto as imagens nada mais são do que bits.

</br>

# Formatos de arquivo
O formato do arquivo é essencial para informar ao computador como ele deve interpretar esses bits. Por exemplo, ao lidar com um arquivo .TXT, nosso objetivo é visualizar texto, o que requer a tradução dos bits em caracteres legíveis (usamos o sistema ASCII para isso). No caso dos arquivos .JPG, nosso objetivo é visualizar imagens, o que implica na conversão dos bits em pixels coloridos.
Músicas, vídeos, planilhas e muito mais também têm sua origem nos mesmos zeros e uns. Em um arquivo .MP3, por exemplo, os bits são traduzidos em notas musicais que compõem melodias envolventes. Em arquivos de vídeo como o .MP4, os bits se transformam em sequências de quadros em movimento, criando a ilusão de cenas dinâmicas.

-->
