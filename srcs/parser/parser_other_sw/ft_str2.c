/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_str2(char *str, int i, int k)
{
	if (str[i] == '\'')
	{
		if (k == 1)
			k = 0;
		else
			k = 1;
	}
	else if (str[i] == '\"')
	{
		if (k == 2)
			k = 0;
		else
			k = 2;
	}
	return (k);
}
