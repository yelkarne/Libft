/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beakduma@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/07 19:00:30 by beakduma          #+#    #+#             */
/*   Updated: 2026/09/14 00:43:07 by beakduma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (dest <= src)
		dest = ft_memcpy(dest, src, n);
	else
	{
		while (n--)
			*((char *)dest + n) = *((char *)src + n);
	}
	return (dest);
}
