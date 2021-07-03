/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_new_tmp_stat(char *tmp, char *str, int len)
{
	if (str[1] != '\0')
		tmp = ft_strdup(str + len + 1);
	else
		tmp = ft_strdup(str);
	return (tmp);
}
