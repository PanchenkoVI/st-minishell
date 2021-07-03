/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_test(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '$' && str[i] != '?')
			return (str);
		else if (str[i] == '$' && str[i + 1] == '?')
			g_n = 1;
		i++;
	}
	return (str);
}
