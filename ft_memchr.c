/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beakduma@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 17:59:38 by beakduma          #+#    #+#             */
/*   Updated: 2026/09/07 19:08:38 by beakduma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	if (n == 0 || !s)
		return (NULL);
	while (n--)
	{
		if (*ptr == (char)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
