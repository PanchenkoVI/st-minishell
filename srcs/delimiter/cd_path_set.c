/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	cd_path_set(t_instruct *instrct, char ***path, int *len)
{
	if (!(**path = (char *)malloc(sizeof(char) * (*len))))
	{
		ft_putstr_fd("Problem in *str (Malloc).\n", 0);
		exit(12);
	}
	ft_strlcpy(**path, instrct->arg[0], *len);
}
