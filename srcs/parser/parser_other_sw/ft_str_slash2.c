/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_str_slash2(char *str, char *line, int i, int c)
{
	int j;
	int len;

	len = ft_strlen(line);
	j = 0;
	while (i > j)
	{
		str[j] = line[j];
		j++;
	}
	while (c > j)
	{
		if ((line[i] == '\\') && (line[i + 1] == '\\'))
			i++;
		str[j] = line[i];
		j++;
		i++;
	}
	while (len > j)
	{
		str[j] = line[i];
		j++;
		i++;
	}
	return (str);
}
