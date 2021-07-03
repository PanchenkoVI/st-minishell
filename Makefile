NAME = minishell

B1 = ./srcs/basic/
BO = ./srcs/basic_other/
SD = ./srcs/delimiter/
SE = ./srcs/error/
SF = ./srcs/function/
SO = ./srcs/other/
PPE = ./srcs/parser/parser_echo/
PPL = ./srcs/parser/parser_line/
PPO = ./srcs/parser/parser_other/
PPOA = ./srcs/parser/parser_other_ar/
PPOS = ./srcs/parser/parser_other_sw/
SU = ./srcs/utils/

CC = gcc -Wall -Werror -Wextra

SRCS = $(B1)cd_arr_cmp.c		$(B1)ft_sign_clmll.c		$(B1)cd_arr_cmp2.c \
	$(B1)ft_start_line.c		$(B1)ft_anlz_and_add.c		$(B1)ft_start_line2.c \
	$(B1)ft_multiline_str.c		$(B1)ft_start_window.c		$(B1)ft_open_file.c	\
	$(B1)ft_start_zero.c		$(B1)ft_open_file2.c 		$(B1)redirection_command2.c \
	$(B1)ft_open_file3.c		$(B1)ft_var_replacement.c	$(B1)ft_relation_f.c \
	$(B1)ft_vertical_line.c		$(B1)ft_relation_f2.c		$(B1)get_envs.c \
	$(B1)ft_relation_f3.c		$(B1)main.c					$(B1)ft_rf.c \
	$(B1)print_env.c			$(B1)ft_save_info0.c		$(BO)ft_while_echo.c \
	$(BO)cd_err.c				$(BO)ft_new_tmp_stat.c		$(BO)cd_set_all0.c \
	$(BO)ft_new_v.c				$(BO)cd_wdir_change.c		$(BO)ft_newline.c \
	$(BO)ft_all_cl.c			$(BO)ft_newline2.c			$(BO)ft_circle_i_env.c \
	$(BO)ft_newtmp.c			$(BO)ft_com.c				$(BO)ft_rel_p.c \
	$(BO)ft_com2.c				$(BO)ft_rel_path.c			$(BO)ft_com3.c \
	$(BO)ft_run_f.c				$(BO)ft_else_size.c			$(BO)ft_run_p.c \
	$(BO)ft_env2.c				$(BO)ft_save_info.c			$(BO)ft_env_c2.c \
	$(BO)ft_save_info1.c		$(BO)ft_env_echo.c			$(BO)ft_save_info2.c \
	$(BO)ft_env_err.c			$(BO)ft_scape_str.c			$(BO)ft_info_in_a.c \
	$(BO)ft_info_in_arr.c		$(BO)ft_sign_in_arr.c		$(BO)ft_semicolon_and_vert.c \
	$(BO)ft_info_in_arr2.c		$(BO)ft_size_zero.c			$(BO)ft_str_with_env.c \
	$(BO)ft_l_s_p3.c			$(BO)ft_leaks_path.c		$(BO)ft_uns_int.c \
	$(BO)ft_line_for_read.c		$(BO)ft_vertical_line2.c	$(BO)ft_view_new_str.c \
	$(BO)ft_new_all.c			$(BO)ft_new_date.c			$(SD)ft_word_count.c \
	$(SD)cd_if_relocate.c		$(SD)ft_pars_cont.c			$(SD)ft_reduction_arr.c \
	$(SD)cd_path_set.c			$(SD)cd_realloc.c			$(SD)ft_reduction_arr1.c \
	$(SD)ft_char_tmp.c			$(SD)ft_reduction_arr2.c	$(SD)ft_reduction_arr3.c \
	$(SD)ft_del_line.c			$(SD)ft_memory_lt.c			$(SD)ft_reduction_arr31.c \
	$(SD)ft_new_env.c			$(SD)ft_strline.c			$(SD)ft_unset_str.c \
	$(SD)ft_next_str.c			$(SD)ft_number_of_spaces.c	$(SF)ft_unset.c \
	$(SE)ft_dect2.c				$(SE)ft_g_red_errr.c		$(SE)ft_print_forks_err.c \
	$(SE)ft_error.c				$(SE)ft_error_unset.c		$(SE)ft_printf_err.c \
	$(SE)ft_error_zero.c		$(SE)line_structure_parse.c	$(SE)ft_ex_err.c \
	$(SF)ft_cd.c				$(SF)ft_exit2.c				$(SF)ft_pipe3.c \
	$(SF)ft_cd_minus.c			$(SF)ft_exit3.c				$(SF)ft_pwd.c \
	$(SF)ft_cd_tld.c			$(SF)ft_export.c			$(SF)ft_red.c \
	$(SF)ft_dect.c				$(SF)ft_other.c				$(SF)ft_sig.c \
	$(SF)ft_echo.c				$(SF)ft_other2.c			$(SF)ft_sig2.c \
	$(SF)ft_env.c				$(SF)ft_pipe.c				$(SO)ft_exp_save_char.c	\
	$(SF)ft_exit.c				$(SF)ft_pipe2.c 			$(SO)ft_analiz_arg_exit.c \
	$(SO)free_g_env.c			$(SO)ft_for_cd_point.c		$(SO)line_structure_parse2.c \
	$(SO)ft_for_cd_slash.c		$(SO)ft_analysis_line.c		$(SO)ft_other_error.c \
	$(SO)ft_arr2_sub_str.c		$(SO)ft_path_i.c			$(SO)ft_cdenv2.c \
	$(SO)ft_path_line.c			$(SO)ft_chk_str.c			$(SO)ft_path_line2.c \
	$(SO)ft_choose_side.c		$(SO)ft_path_tmp.c			$(SO)ft_circl_n_echo.c \
	$(SO)ft_pid.c				$(SO)ft_cont_pipe.c			$(SO)ft_read_exit.c \
	$(SO)ft_cont_pipe2.c		$(SO)ft_ssstr.c				$(SO)ft_crct_str.c \
	$(SO)ft_unset_str_crc.c		$(SO)ft_ex_cont.c			$(SO)ft_work_cmd_pipe.c \
	$(SO)ft_ex_env.c			$(SO)ft_work_cmd_pipe2.c	$(PPE)ft_cd_tld2.c \
	$(SO)insertion_sort.c		$(SO)ft_exp_save_char2.c	$(PPE)ft_strecho.c \
	$(SO)ft_file_descriptor.c	$(PPE)ft_about_i.c			$(PPE)ft_echo_tld.c \
	$(PPE)ft_cd_minus2.c		$(PPE)ft_echo_tld2.c		$(PPE)ft_check_echo.c \
	$(PPE)ft_nnn.c				$(PPE)ft_quantity_pwd.c		$(PPE)ft_echo_n1.c \
	$(PPE)ft_code_var.c			$(PPE)ft_qm_for_n.c			$(PPE)ft_dollar.c \
	$(PPE)ft_qm_for_n2.c		$(PPE)ft_double_n.c			$(PPE)ft_qmark2.c \
	$(PPE)ft_double_n1.c		$(PPE)ft_qmark20.c			$(PPE)ft_double_n2.c \
	$(PPE)ft_qmark22.c			$(PPE)ft_dqdq.c				$(PPE)ft_qmark220.c \
	$(PPE)ft_echo_i.c			$(PPE)ft_qmark222.c			$(PPE)ft_echo_i2.c \
	$(PPE)ft_quantity.c			$(PPE)ft_echo_i3.c			$(PPE)ft_quantity_echo.c \
	$(PPE)ft_echo_n.c			$(PPE)ft_quotation_mark.c	$(PPE)ft_echo_space.c \
	$(PPE)ft_echo_space2.c		$(PPE)ft_strecho2.c			$(PPL)ft_crct.c	\
	$(PPL)ft_add_line.c			$(PPL)ft_delate_line.c		$(PPL)ft_cdenv.c \
	$(PPL)ft_delate_line2.c 	$(PPL)ft_change_str.c		$(PPL)ft_mb_dir2.c \
	$(PPL)ft_change_sign.c		$(PPL)ft_mb_dir.c			$(PPL)ft_change_sign2.c	\
	$(PPL)ft_mb_dir1.c			$(PPL)ft_change_str2.c		$(PPL)ft_mb_err.c \
	$(PPO)ft_correct_str.c 		$(PPO)ft_mb2.c				$(PPO)ft_micro_mb.c \
	$(PPO)ft_dont_open_file.c	$(PPO)ft_export_str.c		$(PPO)ft_equality_plus_minus.c \
	$(PPO)ft_flag_spacess.c		$(PPO)ft_for_cd.c			$(PPO)ft_for_cd2.c \
	$(PPO)ft_for_cd_point2.c	$(PPO)ft_for_cd_slash2.c	$(PPO)ft_for_pwd.c \
	$(PPO)ft_for_pwd21.c		$(PPO)ft_k.c				$(PPO)ft_greater_red_err.c \
	$(PPO)ft_kk.c				$(PPO)ft_kk2.c				$(PPO)ft_less_red_err.c \
	$(PPO)ft_mb.c				$(PPO)ft_new_adress_path.c	$(PPO)ft_new_stat.c	\
	$(PPOA)ft_replacement2.c 	$(PPOA)ft_one_or_two_err.c	$(PPOA)ft_read_str.c \
	$(PPOA)ft_one_or_two_err0.c	$(PPOA)ft_pipe_key_err.c	$(PPOS)ft_sign.c \
	$(PPOA)ft_red_err.c			$(PPOA)ft_one_or_two_err1.c	$(PPOA)ft_red_err2.c \
	$(PPOA)ft_one_or_two_err2.c	$(PPOA)ft_red_fk.c			$(PPOA)ft_one_or_zero.c	\
	$(PPOA)ft_red_in_line.c		$(PPOA)ft_only_point.c		$(PPOA)ft_red_pipe.c \
	$(PPOA)ft_only_slash.c		$(PPOA)ft_replacement.c		$(PPOA)ft_parss.c \
	$(PPOA)ft_replacement1.c	$(PPOS)ft_str.c				$(PPOS)ft_with_spacess_line.c \
	$(PPOS)ft_str222s.c			$(PPOS)ft_sign_n.c			$(PPOS)ft_str222s0.c \
	$(PPOS)ft_slash.c			$(PPOS)ft_str_date.c		$(PPOS)ft_space.c \
	$(PPOS)ft_str_slash.c		$(PPOS)ft_space_m.c			$(PPOS)ft_str_slash2.c \
	$(PPOS)ft_space_n.c			$(PPOS)ft_tdl_test1.c		$(PPOS)ft_spec_cmd.c \
	$(PPOS)ft_tdl_test2.c		$(PPOS)ft_spec_cmd2.c		$(PPOS)ft_test.c \
	$(PPOS)ft_special_char.c	$(PPOS)ft_time_sign_ex.c	$(PPOS)ft_sps_dlr.c	\
	$(PPOS)ft_tld_cd.c			$(PPOS)ft_srl_pwd.c			$(PPOS)ft_tld_echo.c \
	$(PPOS)ft_srl_pwd2.c		$(PPOS)ft_uuu.c				$(PPOS)ft_start_echo.c \
	$(PPOS)ft_what_is_it.c		$(PPOS)ft_str2.c			$(SU)ft_atoi.c \
	$(SU)ft_putstr.c 			$(SU)ft_bzero.c				$(SU)ft_putstr_fd.c	\
	$(SU)ft_calloc.c 			$(SU)ft_strcmp.c			$(SU)ft_cout_j.c \
	$(SU)ft_strdup.c 			$(SU)ft_free.c				$(SU)ft_strjoin_free.c \
	$(SU)ft_isalnum.c 			$(SU)ft_strjoin_free2.c		$(SU)ft_isalpha.c \
	$(SU)ft_strlcpy.c 			$(SU)ft_isdigit.c			$(SU)ft_strlen.c \
	$(SU)ft_lstadd_back.c 		$(SU)ft_union_str.c			$(SU)ft_putchar.c \
	$(SU)ft_strlen_arr.c		$(SU)ft_lstlast.c			$(SU)ft_substr.c \
	$(SU)ft_memset.c
		
OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(SRCS) -o $(NAME)
	@echo "\033[32mCompilation minishell: OK\033[0m"

clean:
	@rm -f $(OBJS)
	@echo "\033[32mDeletion: OK\033[0m" 

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re