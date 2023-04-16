C_NAME =	Colleen
G_NAME =	Grace
S_NAME =	Sully

CC = 	c++
RM = 	rm -rf

CFLAGS =	-Wall -Werror -Wextra

C_SRC =	Colleen.cpp
G_SRC =	Grace.cpp
S_SRC =	Sully.cpp

OBJ_DIR = obj

C_OBJ =	$(OBJ_DIR)/Colleen.o
G_OBJ = $(OBJ_DIR)/Grace.o
S_OBJ = $(OBJ_DIR)/Sully.o

G_KID =	Grace_kid.cpp

# *************************************************************************** #
#	RULES	#

all: create_dirs $(OBJ_DIR) $(C_NAME) $(G_NAME) $(S_NAME) 

$(OBJ_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

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