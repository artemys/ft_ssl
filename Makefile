#################
##  VARIABLES  ##
#################

#	Environment
OS :=					$(shell uname -s)

#	Output
NAME :=					ft_ssl
LFT :=					$(LIBFTDIR)/libft.a

#	Compiler
CC :=					gcc

#	Flags
FLAGS =					-Wall -Wextra -Wcast-align -Wconversion -Werror -g3
ifeq ($(OS), Darwin)
	THREADS :=			$(shell sysctl -n hw.ncpu)
else
	THREADS :=			4
endif
HEADERS :=				-I ./include

FAST :=					-j$(THREADS)
O_FLAG :=				-O0

#	Directories
LIBFTDIR :=				./libft/
OBJDIR :=				./build/
SRCDIR :=				./src/

#	Sources
SRCS +=					md5_algo.c md5_memory.c md5_padding.c main.c
SRCS +=					free.c malloc.c check_param.c fill_ssl_struct.c
OBJECTS +=				$(patsubst %.c,$(OBJDIR)%.o,$(SRCS))

vpath %.c $(SRCDIR)

#################
##    RULES    ##
#################

all: $(LFT) $(NAME)

$(NAME): $(OBJECTS)
	@$(CC) $(FLAGS) $(O_FLAG) $(patsubst %.c,$(OBJDIR)%.o,$(notdir $(SRCS))) -L $(LIBFTDIR) -lft -o $@
	@printf "\033[92m\033[1;32mCompiling -------------> \033[91m$(NAME)\033[0m\033[1;32m:\033[0m%-14s\033[32m[✔]\033[0m\n"

$(OBJECTS): | $(OBJDIR)

$(OBJDIR):
	@mkdir -p $@

$(OBJDIR)%.o: %.c
	@printf "\033[1;92mCompiling $(NAME)\033[0m %-29s\033[32m[$<]\033[0m\n"
	@$(CC) $(FLAGS) $(O_FLAG) $(HEADERS) -fpic -c $< -o $@
	@printf "\033[A\033[2K"

clean:
	@/bin/rm -rf $(OBJDIR)
	@printf "\033[1;32mCleaning object files -> \033[91m$(NAME)\033[0m\033[1;32m:\033[0m%-14s\033[32m[✔]\033[0m\n"

fast:
	@$(MAKE) --no-print-directory $(FAST)

fclean: clean
	@/bin/rm -f $(NAME)
	@printf "\033[1;32mCleaning binary -------> \033[91m$(NAME)\033[0m\033[1;32m:\033[0m%-14s\033[32m[✔]\033[0m\n"

$(LFT):
	@$(MAKE) --no-print-directory fast -C $(LIBFTDIR)

mrproper: fclean
	@$(MAKE) --no-print-directory fclean -C $(LIBFTDIR)

noflags: FLAGS := 
noflags: re

re: fclean all

.PHONY: all clean fast fclean noflags re
