int	ft_iterative_power(int nb, int power);
void	ft_putnbr(int nb);
int 	ft_putchar(char c);

int		main(void)
{
	int b;

	b = ft_iterative_power(12, 1);
	ft_putnbr(b);
	ft_putchar('\n');
	return (0);
}
