/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beakduma@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:43:24 by beakduma          #+#    #+#             */
/*   Updated: 2026/09/02 22:31:24 by beakduma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char *s, char c)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			l++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (l);
}

static char	**fill_word(char *s, char c, char **array)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			array[j] = ft_substr(s, start, i - start);
			if (!array[j])
				return (NULL);
			j++;
		}
	}
	array[j] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = malloc(sizeof(char *) * (word_count((char *)s, c) + 1));
	if (!array)
		return (NULL);
	return (fill_word((char *)s, c, array));
}
