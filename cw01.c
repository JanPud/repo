#include <stdio.h>

int main()
{
float a, b, c;

printf("Podaj a i b:");
scanf("%f %f", &a, &b);

printf("\n wynik z %.2f + %.2f = %.2f \n", a, b, a+b );
printf("\n wynik z %.2f - %.2f = %.2f \n", a, b, a-b );
printf("\n wynik z %.2f * %.2f = %.2f \n", a, b, a*b );
printf("\n wynik z %.2f / %.2f = %.2f \n", a, b, a/b );

return 0;
}
