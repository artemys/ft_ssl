/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:10:13 by aliandie          #+#    #+#             */
/*   Updated: 2019/04/23 19:05:29 by aliandie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ssl.h"

t_ssl	*init_ssl_stuct(char **av)
{
	t_ssl	*ssl;

	ssl = NULL;
	if (!(ssl = (t_ssl*)malloc(sizeof(t_ssl))))
		return (NULL);
	return (ssl);
}
