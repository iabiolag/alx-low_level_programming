#include "main.h"
/**
* prints the alphabet, in lowercase
* return - void
*/
void	print_alphabet(void)
{
char	lc;
lc = 'a';
while (lc <= 'z')
{
_putchar(lc);
lc++;
}
_putchar('\n');
}