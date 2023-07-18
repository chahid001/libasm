NAME= libasm
SRC_ASM= ft_write.s
MAIN= main.c
FLAGS_ASM= -f macho64 #elf64 for linux
OBJ= $(SRC_ASM:.s=.o)
GCC = gcc
ASM = nasm

all: $(NAME)

$(NAME): $(OBJ)
	$(GCC) $(MAIN) $(OBJ) -o $(NAME)

%.o: %.s 
	$(ASM) $(FLAGS_ASM) $<

clean:
	@rm -rf $(OBJ)

fclean:
	@rm -rf $(OBJ)
	@rm -rf $(NAME)

re: fclean all