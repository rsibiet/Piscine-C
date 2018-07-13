int	ft_iterative_factorial(int nb);
void	ft_putnbr(int nb);
int 	ft_putchar(char c);

int		main(void)
{
	int b;

	b = ft_iterative_factorial(12);
	ft_putnbr(b);
	ft_putchar('\n');
	return (0);
}
