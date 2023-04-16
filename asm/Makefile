C_NAME =	Colleen
G_NAME =	Grace
S_NAME =	Sully

NASM = nasm -f elf64
CC   = 	gcc -no-pie
RM   = 	rm -rf

CFLAGS =	

C_SRC =	Colleen.s
G_SRC =	Grace.s
S_SRC =	Sully.s

OBJ_DIR = obj

C_OBJ =	$(OBJ_DIR)/Colleen.o
G_OBJ = $(OBJ_DIR)/Grace.o
S_OBJ = $(OBJ_DIR)/Sully.o

G_KID =	Grace_kid.s

# *************************************************************************** #
#	RULES	#

all:	create_dirs $(OBJ_DIR) $(C_NAME) $(G_NAME) $(S_NAME)

$(OBJ_DIR)/%.o: %.s
	$(NASM) $< -o $@

$(C_NAME):	$(C_OBJ)
	$(CC) $(CFLAGS) $^ -o $@
$(G_NAME):	$(G_OBJ)
	$(CC) $(CFLAGS) $^ -o $@
$(S_NAME):	$(S_OBJ)
	$(CC) $(CFLAGS) $^ -o $@

create_dirs:
	@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) $(OBJ_DIR)

fclean:	clean
	@$(RM) $(C_NAME) $(G_NAME) $(S_NAME) $(G_KID) Sully_* $(OBJ_DIR)

re:		fclean all

.PHONY: all clean fclean re