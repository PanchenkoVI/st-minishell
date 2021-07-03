/*
* Created: 2021/02/01
*/

#include "../../../header/minishell.h"

char	*ft_echo_space(t_instruct *instrct, int i, int flag, int m)
{
	if (((m = ft_strcmp(instrct->spaces[i], " ")) == 0) &&\
		g_flag_n > 0 && flag == 1)
	{
		g_flag_n--;
		free(instrct->spaces[i]);
		instrct->spaces[i] = ft_strdup("");
	}
	else if (((m = ft_strcmp(instrct->spaces[i], "")) == 0) &&\
		g_flag_n < 0 && flag != 1)
	{
		free(instrct->spaces[i]);
		instrct->spaces[i] = ft_strdup(" ");
	}
	return (instrct->spaces[i]);
}
