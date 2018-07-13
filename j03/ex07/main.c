char	*ft_strrev(char *str);
int 	ft_putchar(char c);

int		main()
{
	char str[8] = "abcde";

	ft_strrev(str);
	ft_putchar(str[0]);
	ft_putchar(str[1]);
	ft_putchar(str[2]);
	ft_putchar(str[3]);
	ft_putchar(str[4]);
	ft_putchar(str[5]);
	ft_putchar('\n');
	return (0);
}
