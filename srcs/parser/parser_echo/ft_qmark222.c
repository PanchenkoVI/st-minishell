/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_qmark222(char *str, int *l)
{
	int i;

	i = *l;
	while (str[i] != '\0' && str[i] != '\"' && \
	str[i] != ' ' && str[i] != '\\' && str[i] != '$')
		i++;
	*l = i;
	if (str[i] == ' ')
		return (0);
	else if (str[i] == '$')
	{
		while (str[i] != '\"' && str[i] != '\0')
			i++;
		i++;
		*l = i;
		if (str[i] == '\"')
			return (0);
	}
	return (1);
}
