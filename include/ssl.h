/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ssl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:37:02 by aliandie          #+#    #+#             */
/*   Updated: 2019/04/23 19:05:04 by aliandie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SSL_H
 # define SSL_H
 # include "../libft/libft.h"
 # include "stuct.h"
 # include "stdio.h"
 # include "stdint.h"
 # include "constants.h"

/* misc/memory */
t_ssl		*init_ssl_stuct(char **av);
void		fill_ssl_struct(t_ssl		*ssl, char		**av, int ac);


#endif