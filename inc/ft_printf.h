/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikel <enikel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 10:34:54 by enikel            #+#    #+#             */
/*   Updated: 2018/08/28 09:50:24 by enikel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define PRINT_SPEC "sSpdDioOuUxXcC\%\0"
# define VALID_MOD_SPEC "scdDioOuUxX"
# define PRINT_LMODS "lhjz"
# define PRINT_FLAGS "-+#0 "
# define ULONG_MAX	4294967296

# include "../lib/libft/libft.h"
# include <stdarg.h>
# include <wchar.h>
# include <inttypes.h>

typedef struct	s_arg
{
	int		width;
	int		justify;
	int		z_fill;
	int		precision;
	int		hash;
	int		h;
	int		j;
	int		l;
	int		z;
	int		sign;
	int		spec;
	int		ret;
	int		index;
	int		search;
}				t_arg;

void			ft_arginit(t_arg *arg);
void			ft_arg_reset_mod(t_arg *arg);
int				ft_arghandle(const char *format, va_list valist);
t_arg			*ft_handle_h(t_arg *arg, va_list valist);
t_arg			*ft_handle_hh(t_arg *arg, va_list valist);
t_arg			*ft_handle_l(t_arg *arg, va_list valist);
t_arg			*ft_handle_ll(t_arg *arg, va_list valist);
t_arg			*ft_handle_j(t_arg *arg, va_list valist);
t_arg			*ft_handle_z(t_arg *arg, va_list valist);
t_arg			*ft_hspec(const char *format, t_arg *arg, va_list valist);
int				ft_printf(const char *format, ...);
int				ft_print_c(unsigned char c);
int				ft_print_d(int num);
int				ft_print_ld(long int num);
int				ft_print_p(long p);
int				ft_print_s(char *str);
int				ft_print_o(unsigned int o);
int				ft_print_lo(unsigned long o);
int				ft_print_u(unsigned int u);
int				ft_print_lu(unsigned long long u);
int				ft_print_wchar(wint_t c);
int				ft_print_wstr(wint_t *c);
int				ft_print_x(unsigned long long x);
int				ft_print_x_upper(unsigned long long x);

#endif
