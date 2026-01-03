#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

short playerCount(void);
void playerWord(short totalPlayers, string playersWords[], short playerPoints[], short letterPoints[]);

int main(void)
{
    short totalPlayers = playerCount();
    short letterPoints[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    string wordsList[totalPlayers];
    short playerPoints[totalPlayers];

    playerWord(totalPlayers, wordsList, playerPoints, letterPoints);
}



// how many players will play? [done]
short playerCount(void)
{
    short totalPlayers = 0;
    do
    {
        totalPlayers = get_int("Total players [min: 2, max: 5]: ");

    } while (totalPlayers <= 1 || totalPlayers >= 6);

    return totalPlayers;
}

// ask for each player a word. format it. [done]
void playerWord(short totalPlayers, string playersWords[], short playerPoints[], short letterPoints[])
{
    printf("--- [Type your words] ---\n");
    for (short i = 0; i < totalPlayers; i++)
    {
        playersWords[i] = get_string("Player #%i: ", i+1);

        int j = 0;

        short totalPoints = 0;
        while (playersWords[i][j] != '\0')
        {
            totalPoints += letterPoints[  tolower(playersWords[i][j]) - 96 -1  ];
            j++;
        }

        playerPoints[i] = totalPoints;
    }
}

