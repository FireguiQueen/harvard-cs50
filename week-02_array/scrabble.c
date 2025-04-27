#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(void)
{
    char alphabet[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M',
                       'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    short letterPoints[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    long length = sizeof(letterPoints) / sizeof(short);

    short p1Points = 0;
    short p2Points = 0;

    string playerOneWord = get_string("Player 1: ");
    string playerTwoWord = get_string("Player 2: ");

    int p1 = 0;
    while (playerOneWord[p1] != '\0')
    {
        for (int i = 0; i < length; i++)
        {
            if (toupper(playerOneWord[p1]) == alphabet[i])
            {
                p1Points += letterPoints[i];
            }
            else
            {
                continue;
            }
        }

        p1++;
    }

    int p2 = 0;
    while (playerTwoWord[p2] != '\0')
    {
        for (int i = 0; i < length; i++)
        {
            if (toupper(playerTwoWord[p2]) == alphabet[i])
            {
                p2Points += letterPoints[i];
            }
            else
            {
                continue;
            }
        }
        p2++;
    }

    if (p1Points > p2Points)
    {
        printf("%s", "Player 1 wins!\n");
    }
    else if (p1Points < p2Points)
    {
        printf("%s", "Player 2 wins!\n");
    }
    else
    {
        printf("%s", "Tie!\n");
    }
}