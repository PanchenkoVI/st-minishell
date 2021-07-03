/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_echo_space2(char *line)
{
	char	*tmp;

	tmp = ft_strdup("");
	if (line[0] == '0' && line[1] != ' ')
	{
		tmp = ft_substr(line, 1, ft_strlen(line));
		if (g_line_pipe[0] != '1')
			tmp = ft_union_str(" ", tmp);
	}
	else if (line[0] == '0')
		tmp = ft_substr(line, 1, ft_strlen(line));
	else if (line[0] == '1' && line[1] == '2')
	{
		tmp = ft_substr(line, 3, ft_strlen(line));
		tmp = ft_union_str(" ", tmp);
	}
	free(line);
	line = ft_union_str(g_print_err, tmp);
	return (line);
}
