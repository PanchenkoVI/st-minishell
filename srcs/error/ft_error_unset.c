/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_error_unset(char *str, int i)
{
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 1)
		{
			ft_putstr("unset: `");
			ft_putstr(str);
			ft_putstr("': not a valid identifier\n");
			g_print_err = "1";
			return ;
		}
		else if (ft_isalpha(str[i]) == 0)
		{
			ft_putstr("unset: `");
			ft_putstr(str);
			ft_putstr("': not a valid identifier\n");
			g_print_err = "1";
			return ;
		}
		i++;
	}
}
