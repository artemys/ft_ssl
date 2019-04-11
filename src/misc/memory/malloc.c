/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:10:13 by aliandie          #+#    #+#             */
/*   Updated: 2019/04/11 19:18:17 by aliandie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ssl.h"

t_ssl	*init_ssl_stuct(void)
{
	t_ssl	*ssl;

	ssl = NULL;
	if (!(ssl = (t_ssl*)malloc(sizeof(t_ssl)))) // 2 be free
		return (NULL);
	return(ssl);
}