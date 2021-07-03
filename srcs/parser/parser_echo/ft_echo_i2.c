/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_echo_i2(int i)
{
	if (g_line[0] == '9' && g_line[1] != '2')
	{
		g_line = ft_substr(g_line, 1, ft_strlen(g_line));
		if (g_line[0] == '1')
			g_line = ft_substr(g_line, 1, ft_strlen(g_line));
		i = -6;
	}
	else if (g_line[0] == '8' && g_line[1] != '2')
	{
		g_line = ft_substr(g_line, 1, ft_strlen(g_line));
		if (g_line[0] == '1')
			g_line = ft_substr(g_line, 1, ft_strlen(g_line));
		i = -7;
	}
	else if ((g_line[0] == '2' && g_line[0] == '1') && g_line[1])
		ft_echo_i3(&i);
	return (i);
}
