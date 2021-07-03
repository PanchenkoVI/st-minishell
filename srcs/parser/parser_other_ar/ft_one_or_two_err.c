/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_one_or_two_err(char *str, int i, int n)
{
	if (!str[0])
		return (-1);
	while (str[i] != '\0')
	{
		if ((i = ft_one_or_two_err0(str, i, &n)) < 0)
			return (-i);
		else if (str[i] == ';' && str[i + 1] == ' ' && n == 1)
		{
			i = ft_one_or_two_err1(str, i);
			if (i == 1 || i == -1)
				return (i);
		}
		else if (str[i] == '|' && str[i + 1] != '|' && n == 1)
		{
			i = ft_one_or_two_err2(str, i);
			if (i == 3 || i == -1)
				return (i);
		}
		else if (str[i] == '|' && str[i + 1] == '|')
			return (4);
		i++;
	}
	return (-1);
}
