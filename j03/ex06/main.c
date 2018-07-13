int		ft_strlen(char *str);
void	ft_putnbr(int nb);
int 	ft_putchar(char c);

int		main()
{
	int i;

	char str[8] = "pepette";
	i = ft_strlen(str);
	ft_putnbr(i);
	ft_putchar('\n');
	return (0);
}
