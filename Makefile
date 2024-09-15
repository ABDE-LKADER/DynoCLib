NAME	=		libar.a
LIBH	=		DynoCLib.h
ARRC	=		ar -rc

SRCS	=		$(wildcard Sources/*.c)

FLGS	=		cc -Wall -Wextra -Werror
OBJS	=		$(SRCS:.c=.o)
RM  	=		rm -fr

GREEN		=	"\033[1;32m"
YELOW 		=	"\033[1;33m"
REDCL 		=	"\033[1;31m"
RESET 		=	"\033[0m"

all: start $(NAME) finish

start:
	@printf "\n"
	@echo $(GREEN)"Starting build..."
	@sleep 1
	@printf "Loading [ "

finish:
	@echo $(GREEN) ] 100%$(RESET)
	@echo $(GREEN)Project built.$(RESET)
	@printf "\n"

$(NAME): $(OBJS)
	@$(ARRC) $(NAME) $(OBJS)

Sources/%.o: Sources/%.c $(LIBH)
	@$(FLGS) -c $< -o $@
	@printf $(GREEN)"."$(RESET)

clean:
	@$(RM) $(OBJS)
	@echo $(YELOW)Cleaning up 🧹💫$(RESET)

fclean: clean
	@$(RM) $(NAME)
	@echo $(REDCL)Purging all files 🗑️$(RESET)

re: fclean all
