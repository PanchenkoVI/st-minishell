/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_tld_cd(char *str, char m)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\'' || str[i] == '\"')
		{
			if ((k = ft_tdl_test2(str, str[i], i, m)) < 0)
				return (-1);
			else
				i++;
		}
		i++;
	}
	return (k);
}
