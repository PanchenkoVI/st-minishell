/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_tld_echo(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\'' || str[i] == '\"')
		{
			if ((k = ft_tdl_test1(str, str[i], i)) < 0)
				return (-1);
			else
				i++;
		}
		i++;
	}
	return (k);
}
