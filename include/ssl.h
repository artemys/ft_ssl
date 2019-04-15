/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ssl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:37:02 by aliandie          #+#    #+#             */
/*   Updated: 2019/04/15 15:14:21 by aliandie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SSL_H
 # define SSL_H
 # include "../libft/libft.h"
 # include "stuct.h"
 # include "stdio.h"
 # include "stdint.h"

/* misc/memory */
t_ssl	*init_ssl_stuct(void);
void		fill_ssl_struct(t_ssl		*ssl, char		**av, int ac);


#endif