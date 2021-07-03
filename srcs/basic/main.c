/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

int		main(int argc, char **argv, char **env)
{
	t_info	inf;
	int		i;
	char	s;

	s = 's';
	i = 0;
	if (argc != 1 || argv[1])
	{
		ft_putstr_fd("You cannot use arguments\n", 0);
		exit(1);
	}
	while (env[i])
		i++;
	if (i < 25)
		g_sign = 0;
	else
		g_sign = 2;
	ft_start_zero(&inf);
	ft_env(&inf, env, 0);
	ft_start_window(&inf, 0, s);
	return (0);
}
