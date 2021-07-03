/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_export(t_info *inf, int i, t_instruct *instrct, int size)
{
	g_print_err = "0";
	if (!instrct->arg[0])
		return (print_env(inf->cmd_env));
	while (instrct->arg[size])
		size++;
	if (instrct->arg[0][0] != ' ')
	{
		while (i < size)
		{
			if (!(ft_isalpha(instrct->arg[i][0]) || instrct->arg[i][0] == '_'))
			{
				ft_putstr_fd("minishell: export: not a valid identifier\n", 0);
				g_print_err = "1";
				i++;
				continue;
			}
			ft_exp_save_char(inf, instrct, i++, 0);
		}
	}
}
