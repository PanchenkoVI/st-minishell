/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

void	ft_crct(char *str, int i)
{
	while (str[i])
	{
		if (str[i] == 'e' && str[i + 1] == 'x' && str[i + 2] == 'p' &&\
			str[i + 3] == 'o' && str[i + 4] == 'r' && str[i + 5] == 't')
		{
			g_xp = 1;
			break ;
		}
		else if (str[i] == 'u' && str[i + 1] == 'n' && str[i + 2] == 's' &&\
			str[i + 3] == 'e' && str[i + 4] == 't')
		{
			g_xp = 1;
			break ;
		}
		i++;
	}
}
