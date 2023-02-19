# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ojing-ha <ojing-ha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/14 20:26:19 by ojing-ha          #+#    #+#              #
#    Updated: 2023/02/19 13:45:25 by ojing-ha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DEF_COLOR     = \033[0;39m
GRAY         = \033[0;90m
RED         = \033[0;91m
GREEN         = \033[0;92m
YELLOW         = \033[0;93m
BLUE         = \033[0;94m
MAGENTA     = \033[0;95m
CYAN         = \033[0;96m
WHITE         = \033[0;97m

NAME		= megaphone

CC			= c++

CFLAGS	= -Wall -Werror -Wextra 
CFLAGS  += -std=c++98

all		:
		@echo "$(MAGENTA) --------------------------MAKING MEGAPHONE-------------------------- $(CYAN)"
		@echo "\n"
		@make $(NAME)
		@echo "$(YELLOW)Done Creating ./megaphone$(DEF_COLOR)"
		@echo "\n"
		@echo "$(GREEN) -------------$(RED)I $(CYAN)AM $(GREEN)DONE $(YELLOW)MADAFAKA$(GREEN)-------------------------- $(DEF_COLOR)"

$(NAME)	:
		@${CC} ${CFLAGS} megaphone.cpp -o ${NAME}
		@echo "$(GREEN)Creating ./megaphone...$(DEF_COLOR)"

clean	:
		@echo "$(MAGENTA) --------------------------REMOVING objs/-------------------------- $(CYAN)"
		@echo "\n"
		@rm -rf $(OBJS_DIR)
		@echo "$(RED)Object Files Deleted$(DEF_COLOR)"
		@echo "\n"
		@echo "$(GREEN) --------------------------DONE--------------------------$(DEF_COLOR)"

fclean	:	clean
		@echo "$(MAGENTA) --------------------------REMOVING ./philo-------------------------- $(CYAN)"
		@echo "\n"
		@rm -f $(NAME)
		@echo "$(RED)./megaphone Deleted$(DEF_COLOR)"
		@echo "\n"
		@echo "$(GREEN) --------------------------DONE--------------------------$(DEF_COLOR)"

re		:fclean all

.PHONY	:all clean fclean re