/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_pwd(t_instruct *instrct)
{
	char	*spr;
	char	*line;

	if (!(spr = getcwd(NULL, 10)))
	{
		g_print_err = "0";
		ft_printf_err(instrct->instrct, errno);
		free(spr);
		line = ft_strdup("");
		ft_save_info(instrct, 0, line);
	}
	else
	{
		g_print_err = "0";
		line = ft_strdup(spr);
		line = ft_strjoin_free(line, "\n");
		free(spr);
		ft_save_info(instrct, 0, line);
	}
}
