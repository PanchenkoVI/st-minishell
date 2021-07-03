/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_isdigit(int n)
{
	if (n > 47 && n < 58)
		return (1);
	else
		return (0);
}
