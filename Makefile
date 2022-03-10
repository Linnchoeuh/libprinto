CC = gcc
NAME = printo
SRC = $(shell find ./ -name "*.c")
OBJ = $(SRC:.c=.o)
ECHO = /bin/echo -e
INCLUDE = -I./include
CFLAG = -g3 -std=c11
ERRCFLAG = -Wextra -Wall -Werror

DEFLT	=	"\033[00m"
PINK	=	"\033[0;36m"
GREEN	=	"\033[1;32m"
TEAL	=	"\033[1;36m"
RED		=	"\033[0;31m"
BLINK 	= 	"\033[1;92m"
SBLINK	= 	"\033[0m"

all:$(NAME)

build :		$(ECHO) $(BLINK) "[SUCCESS]" $(DEFLT)

%.o : %.c
	@ $(CC) -o $@ -c $< $(INCLUDE) $(CFLAG) $(ERRCFLAG) && \
	$(ECHO) $(BLINK) "[OK]"$(SBLINK) $(PINK) $< $(DEFLT) || \
	$(ECHO) $(RED) "[KO]" $(PINK) $< $(DEFLT)

$(NAME):$(OBJ)
	@ $(CC) -o $@ $^ $(INCLUDE) $(CFLAG) $(ERRCFLAG) && \
	$(ECHO) $(BLINK) "[OK]"$(SBLINK) $(PINK) $(NAME) $(DEFLT) || \
	$(ECHO) $(RED) "[KO]" $(TEAL) $(NAME) $(DEFLT)

clean:
	@ find -name "*.o" -delete && find -name "*~" -delete && \
	$(ECHO) $(BLINK) "[CLEAN SUCCESS]" $(DEFLT)

fclean:
	@find . -name "*.so" -delete -or -name "*.exe" -delete \
        -or -name "*.a" -delete -or -name "*.o" -delete    \
        -or -name "*~" -delete -or -name "vgcore*" -delete
	@$(ECHO) $(GREEN) "All temporal file deleted!" $(DEFLT)
	@find -name $(NAME) -delete
	@$(ECHO) $(GREEN) "Executable deleted!" $(DEFLT)

re: 		fclean all

run: $(OUT)
	./$(OUT)

w:
	$(CC) $(SRC) -o $(NAME) $(INCLUDE) $(CFLAG)

install:	all
	@sudo mv $(NAME) /usr/bin/
	@$(ECHO) $(GREEN) "Program installed!" $(DEFLT)

uninstall:
	@sudo rm -i /usr/bin/$(NAME)
	@$(ECHO) $(GREEN) "Program deleted!" $(DEFLT)