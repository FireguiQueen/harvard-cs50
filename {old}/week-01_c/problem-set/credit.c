#include <cs50.h>
#include <stdbool.h>
#include <stdio.h>

long userInput();

short digitsCounter(long value);

short processAndDoubleValue(short value);

bool isValid(long number, short digits);

string printValidationMessage(long value, short digits);

int main(void)
{
    long creditCardNumber = userInput();
    short creditCardDigits = digitsCounter(creditCardNumber);

    string message = printValidationMessage(creditCardNumber, creditCardDigits);
    printf("%s", message);

    return 0;
}

long userInput()
{
    return get_long("Credit card number: ");
}

short digitsCounter(long value)
{
    int digits = 0;

    while (value != 0)
    {
        value = value / 10;
        digits++;
    }
    return digits;
}

short processAndDoubleValue(short value)
{
    value *= 2;

    if (value >= 10)
    {
        short firstDigit = value / 10;
        short lastDigit = value % 10;
        value = firstDigit + lastDigit;
    }
    return value;
}

bool isValid(long number, short digits)
{
    long cardNumber = number;

    int sumUntouchedDigits = 0;
    int sumDoubleDigits = 0;

    bool shouldDoubleNextTime = false;
    for (int i = 0; i < digits; i++)
    {
        short digitToPush = cardNumber % 10; // save last digit.
        cardNumber = cardNumber / 10;        // remove it.

        if (shouldDoubleNextTime)
        {
            sumDoubleDigits = sumDoubleDigits + processAndDoubleValue(digitToPush);
        }
        else
        {
            sumUntouchedDigits += digitToPush;
        }

        shouldDoubleNextTime = !shouldDoubleNextTime;
    }

    if ((sumUntouchedDigits + sumDoubleDigits) % 10 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

string printValidationMessage(long value, short digits)
{
    if (isValid(value, digits))
    {
        while (value >= 100)
        {
            value = value / 10;
        }

        if ((value == 34 || value == 37) && (digits == 15))
        {
            return "AMEX\n";
        }
        else if ( (value >= 51 && value <= 55) && (digits == 16))
        {
            return "MASTERCARD\n";
        }
        else
        {
            long temp = value / 10;

            if ((temp == 4) && (digits == 13 || digits == 16))
            {
                return "VISA\n";
            }
            else
            {
                return "INVALID\n";
            }
        }
    }

    return "INVALID\n";
}
