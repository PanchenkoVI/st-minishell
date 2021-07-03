/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

static char	**ft_other_exits(char **date, int *j)
{
	if (date[0][0] == '.')
		*j = 1;
	else if (date[0][0] == '\0')
		date[0] = ft_new_date(date[0]);
	if (ft_kk(date[0]) == 1)
		*j = 1;
	return (date);
}

static void	ft_other_exit(void)
{
	ft_putstr_fd("Problem in **str (Malloc).\n", 0);
	exit(12);
}

void		ft_other(t_instruct *instrct, int j, char **env, int i)
{
	char	**date;
	int		m;

	date = NULL;
	if (!(date = (char **)malloc(sizeof(char *) * 1)))
		ft_other_exit();
	date = ft_str_date(instrct, date, i);
	date = ft_other_exits(date, &j);
	m = 0;
	if (date[0][0] == '/')
		m = 0;
	else if (ft_sign('/', date[0]))
		date[0] = ft_rel_p(date[0], 0);
	else
		m = ft_ex_err(&date[0], env, 1);
	ft_mb_dir(date[0], 0, 0);
	ft_other2(&i, date, instrct, m);
	if (i == 1 && m == 0 && j != 1)
		i = ft_ex_err(&date[0], env, 2);
	ft_relation_f(instrct, i, date, env);
	errno = 0;
	ft_free(date);
}
