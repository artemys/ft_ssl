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
void	parser(t_ssl	*ssl, char **av)
{
	bool parse;
	int i;
	char *opt = (char *)malloc(sizeof(char));

	parse = true;
	i = 1;
	printf("%ld\n", ssl->initial_size);
	while (parse == true && av[i])
	{
		if(av[i][0] == '-')
		{
			printf("%s\n", &av[i][1]);
			ft_strcpy(opt, &av[i][1]);
			
			if(ft_strcmp(opt, "p") == 0)
			{
				printf("%s\n", "opt p is passed");
			}
			else if (ft_strcmp(opt, "q") == 0)
			{
				printf("%s\n", "opt q is passed");
			}
			else if (ft_strcmp(opt, "r") == 0)
			{
				printf("%s\n", "opt r is passed");
			}
			else if (ft_strcmp(opt, "s") == 0)
			{
				printf("%s\n", "opt s is passed");
			}
			else
				printf("%s\n", "no opt is passed");
			
		}
		i++;
		
	}
	return;
}

int		main(int	ac, char	**av)
{
	t_ssl	ssl;
	(void)ac;
	ssl = (t_ssl){
		.initial_str = NULL,
		.initial_size = 0
	};
	parser(&ssl, av);
	// parse_param();
	// fill_ssl_struct(&ssl);

	// execut();
/*	int i;
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
