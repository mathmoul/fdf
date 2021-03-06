/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/21 17:23:41 by mmoullec          #+#    #+#             */
/*   Updated: 2016/04/07 12:42:35 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	int i;

	i = 0;
	while (src[i] != c)
	{
		if (src[i] == '\0')
			return (0);
		i++;
	}
	return ((char *)&src[i]);
}
