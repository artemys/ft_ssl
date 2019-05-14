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

void	get_str_from_stdin(){

	char 	ch[1024];
	while( fgets(ch, 1000, stdin) )
	{
	   	printf("%s\n", ch);
	}	
	return;
}

void get_str_from_file(){
   char ch, file_name[25];
   FILE *fp;
 
   printf("Enter name of a file you wish to see\n");
   gets(file_name);
 
   fp = fopen(file_name, "r"); // read mode
 
   if (fp == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
 
   printf("The contents of %s file are:\n", file_name);
 
   while((ch = fgetc(fp)) != EOF)
      printf("%c", ch);
 
   fclose(fp);
   return 0;
}


int		main(int	ac, char	**av)
{
	t_ssl	ssl;
	(void)ac;
	get_str_from_stdin();
	ssl = (t_ssl){
		.initial_str = NULL,
		.initial_size = 0
	};
	//fill_ssl_struct(&ssl, av, ac);
	parser(&ssl, av);
	// parse_param();

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
