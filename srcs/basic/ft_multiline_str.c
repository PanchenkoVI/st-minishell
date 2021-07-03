/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_multiline_str(char *str, int i)
{
	char *line;
	char *new;

	while (str[i])
	{
		if (str[i] == '\\' && !(str[i + 1]))
		{
			signal(SIGINT, exit);
			signal(SIGQUIT, exit);
			ft_putstr("> ");
			ft_analysis_line(1, &line, 0);
			new = ft_strdup(str);
			free(str);
			str = ft_union_str(new, line);
			free(line);
			free(new);
		}
		else if (str[i] == '\\' && (str[i + 1] == '\\'))
			i++;
		i++;
	}
	return (str);
}
