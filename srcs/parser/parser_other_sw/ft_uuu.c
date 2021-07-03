/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_uuu(char *str)
{
	int i;
	int j;
	int n;

	n = 0;
	j = -1;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\'' || str[i] == '\"')
			j = -1;
		else if (str[i] == ' ' && str[i + 1] == '-' && \
			str[i + 2] == '-' && str[i + 3] == 'n')
			n = -1;
		i++;
	}
	if (j < 0 && n < 0)
		return (1);
	return (0);
}
