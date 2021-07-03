/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_while_echo(t_instruct *t, char *line, char **env, int i)
{
	char	*tmp;
	int		flag;
	int		m;

	m = 0;
	flag = ft_flag_spacess(t, 0);
	line = ft_strdup("");
	while (t->arg[i])
	{
		if (t->arg[i][0] == '$' && g_xp == 1)
			t->arg[i] = ft_var_replacement(t->arg[i], 0, env, &m);
		if ((ft_strcmp(t->arg[i], "0") == 0) && \
		(ft_strcmp(g_print_err, t->arg[i]) != 0) && g_for_er <= 0)
			t->arg[i] = ft_k(t->arg[i], 2);
		else if ((ft_strcmp(t->arg[i], "127") == 0) && \
		(ft_strcmp(g_print_err, t->arg[i]) != 0) && g_for_er <= 0)
			t->arg[i] = ft_k(t->arg[i], 1);
		t->spaces[i] = ft_echo_space(t, i, flag, m);
		tmp = ft_union_str(t->arg[i], t->spaces[i]);
		line = ft_strjoin_free(line, tmp);
		free(tmp);
		i++;
	}
	return (line);
}
