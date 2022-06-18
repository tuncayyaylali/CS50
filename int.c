#include <cs50.h>
#include <stdio.h>

int main(void)
{
    double x = get_double("Bir tam sayı giriniz: \n");
    double y = get_double("Bir tam sayı daha giriniz: \n");
    printf("Girilen tamsayıların çarpımı: %f' a eşittir.\n", x * y);
    printf("Girilen tamsayıların toplamı: %f' a eşittir.\n", x + y);
    printf("Girilen tamsayıların farkı: %f' a eşittir. \n", x - y);
    printf("Girilen tamsayıların bölümü: %f' a eşittir.\n", x / y);
    int z = get_int("Bir tam sayı giriniz: \n");
    int k = get_int("Bir tam sayı daha giriniz: \n");
    printf("Girilen tamsayıların modu: %i' a eşittir.\n", z % k);
}
