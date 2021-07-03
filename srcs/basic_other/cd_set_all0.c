/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	cd_set_all0(int *i, char **path, char **curr_wdir)
{
	errno = 0;
	*i = 0;
	*path = NULL;
	free(*path);
	*curr_wdir = NULL;
	errno = 0;
	g_print_err = "0";
}
