/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_choose_side(pid_t p, int *dect, char **date, int fd)
{
	int		i;
	char	**tmp;

	tmp = NULL;
	i = g_ch - '0';
	g_ch = 0;
	close(dect[i]);
	tmp = ft_char_tmp(tmp, date, i);
	dect[i] = fd;
	if (p == 0)
		ft_size_zero(dect, date, i, tmp);
	else
		ft_else_size(dect, i, p, tmp);
}
