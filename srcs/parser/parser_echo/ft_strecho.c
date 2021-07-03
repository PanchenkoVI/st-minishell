/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_strecho(char *line)
{
	int		i;
	char	*str;

	str = ft_strdup("");
	i = 0;
	while (line[i] != '\0')
	{
		if (line[i] == ';')
			str = ft_strjoin_free(str, "1");
		else if (line[i] == '|')
			str = ft_strjoin_free(str, "2");
		else if (line[i] == '$' && line[i + 1] == '?')
		{
			str = ft_strjoin_free(str, "7");
			i++;
		}
		else if (line[i] == 'e' && line[i + 1] == 'c' && \
			line[i + 2] == 'h' && line[i + 3] == 'o')
		{
			str = ft_strjoin_free(str, "6");
			i += 3;
		}
		i++;
	}
	return (str);
}
