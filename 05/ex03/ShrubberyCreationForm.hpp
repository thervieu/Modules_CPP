#ifndef SHRUB_HPP
#define SHRUB_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    public:

        ShrubberyCreationForm(std::string name);
        ~ShrubberyCreationForm();
        virtual void execute(Bureaucrat const &executor) const ;
    
    private:
    
        ShrubberyCreationForm();
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &p);
        ShrubberyCreationForm(ShrubberyCreationForm const &p);
};


#endif