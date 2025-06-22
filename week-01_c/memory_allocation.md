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
Let’s say we want to store two things in a box: a cellphone and a ship. For the cellphone, a small box will do. But the ship? We'll need another box, and it must be massive.

Now, could we simplify things by using just one big box for everything? Technically, yes — the cellphone fits inside the ship’s box without prolbmes. So we might think: “Let’s just use the huge box for both.”. But here’s the problem: why use a giant box for something tiny? It takes up unnecessary space, is harder to move, and wastes resources. It’s inefficient. We simply don’t do that in real life — it doesn’t make sense. That’s why we use different-sized boxes for different-sized objects.

We follow this same principle in programming, using data types. A data type tells the computer how much memory should be set aside to store a value. Think of it as choosing the right-sized box before you know exactly what you’re going to put in it. Later, when you assign a value to the variable, it must fit within the space reserved by the data type.

In programming, we deal with many different kinds of data. Some values require much more memory than others. For example, storing the number `126` takes much less space than storing `1,000,000,000`. That’s why we have different data types for small, medium, and large values — to avoid wasting memory.

Now, in theory, we could also use a universal data type — one giant box that can store any value:
```c
    variable value1 = 126;
    variable value2 = 1000000000;
```

But for that to work, the variable type would need to be big enough to hold the largest possible value. That means even small values like 126 would be treated as if they were huge, wasting memory in every case where a smaller box would have been enough.

So instead of one-size-fits-all, we choose the right data type for the size of data we expect. It's about being smart and efficient with the computer’s limited resources.


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
