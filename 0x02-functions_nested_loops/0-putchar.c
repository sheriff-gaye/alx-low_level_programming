#include "main.h"
/**
 * main - prints the string "_putchar" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
char c[] = "_putchar";
int n = 0;

while (n <= 7)
{
  _putchar(c[n]);
  n++;
}
 _putchar('\n');
 return (0);
}