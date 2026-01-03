# Operators
In programming, operators are essential tools that allow us to perform various operations, such as arithmetic calculations and logical evaluations. Every programming language provides a set of standard operators.

---

## Arithmetic Operators
These operators are used to perform basic mathematical operations:
- `+` : Addition
- `-` : Subtraction
- `/` : Division
- `*` : Multiplication
- `%` : Modulus (returns the remainder of a division)

## Logical Operators
Logical operators are used to combine or compare expressions and control the flow of a program based on conditions.

### `&&` (Logical AND)
Returns `true` only if **both** expressions are true.

```c
  // A simple program that checks if a person is older than 18 
  // AND taller than or equal to 165 cm.
  short personAge = 19;
  short personHeight = 169;

  if ((personAge >= 18) && (personHeight >= 165))
  {
    printf("You can join the Lumberjacks!");
  }
```

<br>

### `||` (Logical OR)
Returns true if at least one of the expressions is true.
```c
  // A simple program that checks if a person is older than 18 
  // OR has their parents' permission.
  short personAge = 17;
  bool parentsPerm = true;

  if ( (personAge >= 18) || (parentsPerm) )
  {
    printf("You can join the Drunkards and drink as much as you want!");
  }
```
