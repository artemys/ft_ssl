# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/09 17:11:37 by aliandie          #+#    #+#              #
#    Updated: 2019/04/22 14:20:33 by aliandie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = ft_ssl
CCLIB = -Llibft -lft
CCFLAGS = -g -Wall -Werror -Wextra
SRCDIR = src
OBJDIR = obj
MISCDIR = misc
MEMDIR = memory
ERRDIR = error
PARSDIR = praser
INCDIR = include/

SRC = 	main.c\
		md5/md5_algo.c\
		md5/md5_memory.c\
		md5/md5_padding.c\
		misc/memory/malloc.c\
		misc/parser/fill_ssl_struct.c\

	

SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJS = $(addprefix $(OBJDIR)/, $(SRC:.c=.o))
INCS = $(addprefix -I , $(INCDIR))

all: $(NAME)
$(NAME): build $(OBJS)
		@make -C libft
		@gcc $(CCLIB) -o $(NAME) $(OBJS)
build:
		@mkdir -p $(OBJDIR)
		@mkdir -p $(OBJDIR)/misc/parser
		@mkdir -p $(OBJDIR)/md5

clean:
		@make -C libft clean
		@rm -f $(OBJS)
fclean: clean
		@make -C libft fclean
		@rm -f $(NAME)
re: fclean all

dev : all
		@./$(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
		@gcc -c $(CCFLAGS) $(INCS) -o $@ $<