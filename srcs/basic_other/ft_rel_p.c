/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_rel_p(char *str, int j)
{
	char *spr;

	spr = NULL;
	while (str[j] != '\0' && (str[j] == '.' || str[j] == '/'))
	{
		if (str[j] == '.' && str[j + 1] == '\0')
		{
			g_flag = 1;
			g_print_err = "126";
			return (NULL);
		}
		else if (str[j] == '.' && str[j + 1] == '.' && str[j + 2] == '.')
			break ;
		j++;
	}
	spr = ft_add_line(str, spr);
	return (spr);
}
