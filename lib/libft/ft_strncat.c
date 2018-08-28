/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enikel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:28:06 by enikel            #+#    #+#             */
/*   Updated: 2018/05/30 12:57:11 by enikel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	int		i;
	int		a;

	a = 0;
	i = 0;
	while (dst[i] != '\0')
		i++;
	while (n > 0 && src[a] != '\0')
	{
		dst[i] = src[a];
		i++;
		a++;
		n--;
	}
	dst[i] = '\0';
	return (dst);
}