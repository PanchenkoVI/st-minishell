/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_dqdq(char *str, int l, int m)
{
	l = (ft_sign_n('\'', str, 0));
	m = (ft_sign_n('\"', str, 0));
	if (l == m)
		g_qm = 0;
	else if (l == -1 && m != -1)
		g_qm = -2;
	else if (m == -1 && l != -1)
		g_qm = -1;
	else if (m > l || l > m)
	{
		if (m > l)
			g_qm = -1;
		else if (l > m)
			g_qm = -2;
	}
}
