# Variables 
This is just a fancy name to describe a few actions that happen under the hood. When you declare a variable (`int age = 19`), you're telling the compiler to reserve a specific amount of memory *based* on the data type. The variable’s identifier (`age`) refers to that memory location.

Using the assignment operator (`=`), you can assign a value to that memory location.
```
    int age;
    age = 19;

    // int: reserves space in memory for an integer.
    // age: is the identifier (a label) for that memory location.

    // age = 19: stores the value 19 in that memory location.
```

---

# Data types 
Let’s say we want to store two things in a box: a cellphone and a ship. For the cellphone, a small box will do. But the ship? That will need a huge box.

Now, could we simplify things by using just one big box for everything? Technically, yes — the cellphone fits inside the ship’s box without prolbmes. So we might think: “Let’s just use the huge box for both.”. But here’s the problem: why use a giant box for something tiny? It takes up unnecessary space, is harder to move, and wastes resources. It’s inefficient. We simply don’t do that in real life — it doesn’t make sense. That’s why we use different-sized boxes for different-sized objects.

When we're working with data, we may need store several different sizes of data. For instance, if you want to store the value `126` it will require a lot less storege than the value `1000000000`. We can think of data types as boxes.  You can think the value 126 as a small object (like a cellphone) and `1000000000` as a big one (like a ship). 

So in theory we could have a universal data type, a way of storagin a value, like `variable value1 = 126` and `variable value2 = 1000000000` but the problem is that for doing that, we must set "variable" as a hugh box, since it must be able to storage 10000000, and when we do `variable value1 = 126` we are treating this value as big as the `10000000`.  



Data types define how much memory is allocated when you declare a variable. The value you're assigning to that variable must "fit" within the space reserved. 

If the value requires more bits than what’s available, it won’t be stored correctly and may lead to errors or unexpected behavior.

**OBS:** every value is ultimately represented as bits in memory. So even if you write something like `age = 19`, what the computer stores is the binary (bit-level) representation of that number. That higher the number, more bits are going to be used to represent it.

<br>

### `short`: allocates 2 bytes of memory
That's 16 bits. With 16 bits, we can represent 2¹⁶ = 65,536 different values.

However, since we also need to store negative numbers, the range is **divided** between negative and positive values — with one extra value reserved for negative numbers because zero is counted as positive.

> Range: -32,768 to 32,767 <br>
> Example: `short temperature = -10;`

<br>

### `int` (integer)
An int creates a 4-byte space in memory — that's 32 bits. With 32 bits, we can represent 2³² = 4,294,967,296 different values.

> Range: -2,147,483,648 to 2,147,483,647 <br>
> Example: `int population = 1000000000;`

<br>

### `long` 
A long creates an 8-byte space in memory — that's 64 bits. With 64 bits, we can represent 2⁶⁴ = 18,446,744,073,709,551,616 different values.

> Range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 <br>
> Example: `long nationalDebt = 3000000000000;`

<br>

### `char` 
A char creates a 1-byte space in memory — that's 8 bits. With 8 bits, we can represent 2⁸ = 256 different values.

Range: 0 to 255 (when unsigned) or -128 to 127 (when signed — depends on the system/compiler) <br>
Example: `char letter = 'a';`

*Note:* Just because we're creating a char variable doesn't mean we can't store a number in it. As long as the value fits within 8 bits, it can be stored in a char variable. In fact, when you store characters like 'a', '%', or '[', you're really storing the numeric code (ASCII) behind them.

Example: `char letter = 5;` 
