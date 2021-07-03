/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_correct_str(char *str, int n)
{
	char	*tmp;

	tmp = NULL;
	if (n == 1)
		tmp = ft_strdup(".");
	else if (n == 2)
		tmp = ft_strdup("/");
	else if (n == 3)
		tmp = ft_strdup("..");
	free(str);
	return (tmp);
}
