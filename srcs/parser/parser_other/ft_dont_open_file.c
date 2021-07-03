/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_dont_open_file(int *i)
{
	if (g_var[0] != '\0')
	{
		if (g_var[0] == 'A' && (g_var[1] == '2' || g_var[1] == 'A'))
		{
			*i = 2;
			g_var = ft_substr(g_var, 2, ft_strlen(g_var));
		}
		else
		{
			*i = 1;
			g_var = ft_substr(g_var, 1, ft_strlen(g_var));
		}
	}
}
