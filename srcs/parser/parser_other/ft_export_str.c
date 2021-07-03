/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_export_str(char *str, char *tmp, int j, int n)
{
	if (n == 1)
	{
		str[j] = '\0';
		tmp = ft_strdup(str);
		str[j] = '=';
	}
	else if (n == 2)
	{
		str = NULL;
		str = ft_strdup(tmp);
		return (str);
	}
	return (tmp);
}
