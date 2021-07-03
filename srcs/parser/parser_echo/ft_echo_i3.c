/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_echo_i3(int *i)
{
	if (g_line[1] == '9' && g_line[0] != '2')
	{
		g_line = ft_substr(g_line, 2, ft_strlen(g_line));
		*i = -6;
	}
	else if (g_line[1] == '8' && g_line[0] != '2' && g_line[2] != '2')
	{
		g_line = ft_substr(g_line, 2, ft_strlen(g_line));
		*i = -7;
	}
	else
	{
		g_line = ft_substr(g_line, 2, ft_strlen(g_line));
		*i = -6;
	}
}
