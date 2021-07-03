/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_change_str(char *str, char **lll, char **env)
{
	char	*line;
	int		flag;

	flag = 0;
	line = ft_strdup(str);
	if ((line[0] == '.' && !line[1]) || (line[0] == '.' && \
		line[1] == '.' && !line[2]))
		flag = 4;
	line = ft_test(line);
	ft_crct(line, 0);
	if (flag != 4)
		line = ft_change_str2(line, 0, env);
	if (lll[0][0] == '\'' && lll[0][1] == '\'' && lll[0][2] == '\0')
		line = ft_strdup(" ");
	else if (lll[0][0] == '\"' && lll[0][1] == '\"' && lll[0][2] == '\0')
		line = ft_strdup(" ");
	else if (!(ft_slash(line)))
		line = ft_union_str(line, " ");
	return (line);
}
