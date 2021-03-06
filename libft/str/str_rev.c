/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfinkel <nfinkel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 11:57:35 by nfinkel           #+#    #+#             */
/*   Updated: 2019/03/11 21:50:22 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/str.h"

inline char	*ft_strrev(char *const s)
{
	char	c;
	int		k;
	size_t	len;

	k = -1;
	len = ft_strlen(s);
	while ((unsigned int)++k < len--)
	{
		c = s[k];
		s[k] = s[len];
		s[len] = c;
	}
	return (s);
}
