#include "main.h"
/**
*main - prints putchar
*Return: 0
*/
int main(void)
{
int i = 0;
char text = "_putchar";
while (text[i] !='\0')
{
_putchar(text[i]);
i++;
}
_putchar('\n');
return (0);
}
