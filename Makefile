# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: enikel <enikel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/17 11:24:40 by enikel            #+#    #+#              #
#    Updated: 2018/08/28 09:37:08 by enikel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libftprintf.a

INC_DIR := inc

SRC_DIR := src

OBJ_DIR := obj

LIB_DIR := lib

SRC := ft_printf.c ft_arginit.c ft_arghandle.c ft_hspec.c ft_print_s.c 		\
ft_print_p.c ft_print_d.c ft_print_x.c ft_print_x_upper.c ft_print_u.c 		\
ft_print_lu.c ft_print_c.c ft_print_o.c ft_print_lo.c ft_print_ld.c    		\
ft_print_wchar.c ft_print_wstr.c ft_handle_h.c ft_handle_hh.c ft_handle_l.c	\
ft_handle_ll.c ft_handle_z.c ft_handle_j.c ft_arg_reset_mod.c

OBJ := $(addprefix $(OBJ_DIR)/, $(SRC:%.c=%.o))

LIBFT_DIR := $(LIB_DIR)/libft

LIB_FLAG := -lft

CFLAGS := -Wall -Werror -Wextra

CC := @gcc $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJ)
	@make all -C $(LIBFT_DIR)/
	@ar rcs $(NAME) $(OBJ) $(LIBFT_DIR)/*.o

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) -I $(INC_DIR) -o $@ -c $<

clean: cleanlib
	@rm -rf $(OBJ_DIR)

cleanlib:
	@make clean -C $(LIBFT_DIR)/

fclean: clean fcleanlib
	@rm -f $(NAME)

fcleanlib:
	@make fclean -C $(LIBFT_DIR)/

re: fclean all

.PHONEY := all clean fclean re

.PRECIOUS := author
