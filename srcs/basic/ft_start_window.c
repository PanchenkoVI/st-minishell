/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_start_window(t_info *inf, int k, char s)
{
	char	*str;
	char	*line;

	line = NULL;
	while (s)
	{
		signal(SIGINT, ft_sig);
		signal(SIGQUIT, ft_sig);
		g_key = 0;
		ft_start_line(inf->cmd_env, 0);
		ft_analysis_line(1, &str, 0);
		k = ft_str(str);
		ft_parss(str, inf, k, -1);
		if (g_key != 13)
			ft_com(inf, line);
		ft_all_cl(inf, 0);
		g_point = 0;
		g_flag_n = 0;
		g_line = "";
		g_sign = 1;
		g_for_er = 0;
		g_xp = 0;
		g_cd = "";
		g_cdd = 0;
	}
}
