/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_com(t_info *ins, char *str)
{
	if (!(ins->instrct))
		return ;
	while (ins->instrct)
	{
		str = ft_strdup(ins->instrct->instrct);
		if (ins->instrct->sign != '|')
		{
			if (str[0] == '$' && str[1] == '?' && str[2] == '\0')
			{
				ft_putstr("command not found: ");
				ft_putstr(g_print_err);
			}
			else
				ft_com2(ins, str);
			ins->instrct = ins->instrct->next;
		}
		else
			ft_vertical_line(1, 0, ins);
		free(str);
	}
}
