# Variables 
This is just a fancy name to describe a few actions that happen under the hood. When you create a variable, what you're really doing is reserving a space in memory, and the identifier (the variable's name) points to that memory address. 

With the assignment operator (`=`), you can assign a value to that memory location.
```
    int age;
    age = 19;

    // int: resevers a space in memory. it has an address.
    // age: points to that address.
    // age = 19: assigns 19 to it.
```

---

# Data types 
Data types define how much memory is allocated when you declare a variable. The value you assign to that variable must "fit" within the space reserved. If the value requires more bits than what’s available, it won’t be stored correctly and may lead to errors or unexpected behavior.

**OBS:** every value is ultimately represented as bits in memory. So even if you write something like `age = 19`, what the computer stores is the binary (bit-level) representation of that number. That higher the number, more bits are going to be used to represent it.

<br>

### `short`
This allocates 2 bytes of memory — that's 16 bits. With 16 bits, we can represent 2¹⁶ = 65,536 different values.

However, since we also need to store negative numbers, the range is **divided** between negative and positive values — with one extra value reserved for negative numbers because zero is counted as positive.

So the range of a short is typically:
-32,768 to 32,767

Example: `short temperature = -10;`

<br>

### `int` (integer)
An int creates a 4-byte space in memory — that's 32 bits. With 32 bits, we can represent 2³² = 4,294,967,296 different values.

Range: -2,147,483,648 to 2,147,483,647 <br>
Example: `int population = 1000000000;`

<br>

### `long` 
A long creates an 8-byte space in memory — that's 64 bits. With 64 bits, we can represent 2⁶⁴ = 18,446,744,073,709,551,616 different values.

**Range:** -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 <br>
**Example:** `long nationalDebt = 3000000000000;`

<br>

### `char` 
A char creates a 1-byte space in memory — that's 8 bits. With 8 bits, we can represent 2⁸ = 256 different values.

Range: 0 to 255 (when unsigned) or -128 to 127 (when signed — depends on the system/compiler) <br>
Example: `char letter = 'a';`

*Note:* Just because we're creating a char variable doesn't mean we can't store a number in it. As long as the value fits within 8 bits, it can be stored in a char variable. In fact, when you store characters like 'a', '%', or '[', you're really storing the numeric code (ASCII) behind them.

Example: `char letter = 5;` 
