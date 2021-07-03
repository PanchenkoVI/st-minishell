/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_qmark22(char *str, int i, int len)
{
	int n;
	int m;

	n = 0;
	m = 0;
	if (len == 0)
		ft_qmark220(str, &i, &n, &m);
	if (m != 0 && n == 0)
		str = ft_qmark22(str, i, len);
	else if (m != 0 && n != 0)
	{
		str = ft_reduction_arr3(str, m, n);
		n--;
		str = ft_qmark22(str, n, len);
	}
	return (str);
}
