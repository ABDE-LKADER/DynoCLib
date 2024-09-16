NAME	=		libar.a
LIBH	=		DynoCLib.h
ARRC	=		ar -rc

SRCS	=		$(wildcard Sources/*.c)

OBJS_DIR	=	.Objects/
OBJS		=	$(addprefix $(OBJS_DIR), $(SRCS:.c=.o))

FLGS	=		cc -Wall -Wextra -Werror
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

$(OBJS_DIR)%.o: %.c $(LIBH)
	@mkdir -p $(dir $@)
	@$(FLGS) -c $< -o $@
	@printf $(GREEN)"."$(RESET)

clean:
	@$(RM) $(OBJS_DIR)
	@echo $(YELOW)Cleaning up 🧹💫$(RESET)

fclean: clean
	@$(RM) $(NAME)
	@echo $(REDCL)Purging all files 🗑️$(RESET)

re: fclean all
