/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beakduma@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/10 20:50:05 by beakduma          #+#    #+#             */
/*   Updated: 2026/09/07 18:58:34 by beakduma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*s;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	s = malloc(nmemb * size);
	if (!s)
		return (NULL);
	ft_memset(s, 0, nmemb * size);
	return (s);
}
