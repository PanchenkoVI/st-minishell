/*
* Created: 2021/02/01
*/

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <unistd.h>
# include <errno.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <signal.h>
# include <sys/types.h>
# include <sys/stat.h>

typedef struct				s_variable
{
	char					**arvar;
	char					**fvar;
}							t_variable;

typedef struct				s_instruct
{
	char					sp;
	char					ps;
	char					sign;
	char					**arg;
	char					**name;
	char					**flag;
	char					*instrct;
	char					**spaces;
	struct s_instruct		*next;
}							t_instruct;

typedef struct				s_info
{
	int						*dt_i;
	int						*dtr;
	int						*rdr_date;
	char					***date;
	char					**cmd_env;
	char					**cmd_export;
	t_variable				*sign;
	t_instruct				*instrct;
	t_instruct				**cm_date;
}							t_info;

int							g_cdd;
int							g_xp;
int							g_for_er;
int							g_n;
int							g_qm;
int							g_src;
int							g_flag;
int							g_sign;
int							g_point;
int							g_flag_n;
int							g_key;
char						g_ch;
char						g_env_s;
char						*g_cd;
char						*g_var;
char						*g_line;
char						**g_env;
char						*g_line_pipe;
char						*g_print_err;
char						*g_for_sig;
char						*g_echo_home;

int							ft_strlen(char *str);
char						**cd_realloc(char **arr, char *str);
void						cd_if_relocate(int *i, t_info *inf, char **pwd);
void						cd_wdir_change(char **curr_wdir, \
								t_info *inf, char **pwd);
int							cd_err(errno_t error_num, char **curr_wdir, \
								char **path);
void						cd_path_set(t_instruct *instrct, \
								char ***path, int *len);
void						cd_arr_cmp2(t_info *inf, char **path, \
								char **curr_wdir);
int							cd_arr_cmp(t_instruct *instrct, t_info *inf, \
							char **path, char **curr_wdir);
void						cd_set_all0(int *i, char **path, char **curr_wdir);
int							ft_cd(t_info *inf, t_instruct *instrct, int i);
char						**ft_unset_str_crc(char **spr, char **new, int *l);
char						**ft_unset_str(t_info *inf, char **new, \
								int *l, int n);
int							ft_uns_int(t_info *inf, t_instruct *instrct, \
								int i, int j);
void						ft_error_unset(char *str, int i);
void						ft_unset(t_info *inf, t_instruct *instrct, \
								int i, int j);
void						redirection_command2(pid_t	p, int *dect1, \
								int *dect2);
void						ft_red(t_instruct *instrct);
void						ft_pwd(t_instruct *instrct);
char						*ft_new_adress_path(char *str, char *tmp, \
								int i, int m);
char						*ft_add_line(char *str, char *spr);
char						*ft_rel_p(char *str, int j);
int							ft_other_error(char *str, int n);
void						ft_open_file2(int name_flag, char *name);
int							ft_open_file3(int i, struct stat var);
void						ft_dont_open_file(int *i);
char						*ft_new_tmp_stat(char *tmp, char *str, int len);
void						ft_new_stat(char *str, int l, int j, int len);
int							ft_open_file(t_instruct *instrct, int l, \
								char *adress, int i);
void						ft_relation_f3(int flag, t_instruct *instrct);
void						ft_relation_f2(int flag, t_instruct *instrct);
void						ft_run_f(pid_t p, char **date, char **env, \
								t_instruct *instrct);
void						ft_print_forks_err(void);
void						ft_relation_f(t_instruct *instrct, int flag, \
								char **date, char **env);
void						ft_size_zero(int *dect, char **date, int i, \
								char **tmp);
void						ft_else_size(int *dect, int i, pid_t cpid, \
								char **tmp);
char						**ft_char_tmp(char **tmp, char **date, int i);
void						ft_choose_side(pid_t p, int *dect, \
								char **date, int fd);
int							ft_rf(int file, char *tmp, int n, \
								char *line);
void						ft_red_fk(char **date, char *tmp, \
								char *line, int file);
int							ft_path_i(char *env, int i, int n);
int							ft_leaks_path(char ***tmp, int j, char *env, int i);
char						**ft_path_tmp(char **tmp, char *env, int i, int l);
char						*ft_path_line2(char **tmp, char *adress, int j);
char						*ft_path_line(char **env, char *adress, int j);
char						*ft_run_p(char *adress, char **env, int i);
void						ft_mb_dir2(char *str);
void						ft_mb_dir1(char *str, int k, int i);
void						ft_mb_dir(char *str, int k, int i);
int							ft_kk2(char *str, int l);
int							ft_kk(char *str);
void						ft_other2(int *i, char **date, \
								t_instruct *it, int m);
