/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_o.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikel <enikel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 15:15:58 by enikel            #+#    #+#             */
/*   Updated: 2018/08/28 09:43:01 by enikel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int		ft_print_o(unsigned int o)
{
	ft_putstr(ft_itoa_base(o, 8));
	return (ft_strlen(ft_itoa_base(o, 8)));
}
