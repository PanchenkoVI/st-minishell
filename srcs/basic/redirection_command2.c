/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	redirection_command2(pid_t p, int *dect1, int *dect2)
{
	int	i;

	waitpid(p, &i, WUNTRACED);
	close(*dect1);
	close(*dect2);
	g_key = 0;
}
