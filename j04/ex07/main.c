int	ft_find_next_prime(int nb);
void	ft_putnbr(int nb);
int 	ft_putchar(char c);

int		main(void)
{
	int b;

	b = ft_find_next_prime(-2000000);
	ft_putnbr(b);
	ft_putchar('\n');
	return (0);
}
