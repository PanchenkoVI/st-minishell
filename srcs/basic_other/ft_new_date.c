/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

char	*ft_new_date(char *date)
{
	free(date);
	date = ft_strdup("\n");
	g_qm = 0;
	return (date);
}
