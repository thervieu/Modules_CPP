
NAME = ex01

SRCS_DIR = ./

SRCS =	main.cpp		\
		AWeapon.cpp		\
		Character.cpp		\
		Enemy.cpp		\
		PlasmaRifle.cpp		\
		PowerFist.cpp		\
		RadScorpion.cpp		\
		SuperMutant.cpp		\
		EvilRanger.cpp		\
		FireSword.cpp

OBJS_DIR = objs/

OBJ = $(SRCS:.cpp=.o)

OBJS = $(addprefix $(OBJS_DIR), $(OBJ))

FLAGS = -Wall -Wextra -Werror -std=c++98

$(OBJS_DIR)%.o : $(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling"
	@clang++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)
	@echo "Exec created !"

all: $(NAME)

clean:
	@echo "Removing objs"
	@rm -rf $(OBJS_DIR)

fclean: clean
	@echo "Removing exec"
	@rm -f $(NAME)

re: fclean all