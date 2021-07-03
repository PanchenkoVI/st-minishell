/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_unset(t_info *inf, t_instruct *instrct, int i, int j)
{
	char	**new;

	while (inf->instrct->arg[i])
	{
		ft_error_unset(inf->instrct->arg[i], j);
		i++;
	}
	i = 0;
	if (!(new = (char **)malloc(sizeof(char *) * 1)))
	{
		ft_putstr_fd("Problem in **str (Malloc).\n", 0);
		exit(12);
	}
	new[0] = NULL;
	while (inf->cmd_env[i])
	{
		j = ft_uns_int(inf, instrct, i, 0);
		if (instrct->arg[j] != NULL)
			i = i + 2;
		else
			new = ft_unset_str(inf, new, &i, 0);
	}
	ft_free(inf->cmd_env);
	inf->cmd_env = NULL;
	inf->cmd_env = new;
}
