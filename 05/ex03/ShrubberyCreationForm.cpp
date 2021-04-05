#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::~ShrubberyCreationForm()
{
    return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 145, 137)
{
    return;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
    Form::execute(executor);
    std::string str = executor.getName().append("_shrubbery");
    char *s = &str[0];
    std::ofstream out(s, std::ofstream::out);
    out << "  _\\/_\n"
            <<  "     /\\\n"
            << "     /\\\n"
            <<  "    /  \\\n"
            <<  "    /~~\\o\n"
            <<   "   /o   \\\n"
            <<  "  /~~*~~~\\\n"
            <<   " o/    o \\\n"
            <<   " /~~~~~~~~\\~`\n"
            <<   "/__*_______\\\n"
            <<    "     ||\n"
            <<"   \\====/\n"
            <<"    \\__/" << std::endl;
    out.close();
}