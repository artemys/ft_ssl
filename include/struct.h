/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:35:30 by aliandie          #+#    #+#             */
/*   Updated: 2019/05/10 22:36:38 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H
# include "stdint.h"

typedef struct		s_input
{
	int 			input_size;
	char			*input_str;
}					t_input;


typedef struct		s_md5
{
	uint32_t		*k;
	uint32_t		*r;
	int				h0;
	int				h1;
	int				h2;
	int				h3;
}					t_md5;

typedef struct		s_ssl
{
	char			*initial_str;
	size_t			initial_size;
}					t_ssl;

#endif
