/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_time_sign_ex(char *str, int j, int n)
{
	if (n == 1)
	{
		while (str[j] != '=' && str[j])
			j++;
	}
	else if (n == 2)
	{
		while (str[j] && str[j] != '=')
			j++;
	}
	return (j);
}
