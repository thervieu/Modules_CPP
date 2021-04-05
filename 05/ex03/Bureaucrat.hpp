#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
    private:
  
        std::string const name;
        int grade;
        Bureaucrat &operator=(Bureaucrat const &b);
        Bureaucrat(Bureaucrat const &b);
  
    public:
  
        Bureaucrat();
        ~Bureaucrat();
        std::string getName() const;
        int getGrade() const;
        void upgrade(int n);
        void downgrade(int n);
        Bureaucrat(std::string name, int grade);
        void signForm(Form &f);
        void executeForm(Form const &form);

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char *what(void) const throw();
    };
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char *what(void) const throw();
    };

};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &b);

#endif