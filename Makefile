# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: flhember <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 13:54:51 by flhember          #+#    #+#              #
#    Updated: 2021/11/25 11:48:26 by flhember         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

ASM = nasm
ASM_FLAG = -f
ASM_ARCH = macho64
ASM_CC = $(ASM) $(ASM_FLAG) $(ASM_ARCH)

LIBASM = ft_strlen ft_strcpy ft_strcmp ft_write ft_read ft_strdup
SRC_FILES = $(LIBASM:%=%.s)

SRC_PATH = ./src/
OBJ_PATH = ./obj/

OBJ_FILES = $(SRC_FILES:.s=.o)
OBJ_EXEC = $(addprefix $(OBJ_PATH), $(OBJ_FILES))
DEPS=$(OBJ_FILES:%.o=%.d)

all: $(NAME)

$(OBJ_PATH):
	@mkdir $(OBJ_PATH)

$(OBJ_PATH)%.o : $(SRC_PATH)%.s
	@$(ASM_CC) $< -o $@
	@echo "\033[40mCompilation of \033[1m$(notdir $<)\033[0m \033[32mdone.\033[0m"

$(NAME): $(OBJ_PATH) $(OBJ_EXEC)
	@ar rc $(NAME) $(OBJ_EXEC)
#	@ranlib $(NAME)
	@echo "\033[1m$(notdir $(NAME))\033[0m \033[32mdone.\033[0m"

clean:
	@/bin/rm -rf $(OBJ_PATH)
	@echo "\033[31mObjects files of \033[1;31m$(notdir $(NAME))\033[1;0m\033[31m removed.\033[0m"

fclean: clean
	@/bin/rm -rf $(NAME)
	@echo "\033[1;31m$(notdir $(NAME))\033[1;0m\033[31m removed.\033[0m"

re: clean  all

.PHONY: all, clean, fclean, re
