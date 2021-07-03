/*
* Created: 2021/02/01
*/

#include "../../header/minishell.h"

void	print_env(char **env)
{
	int		i;
	int		size;
	char	*cur_str;

	i = 0;
	g_env = get_envs(env, 0, 0);
	size = 0;
	while (g_env[size])
		size++;
	insertion_sort(size);
	while (i < size)
	{
		ft_putstr("declare -x ");
		cur_str = g_env[i++];
		while (*cur_str)
		{
			ft_putchar(*cur_str);
			if (*cur_str == '=')
				write(1, "\"", 1);
			cur_str++;
		}
		ft_putstr("\"\n");
	}
	free_g_env();
}