char						*ft_new_date(char *date);
char						**ft_str_date(t_instruct *instrct, \
								char **date, int i);
int							ft_ex_err(char **date, char **env, int n);
void						ft_other(t_instruct *instrct, int j, \
								char **env, int i);
void						ft_bzero(void *str, size_t len);
void						*ft_memset(void *dest, int c, size_t len);
void						*ft_calloc(size_t str, size_t size);
int							ft_putchar(int c);
int							free_g_env(void);
void						insertion_sort(int size);
char						**get_envs(char **env, int i, int j);
void						print_env(char **env);
void						ft_export(t_info *inf, int i, \
								t_instruct *instrct, int size);
int							ft_time_sign_ex(char *str, int j, int n);
char						*ft_export_str(char *str, char *tmp, int j, int n);
void						ft_exp_save_char2(char *tmp, char **str1, \
								char **str2, int j);
void						ft_ex_env(t_info *inf, int *l, int i);
void						ft_ex_cont(t_info *inf, char *tmp, char *name);
void						ft_exp_save_char(t_info *inf, t_instruct *instrct, \
								int i, int j);
int							ft_atoi(const char *str);
int							ft_analiz_arg_exit(char *str, int i, int flag);
int							ft_exit2(t_instruct *instrct);
void						ft_exit3(t_instruct *instrct, int *flag);
void						ft_exit(t_info *inf, t_instruct *instrct, int flag);
char						*ft_env_c2(char *line, char **env, \
								char *tmp, int i);
void						ft_env_err(char *tmp, t_instruct *instrct, \
								int n, int j);
void						ft_env_echo(t_instruct *instrct, int i);
void						ft_cdenv2(char *tmp, char **env, \
								t_instruct *instrct, int j);
void						ft_cdenv(t_instruct *instrct, int j, char **env);
void						ft_echo_i3(int *i);
int							ft_echo_i2(int i);
int							ft_echo_i(int i);
char						*ft_k(char *str, int n);
char						*ft_echo_space(t_instruct *instrct, \
								int i, int flag, int m);
char						*ft_echo_space2(char *line);
int							ft_flag_spacess(t_instruct *t, int i);
char						*ft_while_echo(t_instruct *t, char *line, \
								char **env, int i);
int							ft_circl_n_echo(int i, int *n);
void						ft_echo(t_instruct *t, char **env, int i);
char						**ft_env2(t_info *inf, char **env, int i, \
								char *tmp);
void						ft_env(t_info *inf, char **env, int i);
char						*ft_ssstr(char *str, char *line, int j);
void						ft_dqdq(char *str, int l, int m);
char						*ft_change_sign2(char *str, int *l, char qt);
char						*ft_change_sign(char **env, char *line, \
								int *i, char ch);
int							ft_slash(char *line);
char						*ft_test(char *str);
void						ft_crct(char *str, int i);
char						*ft_change_str2(char *str, int i, char **env);
char						*ft_change_str(char *str, char **lll, char **env);
int							ft_number_of_spaces(char *line, int l, char ***w);
int							ft_delate_line2(char *line, int **i);
int							ft_delate_line(char *line, int *i);
int							ft_about_i(char *line, int i, int j);
int							ft_cout_j(char *line, int i, int *l);
int							ft_special_char(char *line, int i, int j);
char						**ft_del_line(char *line, int len, \
								int *l, char **spr);
char						**ft_word_count(char *str, int i, \
								char ***w, int len);
int							ft_one_or_two_err2(char *str, int i);
int							ft_one_or_two_err1(char *str, int i);
int							ft_one_or_two_err0(char *str, int i, int *n);
int							ft_one_or_two_err(char *str, int i, int n);
void						ft_l_s_p3(char **date, t_info *inf, \
								t_instruct	*new, int j);
void						line_structure_parse2(char **date, char **spaces, \
								t_info *inf, int i);
void						line_structure_parse(char **date, char **spaces, \
								t_info *inf, int j);
int							ft_quantity_echo(char *line);
int							ft_check_echo(char *line);
char						*ft_strecho(char *line);
char						*ft_newtmp(char *str);
char						*ft_strecho2(char *str);
void						ft_code_var(char *str);
void						ft_start_echo(char *str);
char						**ft_reduction_arr2(char **str, int n, \
								int m, int len);
