/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ges_tab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoullec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/30 17:26:05 by mmoullec          #+#    #+#             */
/*   Updated: 2016/06/30 19:54:30 by mmoullec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	tab_clr(char ***tab)
{
	char	**tmp;
	int		i;

	i = 0;
	tmp = *tab;
	while (tmp[i])
	{
		tmp[i] = 0;
		i++;
	}
}
