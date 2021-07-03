/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_exit3(t_instruct *instrct, int *flag)
{
	ft_putstr(instrct->arg[0]);
	ft_putstr_fd(": numeric argument required\n", 0);
	*flag = 255;
}
