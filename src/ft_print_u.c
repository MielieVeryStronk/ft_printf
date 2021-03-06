/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikel <enikel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 14:24:42 by enikel            #+#    #+#             */
/*   Updated: 2018/08/27 15:15:03 by enikel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int		ft_print_u(unsigned int u)
{
	ft_putstr(ft_itoa_base(u, 10));
	return (ft_strlen(ft_itoa_base(u, 10)));
}
