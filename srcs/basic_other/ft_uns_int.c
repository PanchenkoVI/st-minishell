/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_uns_int(t_info *inf, t_instruct *instrct, int i, int j)
{
	int l;

	while (instrct->arg[j])
	{
		l = 0;
		if (inf->cmd_env[i][l] == instrct->arg[j][l])
		{
			while (inf->cmd_env[i][l] && instrct->arg[j][l])
			{
				if (inf->cmd_env[i][l] != instrct->arg[j][l])
					break ;
				l++;
			}
			if (inf->cmd_env[i][l] == '\0' && instrct->arg[j][l] == '\0')
				break ;
		}
		j++;
	}
	return (j);
}
