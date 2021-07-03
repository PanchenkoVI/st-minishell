/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_dollar(char *str, int i, int *j)
{
	if (!str[i])
		return (-1);
	while (str[i] != '\0')
	{
		if (str[i] == '\\' && str[i + 1] == '$')
			i++;
		else if (str[i] == '$' && (str[i + 1] != '?' || \
			str[i + 1] == '\0'))
		{
			*j = i;
			i++;
			while (str[i])
			{
				if (str[i] == ' ' || str[i] == '\t')
					break ;
				else if (ft_isdigit(str[i]) == 0)
					return (1);
				else
					i++;
			}
			break ;
		}
		i++;
	}
	return (-1);
}
