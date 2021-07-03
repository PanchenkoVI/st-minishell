/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_double_n1(char *str, int i, int *m)
{
	while (str[i] != '\0' && str[i] != ';' && str[i] != '|' && \
		(str[i] == ' ' || str[i] == '-' || str[i] == 'n'))
	{
		if (str[i] == '-' && str[i + 1] == 'n' && str[i + 2] != ' ')
		{
			*m = i;
			i = ft_double_n2(str, i, &m);
			break ;
		}
		else if (str[i] == '-' && str[i + 1] == 'n' && str[i + 2] == ' ')
		{
			i++;
			while (str[i] == 'n' || str[i] == '-' || str[i] == ' ')
				i++;
			i--;
			break ;
		}
		else if ((str[i] == '-' && str[i + 1] != 'n') || (str[i] == 'n'))
		{
			i--;
			break ;
		}
		i++;
	}
	return (i);
}
