/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_path_line2(char **tmp, char *adress, int j)
{
	while (tmp[j])
	{
		tmp[j] = ft_strjoin_free(tmp[j], "/");
		tmp[j] = ft_strjoin_free(tmp[j], adress);
		if (open(tmp[j], O_RDONLY) != -1)
		{
			free(adress);
			adress = ft_strdup(tmp[j]);
			break ;
		}
		j++;
	}
	ft_free(tmp);
	return (adress);
}
