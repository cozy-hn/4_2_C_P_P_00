CC          := c++
FLAG        := -Wall -Wextra -Werror -std=c++98

DIR         := ./
BASE        := main AForm Bureaucrat ShrubberyCreationForm RobotomyRequestForm PresidentialPardonForm Intern
SRC         := $(addprefix $(DIR), $(addsuffix .cpp, $(BASE)))
OBJ         := $(addprefix $(DIR), $(addsuffix .o, $(BASE)))
NAME        := Polymorphism

all : $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAG) $^ -o $@
	@echo "\033[32;1m\n🎉 [SUCCESS] Huzzah! Everything has been compiled with dazzling success! 🎉\033[m"
	@~/imgdogcat/imgdogcat -c

%.o : %.cpp
	@$(CC) $(FLAG) -I$(dir $<) -c $< -o $@
	@echo "\033[34;1m⏳ [OK] Behold as $< transforms into compiled greatness.\033[m"

clean :
	@rm -f $(OBJ)
	@echo "\033[35;1m🧹 [CLEAN] Alas, the object files have vanished into thin air!\033[m"

fclean : clean
	@rm -f $(NAME)
	@echo "\033[35;1m🌪️  [FCLEAN] Behold! All executables have been eradicated from existence!\033[m"

re : fclean all
	@echo "\033[1;92m🔄 [REMAKE] The cycle begins anew. Rebirth of the project is upon us!\033[m"

easy : all clean
	@echo "\033[36;1m🌈 [EASY] Project built and object files cleaned up! Enjoy your day! 🌈\033[m"
	

.PHONY : all clean fclean re easy