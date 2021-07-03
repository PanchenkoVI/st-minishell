/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	**cd_realloc(char **arr, char *str)
{
	int		i;
	char	**ret;

	ret = NULL;
	i = 0;
	while (arr[i])
		i++;
	i = i + 2;
	if (!(ret = (char **)malloc(sizeof(char *) * i)))
		return (NULL);
	i = 0;
	while (arr[i] != NULL)
	{
		ret[i] = ft_strdup(arr[i]);
		i++;
	}
	ret[i] = ft_strdup(str);
	i++;
	ret[i] = NULL;
	ft_free(arr);
	return (ret);
}
