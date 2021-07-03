/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_str(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (k == 1 && str[i] == '\"')
			return (-1);
		else if (k == 2 && str[i] == '\'')
			return (-2);
		else if (str[i] == '\'' || str[i] == '\"')
			k = ft_str2(str, i, k);
		i++;
	}
	return (0);
}
