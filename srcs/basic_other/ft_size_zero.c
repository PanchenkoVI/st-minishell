/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_size_zero(int *dect, char **date, int i, char **tmp)
{
	if (tmp != NULL)
		ft_free(tmp);
	dup2(dect[i], i);
	close(dect[0]);
	close(dect[1]);
	execve(date[0], date, NULL);
}
