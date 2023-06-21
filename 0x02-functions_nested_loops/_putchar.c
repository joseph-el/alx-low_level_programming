# include "main.h"

static void _putchar(char c)
{
    write (STDOUT_FILENO, &c, 1);
}

void ft_putstr(char *the_string)
{
    while (*the_string)
        _putchar(*the_string++);
    _putchar(10);
}
