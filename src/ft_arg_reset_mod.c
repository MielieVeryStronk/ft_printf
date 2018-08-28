/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_reset_mod.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikel <enikel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 09:35:59 by enikel            #+#    #+#             */
/*   Updated: 2018/08/28 10:37:59 by enikel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	ft_arg_reset_mod(t_arg *arg)
{
	arg->h = 0;
	arg->l = 0;
	arg->z = 0;
	arg->j = 0;
}
