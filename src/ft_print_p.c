/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikel <enikel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:48:17 by enikel            #+#    #+#             */
/*   Updated: 2018/08/27 15:21:36 by enikel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int		ft_print_p(long p)
{
	ft_putstr("0x");
	ft_putstr(ft_itoa_base(p, 16));
	return (ft_strlen(ft_itoa_base(p, 16)) + 2);
}