/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 17:21:47 by aliandie          #+#    #+#             */
/*   Updated: 2019/04/23 19:04:45 by aliandie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ssl.h"


int		main(int	ac, char	**av)
{
	t_ssl	*ssl;

	ssl = init_ssl_stuct(av);

	fill_ssl_struct(ssl, ac);
	



	int i;
	i = 0;
	
	while (av[i])
	{
		printf("%s\n", av[i]);
		printf("%i\n", ac);
		i++;
	}
	printf("ssl=%s\n", ssl->initial_str);

	return(0);
}