# FLAGS
CC 		= gcc
CFLAGS	= -Wall -Werror -Wextra

# LIBFT 
 
 LIBFT  = 	libft/libft.a
 LLIBFT = 	./libft/

# BASE

NAME 	=	push_swap
HEADERS = 	srcs/includes/push_swap.h

SRCS =	srcs/others/push_swap.c\
		srcs/moves/moves_1.c \
		srcs/moves/moves_2.c \
		srcs/moves/moves_3.c \
		srcs/others/check.c \
		srcs/others/setup.c \
		srcs/others/sort.c \
		srcs/others/radix.c \
		srcs/others/radix_utils.c \


# OBJS

OBJS = $(SRCS:.c=.o)

# COLORS

GREEN 		= \033[32;1m
YELLOW		= \033[1;33m
CYAN		= \033[36;1m
END_COLOR	= \033[0m

# RULES 

all : $(NAME)

$(NAME) : $(OBJS)
	@Make -C $(LLIBFT)
	@echo "$(GREEN) LIBFT OK $(END_COLOR)"

clean:
	@$(RM) $(OBJS)
	@echo "$(YELLOW) push_swap cleaned $(END_COLOR)"
	@Make clean -C $(LLIBFT)
	@echo "$(YELLOW) libft cleaned $(END_COLOR)"

fclean:
	@$(RM) $(OBJS)
	@echo "$(YELLOW) all ".o" cleaned $(END_COLOR)"
	@Make fclean -C $(LLIBFT)
	@echo "$(RED) libft fcleaned $(END_COLOR)"
	@$(RM) $(NAME)
#	@$(RM) num_gen
	@echo "$(RED) push_swap fcleaned $(END_COLOR)"

re: fclean all

.PHONY: all clean fclean re libft reset bonus run start