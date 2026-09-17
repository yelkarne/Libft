/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beakduma@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 19:06:48 by beakduma          #+#    #+#             */
/*   Updated: 2026/09/07 19:06:30 by beakduma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;

	if (!dst || !src)
		return (0);
	d = 0;
	while (d < size && dst[d] != '\0')
		d++;
	s = ft_strlen(src);
	if (d == size)
		return (size + s);
	i = 0;
	while (src[i] != '\0' && i < size - d - 1)
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[d + i] = '\0';
	return (d + s);
}
