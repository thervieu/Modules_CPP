#ifndef PRES_HPP
#define PRES_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
   
        PresidentialPardonForm(std::string name);
        ~PresidentialPardonForm();
        virtual void execute(Bureaucrat const &executor) const ;
    
    private:
    
        PresidentialPardonForm();
        PresidentialPardonForm &operator=(PresidentialPardonForm const &p);
        PresidentialPardonForm(PresidentialPardonForm const &p);
};


#endif