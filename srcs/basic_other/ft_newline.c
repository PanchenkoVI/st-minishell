/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_newline(char *line)
{
	int	m;
	int	n;
	int	i;
	int	j;

	n = ft_sign_n('\'', line, 0);
	m = ft_sign_n('\"', line, 0);
	i = ft_quantity('\'', line, 0);
	j = ft_quantity('\"', line, 0);
	if (n == -1 && m != -1)
	{
		m++;
		if (j % 2 != 0 && j == 1)
			line = ft_union_str(line, "\"");
	}
	else if (m == -1 && n != -1)
	{
		if (i % 2 != 0)
			line = ft_union_str(line, "\'");
	}
	else if (m > n || n > m)
		line = ft_newline2(line, 0);
	return (line);
}
