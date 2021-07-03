/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_qmark220(char *str, int *l, int *n, int *m)
{
	int i;

	i = *l;
	while (str[i] != '\0')
	{
		if (str[i] == '\"')
		{
			*m = i;
			i++;
			if (ft_qmark222(str, &i) == 0)
				break ;
			else if (str[i] == '\"')
				*n = i;
			break ;
		}
		i++;
	}
	*l = i;
}
