/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_str_slash(char *line, int c)
{
	char	*str;
	int		len;
	int		i;

	i = c;
	len = 0;
	while (line[c] != '\"' && line[c] != '\0')
	{
		if (line[c] == '\\' && line[c + 1] == '\\')
		{
			c++;
			len++;
		}
		c++;
	}
	len = ft_strlen(line) + 1;
	if (!(str = (char *)malloc(sizeof(char) * len)))
	{
		ft_putstr_fd("Problem in *str (Malloc).\n", 0);
		exit(12);
	}
	str[len] = '\0';
	str = ft_str_slash2(str, line, i, c);
	free(line);
	return (str);
}
