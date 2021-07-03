/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_k(char *str, int n)
{
	if (n == 1)
	{
		free(str);
		str = ft_strdup(g_print_err);
	}
	else if (n == 2)
	{
		free(str);
		str = ft_strdup(" ");
		str = ft_strjoin_free(str, g_print_err);
	}
	return (str);
}
