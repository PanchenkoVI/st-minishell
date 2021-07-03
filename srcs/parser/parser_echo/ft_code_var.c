/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_code_var(char *str)
{
	int i;

	i = 0;
	g_var = ft_strdup("A");
	while (str[i] != '\0')
	{
		if (str[i] == '6' && str[i + 1] == '7')
		{
			g_var = ft_strjoin_free(g_var, "A");
			i++;
		}
		else if (str[i] == '7')
			g_var = ft_strjoin_free(g_var, "2");
		else if (str[i] == '1' && str[i + 1] == '1')
		{
			g_var = ft_strjoin_free(g_var, "3");
			i++;
		}
		i++;
	}
}
