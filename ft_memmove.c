/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feli-bar <feli-bar@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:51:03 by feli-bar          #+#    #+#             */
/*   Updated: 2022/09/08 13:36:32 by feli-bar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*d;
	const char	*s;

	d = (char *) dst;
	s = (const char *) src;
	if (d > s)
	{
		while (len > 0)
		{
			len--;
			d[len] = s[len];
		}
	}	
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
