#include <stdio.h>
#include <cs50.h>

float get_positive_float(string prompt);

int main(void)
{
    float cash = get_positive_float("Change owed: ");
    int ceyreklik = cash * 100;
    int yirmibes = ceyreklik/25;
    int on = (ceyreklik - (yirmibes * 25)) /10;
    int bes = (ceyreklik - (yirmibes * 25) - (on * 10)) /5;
    int bir = (ceyreklik - (yirmibes * 25) - (on * 10) - (bes * 5)) /1; 
    printf("%i\n", yirmibes + on + bes + bir); 
}

float get_positive_float(string prompt)
{
    float number;
    do
    {
        number = get_float("%s", prompt);       
    }
    while (number<0 || number>=1);
    return number;
}
