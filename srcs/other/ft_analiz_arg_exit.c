/*
* Created: 2021/02/01
*/


#include "../../header/minishell.h"

int		ft_analiz_arg_exit(char *str, int i, int flag)
{
	while (str[i])
	{
		if (ft_isdigit(str[i]) == 1)
			flag = 1;
		else
		{
			flag = -1;
			break ;
		}
		i++;
	}
	return (flag);
}
