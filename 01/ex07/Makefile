
NAME = replace

SRCS_DIR = ./

SRCS =	replace.cpp

OBJS_DIR = objs/

OBJ = $(SRCS:.cpp=.o)

OBJS = $(addprefix $(OBJS_DIR), $(OBJ))

FLAGS = -Wall -Wextra -Werror

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
	@echo "Removing exec and .replace files"
	@rm -f $(NAME)
	@rm -f *.replace

re: fclean all