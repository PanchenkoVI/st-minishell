/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_srl_pwd2(char *str)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (str[i])
	{
		if (k == 1 && str[i] == '\"')
			return (-1);
		else if (k == 2 && str[i] == '\'')
			return (-2);
		else if (str[i] == '\'' || str[i] == '\"')
			k = ft_str2(str, i, k);
		else if (k == 0 && str[i] == 'p' && \
			str[i + 1] == 'w' && str[i + 2] == 'd' && \
			(str[i + 3] == ' ' || str[i + 3] == '\0'))
			return (1);
		i++;
	}
	return (0);
}
