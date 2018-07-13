int	ft_is_prime(int nb);
void	ft_putnbr(int nb);
int 	ft_putchar(char c);

int		main(void)
{
	int b;

	b = ft_is_prime(2000012653);
	ft_putnbr(b);
	ft_putchar('\n');
	return (0);
}
