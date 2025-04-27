// check50 cs50/problems/2025/x/substitution
// submit50 cs50/problems/2025/x/substitution

// Key must contain 26 characters. return 1
// Usage: ./substitution key. return 1
// Key must only contain alphabetic characters. return 1       (a - z / A - Z)
// Key must not contain repeated characters. return 1.         wrong: JJ

#include <cs50.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define MAXCHARS 26
#define MAXARGS 2

int isValidKey(int totalArgs, string key[]);
string getPlaintext(void);
string toCyphertext(string key, string plaintext);

int main(int argc, string argv[])
{
    char valid = isValidKey(argc, argv);
    if (valid != 0)
    {
        return 1;
    }

    string plaintext = getPlaintext();
    string key = argv[1];
    toCyphertext(key, plaintext);
}

int isValidKey(int totalArgs, string key[])
{
    // the program expects to receive only two args.
    if (totalArgs != MAXARGS)
    {
        printf("Usage: ./substitution key.\n");
        return 1;
    }

    // a valid key must contain 26 chars.
    short count = 0;
    while (key[1][count] != '\0')
    {
        count++;
    }
    if (count != MAXCHARS)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }

    // a valid key must only contain alphabetic characters.
    for (short i = 0; i < MAXCHARS; i++)
    {
        if ((key[1][i] >= 65 && key[1][i] <= 90) || (key[1][i] >= 97 && key[1][i] <= 122))
        {
            continue;
        }
        printf("Key must only contain alphabetic characters.\n");
        return 1;
    }

    // verifies if second arg contains repeated chars
    for (int i = 0; i < MAXCHARS; i++)
    {
        char currentChar = key[1][i];

        for (int j = 0; j < MAXCHARS; j++)
        {
            if (i == j)
            {
                continue;
            }

            if (currentChar == toupper(key[1][j]) || currentChar == tolower(key[1][j]))
            {
                printf("Key must not contain repeated characters.\n");
                return 1;
            }
        }
    }

    return 0;
}

string getPlaintext(void)
{
    return get_string("plaintext: ");
}

string toCyphertext(string key, string plaintext)
{
    short c = 0;
    while (plaintext[c] != '\0')
    {
        c++;
    }

    char cyphertext[c];

    // NQXPOMAFTRHLZGECYJIUWSKDVB
    for (short i = 0; i < c; i++)
    {
        char currentChar = plaintext[i]; // HI - H
        bool isLower = (currentChar >= 97 ? true : false);

        if (currentChar < 65 || currentChar > 122)
        {
            cyphertext[i] = currentChar;
        }
        else if (isLower)
        {
            cyphertext[i] = tolower(key[currentChar - 97]);
        }
        else
        {
            cyphertext[i] = toupper(key[currentChar - 65]);
        }
    }

    printf("ciphertext: ");
    for (short i = 0; i < c; i++)
    {
        printf("%c", cyphertext[i]);
    }
    printf("\n");
    return 0;
}