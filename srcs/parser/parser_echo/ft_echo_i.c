/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_echo_i(int i)
{
	i = 0;
	while (g_line[i] != '\0')
	{
		if (g_line[i] == '2')
			break ;
		i++;
	}
	if (g_line[i] == '2' && g_line[i] != '\0')
	{
		g_line = ft_reduction_arr(g_line, i, 0);
		g_line = ft_reduction_arr(g_line, i - 1, 0);
	}
	i = ft_echo_i2(0);
	if (i == 0 || g_line[0] == '2')
		g_line = ft_substr(g_line, 1, ft_strlen(g_line));
	return (i);
}
