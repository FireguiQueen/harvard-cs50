#include <cs50.h>
#include <stdio.h>

int height(void);
void pyramid(int size);
void createSpace(int times);
void createBlock(int times);

int main(void)
{
    pyramid(height());
}

void pyramid(int size)
{
    int leftSpace = size - 1;

    for (int i = 1; i <= size; i++, leftSpace--)
    {
        createSpace(leftSpace);
        createBlock(i);
        printf("  ");
        createBlock(i);
        printf("\n");
    }
}

void createSpace(int times)
{
    for (int g = 0; g < times; g++)
    {
        printf(" ");
    }
}

void createBlock(int times)
{
    for (int b = 0; b < times; b++)
    {
        printf("#");
    }
}

int height(void)
{
    int try = 0;
    int size;
    do
    {
        // second try?
        if (try > 0)
        {
            printf("hint: type a number between 1 and 8. \n");
        }
        size = get_int("Height (1-8): ");
        try++;
    }
    while (size <= 0 || size > 8);

    return size;
}