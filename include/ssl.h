/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ssl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:37:02 by aliandie          #+#    #+#             */
/*   Updated: 2019/05/10 22:31:42 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SSL_H
# define SSL_H
# include "../libft/include/libft.h"
# include "struct.h"
# include "stdio.h"
# include "stdint.h"
# include "constants.h"
# include "stdlib.h"

/* misc/memory */
t_ssl		*init_ssl_stuct();
void		fill_ssl_struct(t_ssl		*ssl, char		**av, int ac);
void		parser(t_ssl		*ssl, char **av);
#endif
