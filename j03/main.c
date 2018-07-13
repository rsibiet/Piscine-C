void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putnbr(int nb);
int 	ft_putchar(char c);

int		main()
{
	int a;
	int b;

	a = 10;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	ft_putnbr(a);
	ft_putchar('\n');
	ft_putnbr(b);
	ft_putchar('\n');
	return (0);
}
