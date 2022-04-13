int main(void)
{
    char    *str;

	str = "reborn !";
    ft_putstr(str);
}

void    ft_putchar(char *c)
{
	write(1, &*c, 1);
}

