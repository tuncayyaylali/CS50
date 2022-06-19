#include <cs50.h>
#include <stdio.h>

int get_positive_int(string propmt);

int main(void)
{
    int i = get_positive_int("Positive integer: ");
    for (int j=1; j<i+1; j++)
    {        
        for (int l=0; l<j; l++)
        {
            printf("#");
        }      

        printf("\n");
    }
}

int get_positive_int(string prompt)
{
    int number;
    do
    {
        number = get_int("%s", prompt);       
    }
    while (number<1 || number>8);
    return number;
}
