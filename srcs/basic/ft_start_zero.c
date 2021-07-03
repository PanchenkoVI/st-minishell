/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	ft_start_zero(t_info *inf)
{
	g_cdd = 0;
	g_cd = "";
	g_env_s = 0;
	g_ch = 0;
	g_xp = 0;
	g_for_er = 0;
	g_echo_home = "";
	g_flag_n = 0;
	g_n = 0;
	g_src = 0;
	g_qm = 0;
	g_flag = 0;
	g_point = 0;
	g_key = 0;
	g_print_err = "0";
	g_for_sig = NULL;
	inf->sign = NULL;
	inf->instrct = NULL;
	if (!(inf->cmd_export = (char **)malloc(sizeof(char *) + 1)))
		ft_error("Problem in Malloc", inf);
	inf->cmd_export[0] = NULL;
}