int							ft_strlen_arr(char **spr);
int							ft_what_is_it(char *str);
char						*ft_correct_str(char *str, int n);
char						**ft_for_cd_point(char **spr, int i);
char						**ft_for_cd_point2(char **spr, char *tmp, \
								int *i, int *m);
char						**ft_for_cd_slash2(char **spr, int *l, int *m);
char						**ft_for_cd_slash(char **spr, int i);
int							ft_only_slash(char *str);
int							ft_one_or_zero(char *str);
int							ft_only_point(char *str);
char						**ft_for_cd2(char **spr, int i);
char						**ft_for_cd(char **spr);
char						*ft_reduction_arr1(char *str, int n, \
								int m, int len);
int							ft_space_m(int m);
char						*ft_space(char *str, int i, int n, int m);
int							ft_str2(char *str, int i, int k);
int							ft_str(char *str);
int							ft_str222s0(char *str, int *j, int i, int *k);
int							ft_str222s(char *str, int j);
char						*ft_quotation_mark(char *str, int i, int len);
char						*ft_reduction_arr31(char *spr, char *str, \
								int n, int l);
char						*ft_reduction_arr3(char *str, int m, int n);
void						ft_qmark20(char *str, int *l, int *n, int *m);
char						*ft_qmark2(char *str, int i, int len);
int							ft_qmark222(char *str, int *l);
void						ft_qmark220(char *str, int *l, int *n, int *m);
char						*ft_qmark22(char *str, int i, int len);
char						*ft_replacement2(char *str, int i);
char						*ft_replacement1(char *str, int i);
char						*ft_replacement(char *str, int i);
char						*ft_echo_tld2(char *str, int i);
char						*ft_echo_tld(char *str, int i, int j);
char						*ft_cd_tld2(char *str, int i);
char						*ft_cd_tld(char *str, int i, int j);
char						*ft_cd_minus2(char *str, int i);
char						*ft_cd_minus(char *str, int i, int j);
int							ft_tdl_test1(char *str, char ch, int i);
int							ft_tdl_test2(char *str, char ch, int i, char n);
int							ft_tld_echo(char *str);
int							ft_tld_cd(char *str, char m);
void						ft_pars_cont(char *line, t_info *inf, char **s);
int							ft_quantity_pwd(char *line);
int							ft_srl_pwd2(char *str);
int							ft_srl_pwd(char *str);
char						*ft_for_pwd21(char *str, int j, int i, int *m);
char						*ft_for_pwd(char *str, int j, int i, int m);
int							ft_dollar(char *str, int i, int *j);
char						*ft_with_spacess_line(char *tmp, char *str, \
								int *k, int j);
int							ft_sps_dlr(char *str);
char						*ft_str_with_env(t_info *inf, char *str, \
								int j, int i);
void						ft_parss(char *line, t_info *inf, int k, int j);
void						ft_g_red_errr(int z, t_info *inf);
void						ft_greater_red_err(char **line, t_info *inf, int i);
void						ft_less_red_err(char **line, t_info *inf, int i);
void						ft_equality_plus_minus(char **line, int i, \
								t_info *inf, char ch);
void						ft_mb_err(char **line, int i, t_info *inf);
void						ft_red_err2(char **line, int i, t_info *inf);
void						ft_red_err(char **line, int i, t_info *inf);
int							ft_semicolon_and_vert(char *line, \
								t_instruct *fresh);
int							ft_red_in_line(t_info *inf, char **line, \
								t_instruct *fresh, int *l);
void						ft_scape_str(char **line, t_instruct *fresh, \
								int i, char **s);
int							ft_new_all(char **s, t_instruct *fresh, \
								t_info *inf, char **str);
char						*ft_multiline_str(char *str, int i);
char						*ft_str_slash2(char *str, char *line, int i, int c);
char						*ft_str_slash(char *line, int c);
int							ft_sign_n(char n, char *line, int j);
int							ft_quantity(char n, char *line, int i);
char						*ft_newline2(char *line, int k);
char						*ft_newline(char *line);
char						*ft_echo_n1(char *str, int i, int *j);
char						*ft_echo_n(char *str, int i, int j);
int							ft_uuu(char *str);
char						*ft_space_n(char *str, int i, int j);
int							ft_double_n2(char *str, int i, int **m);
int							ft_double_n1(char *str, int i, int *m);
char						*ft_double_n(char *str, int i, int j, int m);
int							ft_nnn(char *str, int i);
char						*ft_qm_for_n2(char *str, int m, int j);
char						*ft_qm_for_n(char *str, int i, int j, int m);
char						*ft_anlz_and_add(char *line);
void						ft_view_new_str(char *tmp, char **line, \
								int i, int j);
