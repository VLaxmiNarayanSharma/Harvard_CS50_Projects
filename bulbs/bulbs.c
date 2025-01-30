#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    // TODO
    string message = get_string("Message: ");
    int n = strlen(message);
    for (int l = 0; l < n; l++)
    {
        int k = message[l];
        int binary[8];
        int i = 7;
        while (i >= 0)
        {
            binary[i] = k % 2;
            k = k / 2;
            i--;
        }
        for (int j = 0; j < 8; j++)
        {
            print_bulb(binary[j]);
        }
        printf("\n");
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
