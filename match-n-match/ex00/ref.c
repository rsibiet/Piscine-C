/* header 42*/

#include <unistd.h>

int ft_putchar(char c)
{
	write(1,&c,1);
	return (0);
}

int		match(char *s1, char *s2)
{
	int i;
	int j;
	int j_memo;

	i = 0;
	j = 0;
	j_memo = 0;
	while((s1[i] != '\0' || s2[j] != '\0') && (s1[i] == s2[j] || s2[j] =='*'))
	{
		if(s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else if(s2[j] == '*')
		{
			while(s2[j] == '*')
				j++;
			j_memo = j;
			while(s2[j] != s1[i] && s1[i] != '\0' && s2[j] != '\0')
				i++;
		}
	}
	if(s1[i] != '\0')
	{
		j = j_memo;
		i++;
		while(s1[i] != s2[j] && s1[i] != '\0')
			i++;
		while(s1[i] == s2[j] && (s1[i] != '\0' || s2[j] != '\0'))
		{
			i++;
			j++;
		}
	}		
	if(s1[i] == '\0' && s2[j] == '\0')
		ft_putchar('Y');
		return (1);
	else
		return (0);
}

int		main()
{
	match("testa", "t**a**");
	return (0);
}