void						ft_crct_str(char **line, int *fd);
void						ft_chk_str(char **str, int i, int j);
int							ft_circle_i_env(char **env, char *tmp, \
								int i, int n);
char						*ft_new_env(char *str, int j, char *tmp);
char						*ft_new_v(char *str, int *l, char **env, int n);
char						*ft_var_replacement(char *str, int n, \
								char **env, int *j);
void						ft_sign_clmll(int i, t_variable *tmp1, \
								t_instruct *tmp2, int n);
void						ft_error(char *line, t_info *inf);
void						ft_all_cl(t_info *inf, int i);
int							ft_mb2(char *str, int i, int k);
void						ft_micro_mb(errno_t **error_num);
void						ft_mb(char *str, int i, int k, errno_t *error_num);
int							ft_error_zero(char *str, int i);
void						ft_printf_err(char *com_name, errno_t error_num);
t_instruct					*ft_memory_lt(t_instruct *new, int i);
void						ft_spec_cmd2(char *str, int **j);
void						ft_spec_cmd(char *str, int *j);
void						ft_info_in_arr2(t_info *inf, int *l, \
								char *s, int n);
int							ft_rel_path(t_info *inf, int i, int n);
t_instruct					*ft_info_in_arr(t_info *inf, int i, char s);
void						ft_info_in_a(t_info *inf, int j, int i);
void						ft_vertical_line2(t_info *inf, int j, int i);
void						ft_vertical_line(int j, int i, t_info *ins);
void						ft_com3(t_info *ins, char *str);
void						ft_com2(t_info *ins, char *str);
void						ft_com(t_info *ins, char *str);
void						ft_pid(pid_t p, int n, int *dect, int file);
void						ft_work_cmd_pipe2(char *str, t_info *inf, int i);
void						ft_work_cmd_pipe(t_info *inf, int i, char **date);
void						ft_red_pipe(int file, char **date, \
								t_info *inf, int i);
void						ft_pipe_key_err(int i, int *pp);
void						ft_pipe3(t_info *inf, char *str, int i);
void						ft_pipe2(t_info *inf, char *str, int i);
void						ft_cont_pipe(int *pp, int n, int *fd, pid_t *pid);
void						ft_cont_pipe2(int *fd1, t_info *inf, int i);
void						ft_pipe(t_info *inf, int i, int count, int w);
int							ft_dect(t_instruct *instrct, int *dect, \
								int flag, int i);
void						ft_dect2(t_instruct *instrct, char *line);
int							ft_save_info2(t_instruct *instrct, int **d, \
								int i, char *line);
int							ft_save_info0(t_instruct *instrct, char *line, \
								int i, int *dect);
void						ft_save_info1(t_instruct *instrct, char **line, \
								int i, int dect);
void						ft_save_info(t_instruct *instrct, int dect, \
								char *line);
int							ft_file_descriptor(t_instruct *instrct);
char						*ft_reduction_arr(char *str, int n, int m);
void						ft_free(char **str);
int							ft_isalnum(int n);
int							ft_isalpha(int n);
int							ft_isdigit(int n);
t_instruct					*ft_lstlast(t_instruct *lst);
void						ft_lstadd_back(t_instruct **lst, t_instruct *new);
int							ft_sign(char n, char *line);
int							ft_sign_in_arr(char **date, char *sign);
void						ft_putstr_fd(char *str, int fd);
void						ft_putstr(char *s);
char						**ft_arr2_sub_str(char **arr, char *str, int n);
int							ft_strcmp(char *str1, char *str2);
char						*ft_strdup(const char *s1);
size_t						ft_strlcpy(char *dest, char *src, size_t size);
char						*ft_substr(char *s, int start, int len);
char						*ft_strjoin_free2(char *spr, char *s1, \
								char *s2, int n);
char						*ft_union_str(char *s1, char *s2);
char						*ft_strjoin_free(char *s1, char *s2);
void						ft_read_exit(void);
char						*ft_line_for_read(char *str, char *tmp, \
								int *l, int i);
int							ft_read_str(char **str, int *i);
char						*ft_next_str(char *str, int j);
char						*ft_strline(char *str, int j, char **line);
int							ft_analysis_line(int i, char **line, int j);
void						ft_start_line2(char **env, int i);
void						ft_start_line(char **env, int i);
void						ft_start_window(t_info *inf, int k, char s);
void						ft_sig2(int i);
void						ft_sig(int i);
void						ft_start_zero(t_info *inf);
int							main(int argc, char **argv, char **env);

#endif
