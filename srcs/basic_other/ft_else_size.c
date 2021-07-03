/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_else_size(int *dect, int i, pid_t cpid, char **tmp)
{
	int j;

	if (tmp != NULL)
		ft_free(tmp);
	if (i == 1)
		close(dect[0]);
	else
		close(dect[1]);
	waitpid(cpid, &j, WUNTRACED);
}
