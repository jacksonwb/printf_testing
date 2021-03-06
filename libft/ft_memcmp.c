/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbeall <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 16:24:01 by jbeall            #+#    #+#             */
/*   Updated: 2018/10/30 10:38:10 by jbeall           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *sc1;
	unsigned char *sc2;

	sc1 = (unsigned char *)s1;
	sc2 = (unsigned char *)s2;
	while (n)
	{
		if (*sc1 != *sc2)
			return ((int)(*sc1 - *sc2));
		--n;
		sc1++;
		sc2++;
	}
	return (0);
}
