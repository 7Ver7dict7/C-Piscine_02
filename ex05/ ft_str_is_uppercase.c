#include <stdio.h>

int		ft_str_is_uppercase(char *str)
{
	int c;

	c = 0;
	while (str[c] != '\0')
	{
		if ((str[c] < 'A') || (str[c] > 'Z'))
			return (0);
		c++;
	}
	return (1);
}
int		main(void)
{
	char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *p_upr;
	p_upr = uppercase;

	char special[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_";
	char *p_spe;
	p_spe = special;

	char empty[] = "";
	char *p_emp;
	p_emp = empty;

	printf("-----\n1 = String contains only uppercase chars\n0 = String doesn't contain only uppercase chars\n\n");
	printf("%s = %d\n", uppercase, ft_str_is_uppercase(p_upr));
	printf("%s = %d\n", special, ft_str_is_uppercase(p_spe));
	printf("Empty = %d\n-----\n", ft_str_is_uppercase(p_emp));

	return (0);
}