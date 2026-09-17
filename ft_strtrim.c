/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beakduma@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/16 16:26:45 by beakduma          #+#    #+#             */
/*   Updated: 2026/09/14 00:56:11 by beakduma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s;
	size_t	e;
	size_t	i;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	s = 0;
	e = (int)ft_strlen(s1) - 1;
	while (s1[s] && check(s1[s], set))
		s++;
	if (!s1[s])
		return (ft_strdup(""));
	while (e >= s && check(s1[e], set))
		e--;
	str = malloc(sizeof(char) * (e - s + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (s <= e)
		str[i++] = s1[s++];
	str[i] = '\0';
	return (str);
}
