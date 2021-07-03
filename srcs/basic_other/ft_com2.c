/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_com2(t_info *ins, char *str)
{
	if (str[0] == '>' && str[1] == '\0')
		ft_red(ins->instrct);
	else if (str[0] == 'c' && str[1] == 'l' && \
		str[2] == 'e' && str[3] == 'a' && str[4] == 'r' && \
		str[5] == '\0')
	{
		ft_putstr("\033[2J");
		ft_putstr("\033[0;0f");
	}
	else if (str[0] == 'p' && str[1] == 'w' && \
		str[2] == 'd' && str[3] == '\0')
	{
		if (ins->instrct->arg[0] == NULL)
			ft_pwd(ins->instrct);
	}
	else if (str[0] == 'c' && str[1] == 'd' && str[2] == '\0')
		ft_cd(ins, ins->instrct, 0);
	else
		ft_com3(ins, str);
}
