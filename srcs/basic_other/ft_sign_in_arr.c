/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		ft_sign_in_arr(char **date, char *sign)
{
	int n;
	int m;

	n = 0;
	m = 0;
	while (date[n])
	{
		m = 0;
		while (date[n][m])
		{
			if (ft_sign(date[n][m], sign) == 0)
				return (0);
			m++;
		}
		n++;
	}
	return (1);
}
