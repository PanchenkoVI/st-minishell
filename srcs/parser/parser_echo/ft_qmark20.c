/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

static int	ft_ft_qmqmqmq(char *str, int i)
{
	while (str[i] != '\0' && str[i] != '\'' && str[i] != ' ' && \
		str[i] != '\\' && str[i] != '$')
	{
		if (str[i] == ';' || str[i] == '|')
			break ;
		i++;
	}
	return (i);
}

void		ft_qmark20(char *str, int *l, int *n, int *m)
{
	int		i;

	i = *l;
	while (str[i] != '\0')
	{
		if (str[i] == '\'')
		{
			*m = i;
			i++;
			i = ft_ft_qmqmqmq(str, i);
			*l = i;
			if (str[i] == ' ')
				break ;
			else if (str[i] == '\'')
				*n = i;
			break ;
		}
		i++;
	}
	*l = i;
}
