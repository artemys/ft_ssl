/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_ssl_struct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 15:07:24 by aliandie          #+#    #+#             */
/*   Updated: 2019/05/10 22:33:44 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include		"ssl.h"

void		fill_ssl_struct(t_ssl		*ssl, char		**av, int ac)
{
	if (ac == 0)
		return;
	else
	{
		ft_strcpy(ssl->initial_str, av[0]);
		ssl->initial_size = ft_strlen(ssl->initial_str);
	}
}
