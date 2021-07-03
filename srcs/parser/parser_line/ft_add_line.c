/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_add_line(char *str, char *spr)
{
	char *tmp;
	char *line;

	if (!(spr = getcwd(NULL, 10)))
		return (NULL);
	tmp = ft_strdup(spr);
	free(spr);
	if (str[0] == '.' && str[1] == '/')
		line = ft_new_adress_path(str, tmp, 1, 0);
	else
		line = ft_new_adress_path(str, tmp, 2, 0);
	free(tmp);
	free(str);
	return (line);
}
