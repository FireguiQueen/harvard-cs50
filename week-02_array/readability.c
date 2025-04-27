#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

string userText(void);
void countLettersWordsSentences(string text, unsigned short totalChars, short LWS[]);

int main(void)
{
    string text = userText();
    unsigned short totalChars = strlen(text);
    short LWS[totalChars];
    countLettersWordsSentences(text, totalChars, LWS);

    int Letters = LWS[0];
    int words = LWS[1];
    int Sentences = LWS[2];
    // printf("LETTERS: %i, WORDS: %i, SENTENCES: %i \n", LWS[0], LWS[1], LWS[2]);
    float L = (float) Letters / words * 100;
    float S = (float) Sentences / words * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;

    if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(index));
    }
}

string userText(void)
{
    return get_string("Text: ");
}

void countLettersWordsSentences(string text, unsigned short totalChars, short LWS[])
{

    unsigned short totalLetters = 0;
    unsigned short totalSpaces = 0;
    unsigned short totalSentences = 0;

    for (short i = 0; i < totalChars; i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            totalLetters++;
        }
        else if (text[i] == 32)
        {
            totalSpaces++;
        }
        else if ((text[i] == '!') || (text[i] == '?') || (text[i] == '.'))
        {
            totalSentences++;
        }
    }

    LWS[0] = totalLetters;
    LWS[1] = totalSpaces + 1;
    LWS[2] = totalSentences;
}