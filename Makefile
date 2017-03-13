# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: itsuman <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/02/10 18:22:44 by itsuman           #+#    #+#              #
#    Updated: 2017/03/10 17:50:37 by itsuman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME =	libftprintf.a
FLAGS = -Wall -Werror -Wextra -g
SRC =	type_c_width.c flag+.c check_flag.c check_mod_size.c check_pricision.c check_type.c check_width.c fill_c.c fill_d.c fill_o.c fill_precision.c fill_s.c fill_type.c fill_u.c fill_width.c formater_arg.c ft_printf.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_strcmp.c ft_strjoin.c ft_strlen.c get_vaule.c is_spesify.c print_str.c typeX.c flag_0_and_namMin.c 
OSRC =	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OSRC)
	gcc $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OSRC)

%.o: %.c
	gcc $(FLAGS) -c -o $@ $<

main:
	gcc -o do_print $(FLAGS) ../main_printf.c $(NAME)

clean:
	rm -f $(OSRC)

fclean: clean
	rm -f $(NAME)

re: fclean all
