/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

int		ft_read_str(char **str, int *i)
{
	char	line[64];
	int		l;

	if (g_key == 1)
		return (0);
	l = *i;
	while (line[0] != '\n' && l != 0)
	{
		l = read(0, line, 1);
		if (l == -1)
		{
			errno = 2;
			exit(1);
		}
		line[l] = '\0';
		*str = ft_strjoin_free(*str, line);
		if (l == 0 && *str[0] == 0 && g_key != 3)
			ft_read_exit();
		l++;
	}
	*i = l;
	return (1);
}
