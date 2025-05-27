# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user <user@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/26 10:40:04 by user              #+#    #+#              #
#    Updated: 2025/05/27 06:23:21 by user             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc
CFLAGS = -Wall -Werror -Wextra

OBJDIR =./build

STRDIR = ./string
STRSDIR = ./strings
CTYPE = ./ctype
LLSTDIR = ./llst
ARRLSTDIR = ./arrlst_fns
LLST2DIR = ./llst2
INTLSTDIR = ./int_lst_fns
INTARRDIR = ./int_arr_fns
PRINTDIR = ./print
DICTDIR = ./dict_fns
STDLIB = ./stdlib
MISC = ./misc

SRCS =	$(STRDIR)/ft_split.c \
		$(STRDIR)/ft_split_set.c \
		$(STRDIR)/ft_strchr.c \
		$(STRDIR)/ft_strchrset.c \
		$(STRDIR)/ft_strdup.c \
		$(STRDIR)/ft_striteri.c \
		$(STRDIR)/ft_strjoin.c \
		$(STRDIR)/ft_strlcat.c \
		$(STRDIR)/ft_strlcpy.c \
		$(STRDIR)/ft_strlen.c \
		$(STRDIR)/ft_strmapi.c \
		$(STRDIR)/ft_strncmp.c \
		$(STRDIR)/ft_strnstr.c \
		$(STRDIR)/ft_strrchr.c \
		$(STRDIR)/ft_strtrim.c \
		$(STRDIR)/ft_substr.c \
		$(STRDIR)/ft_strtrunc_front.c \
		$(STRDIR)/ft_strunion.c \
		$(STRDIR)/ft_strcut.c \
		$(STRDIR)/ft_match.c \
\
		$(CTYPE)/ft_isalnum.c \
		$(CTYPE)/ft_isalpha.c \
		$(CTYPE)/ft_isascii.c \
		$(CTYPE)/ft_isdigit.c \
		$(CTYPE)/ft_isspace.c \
		$(CTYPE)/ft_isprint.c \
		$(CTYPE)/chrsetcmp.c \
		$(CTYPE)/ft_issign.c \
		$(CTYPE)/ft_tolower.c \
		$(CTYPE)/ft_toupper.c \
\
		$(LLSTDIR)/ft_lstadd_back.c \
		$(LLSTDIR)/ft_lstadd_front.c \
		$(LLSTDIR)/ft_lstclear.c \
		$(LLSTDIR)/ft_lstdelone.c \
		$(LLSTDIR)/ft_lstiter.c \
		$(LLSTDIR)/ft_lstlast.c \
		$(LLSTDIR)/ft_lstmap.c \
		$(LLSTDIR)/ft_lstnew.c \
		$(LLSTDIR)/ft_lstsize.c \
\
		$(LLST2DIR)/ft_lst_2add_back.c \
		$(LLST2DIR)/ft_lst_2last.c \
		$(LLST2DIR)/ft_del_lst_2node.c \
		$(LLST2DIR)/ft_lst_2new.c \
		$(LLST2DIR)/ft_lst_2delone.c \
		$(LLST2DIR)/ft_lst_2clear.c \
\
		$(INTLSTDIR)/int_lst_to_arr.c \
		$(INTLSTDIR)/int_lstnew.c \
		$(INTLSTDIR)/int_lstadd_back.c \
		$(INTLSTDIR)/int_lstadd_front.c \
		$(INTLSTDIR)/int_lstdel_front.c \
		$(INTLSTDIR)/int_lstlast.c \
		$(INTLSTDIR)/int_lstsize.c \
		$(INTLSTDIR)/int_lstclear.c \
\
		$(ARRLSTDIR)/arrlst_fns.c \
\
		$(INTARRDIR)/int_arrdup.c \
		$(INTARRDIR)/intsetcmp.c \
		$(INTARRDIR)/int_arrtrunc.c \
		$(INTARRDIR)/int_arrlcpy.c \
\
		$(STRSDIR)/ft_bzero.c \
		$(STRSDIR)/ft_memchr.c \
		$(STRSDIR)/ft_memcmp.c \
		$(STRSDIR)/ft_memcpy.c \
		$(STRSDIR)/ft_memmove.c \
		$(STRSDIR)/ft_memset.c \
\
		$(PRINTDIR)/ft_putchar_fd.c \
		$(PRINTDIR)/ft_putendl_fd.c \
		$(PRINTDIR)/ft_putnbr_fd.c \
		$(PRINTDIR)/ft_putstr_fd.c \
		$(PRINTDIR)/ft_putaddr.c \
		$(PRINTDIR)/ft_putaddr_fd.c \
		$(PRINTDIR)/ft_putchar.c \
		$(PRINTDIR)/ft_putnbr_base.c \
		$(PRINTDIR)/ft_putnbr_base_fd.c \
		$(PRINTDIR)/ft_putnbr.c \
		$(PRINTDIR)/ft_putstr.c \
		$(PRINTDIR)/ft_putuslong_base.c \
		$(PRINTDIR)/ft_putuslong_base_fd.c \
		$(PRINTDIR)/ft_putusnbr.c \
		$(PRINTDIR)/ft_putusnbr_fd.c \
		$(PRINTDIR)/ft_printf.c \
		$(PRINTDIR)/ft_fprintf.c \
\
		$(DICTDIR)/str_to_dict.c \
		$(DICTDIR)/free_dict.c \
		$(DICTDIR)/get_dict_value.c \
		$(DICTDIR)/set_dict_value.c \
		$(DICTDIR)/get_dict_entry.c \
		$(DICTDIR)/dict_addback.c \
		$(DICTDIR)/dict_last.c \
		$(DICTDIR)/dict_clear.c \
		$(DICTDIR)/dict_size.c \
		$(DICTDIR)/dict_to_arr.c \
		$(DICTDIR)/del_dict_node.c \
		$(DICTDIR)/print_dict.c \
\
		$(STDLIB)/ft_calloc.c \
		$(STDLIB)/ft_atoi.c \
		$(STDLIB)/ft_atof.c \
		$(STDLIB)/ft_itoa.c \
		$(STDLIB)/ft_atol.c \
		$(STDLIB)/ft_atoi_base.c \
\
		$(MISC)/ft_swap.c \
		$(MISC)/bubble_sort.c \
		$(MISC)/free_2darr.c \
		$(MISC)/ft_2darr_len.c	\
		$(MISC)/skip_fns.c	\
		$(MISC)/get_next_line.c

OBJS = $(SRCS:%.c=$(OBJDIR)/%.o)

all: $(OBJDIR) $(NAME)

$(OBJDIR):
	@mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

${NAME}: $(OBJS) 
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME) a.out

re: fclean all

.PHONY: all clean fclean re bonus
