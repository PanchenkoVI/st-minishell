/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_space_m(int m)
{
	if (m == 0)
		m = 1;
	else if (m == 1)
		m = 0;
	return (m);
}
