/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_pipe_key_err(int i, int *pp)
{
	if (g_line_pipe)
	{
		while (g_line_pipe[i] != '2' && g_line_pipe[i] != '\0')
			i++;
		if (g_line_pipe[i] == '2' && g_line_pipe[i + 1] == '1')
		{
			g_print_err = "127";
			g_line_pipe = ft_substr(g_line_pipe, i + 1, ft_strlen(g_line_pipe));
		}
	}
	*pp = dup(0);
}
