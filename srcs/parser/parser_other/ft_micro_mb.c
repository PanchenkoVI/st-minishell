/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_micro_mb(errno_t **error_num)
{
	g_flag = 1;
	**error_num = 21;
	g_print_err = "126";
}
