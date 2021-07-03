/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_strline(char *str, int j, char **line)
{
	char	*tmp;

	j++;
	if (!(tmp = (char *)malloc(sizeof(char) * (j))))
		return (NULL);
	j = 0;
	while (str[j] && str[j] != '\n')
	{
		tmp[j] = str[j];
		j++;
	}
	tmp[j] = '\0';
	*line = tmp;
	if (str)
	{
		j = 0;
		while (str[j] && str[j] != '\n')
			j++;
		if (!str[j])
			free(str);
		else
			str = ft_next_str(str, j);
	}
	return (str);
}
