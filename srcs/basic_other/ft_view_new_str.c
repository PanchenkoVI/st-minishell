/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_view_new_str(char *tmp, char **line, int i, int j)
{
	char	str[12];
	int		l;

	tmp = ft_strdup("");
	while ((j = read(0, str, 10)) > 0)
	{
		str[j] = '\0';
		tmp = ft_strjoin_free(tmp, str);
		l = 0;
		while (tmp[l])
		{
			if (tmp[l] == '\n')
			{
				l = -1;
				break ;
			}
			l++;
		}
		if (l == -1)
			break ;
	}
	i = ft_strlen(tmp) - 1;
	*line = ft_substr(tmp, 0, i);
	free(tmp);
}
