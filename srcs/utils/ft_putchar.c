/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_putchar(int c)
{
	if (!(write(1, &c, 1)))
		return (0);
	return (1);
}
