/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

static char	*ft_final_echo_line(char *line, int i, int n)
{
	if (i == -7)
		line = ft_echo_space2(line);
	if (n == 0)
		line = ft_strjoin_free(line, "\n");
	return (line);
}

void		ft_echo(t_instruct *t, char **env, int i)
{
	char	*line;
	int		n;

	line = NULL;
	n = 0;
	if (t->arg[i])
	{
		while (t->arg[i])
		{
			if (t->arg[i][0] == '-' && t->arg[i][1] == 'n' && \
				t->arg[i][2] == '\0')
				i = ft_circl_n_echo(i, &n);
			else
				break ;
		}
	}
	line = ft_while_echo(t, line, env, i);
	i = 0;
	if ((i = ft_strlen(g_line)) > 0)
		i = ft_echo_i(i);
	line = ft_final_echo_line(line, i, n);
	errno = 0;
	g_print_err = "0";
	ft_save_info(t, 0, line);
}
