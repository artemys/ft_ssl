/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:21:47 by aliandie          #+#    #+#             */
/*   Updated: 2019/05/10 22:38:17 by nfinkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ssl.h"


int		main(int	ac, char	**av)
{
	t_ssl	ssl;

	ssl = (t_ssl){
		.initial_str = NULL,
		.initial_size = 0
	};
	check_param();
	parse_param();
	fill_ssl_struct(&ssl);

	execut();
	/*int i;
	i = 0;

	while (av[i])
	{
		printf("%s\n", av[i]);
		printf("%i\n", ac);
		i++;
	}
	printf("ssl=%s\n", ssl.initial_str);*/
	return(0);
}
