/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: beakduma@student.42istanbul.com.tr         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/20 17:45:31 by beakduma          #+#    #+#             */
/*   Updated: 2026/09/07 18:59:28 by beakduma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0 && (len++, 1))
		n /= 10;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = ft_intlen(n);
	if (n == 0)
		return (ft_strdup((char *){"0"}));
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	str[len] = '\0';
	while (nb != 0 && len > 0)
	{
		str[--len] = (nb % 10) + 48;
		nb /= 10;
	}
	return (str);
}
