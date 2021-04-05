#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
   
    std::string const name;
    bool val;
    int const s_grade;
    int const e_grade;
    Form();
    Form(Form const &f);
    Form &operator=(Form const &f);

    public:
   
    Form(std::string name, int s_grade, int e_grade);
    ~Form();
    std::string getName() const;
    bool getVal() const;
    int getS_grade() const;
    int getE_grade() const;
    void beSigned(Bureaucrat *b);
    virtual void execute(Bureaucrat const &executor) const;

    class GradeTooLowException : public std::exception {
        public:
            virtual const char *what(void) const throw()
            {
                return "Grade Too Low !";
            }
    };
    class GradeTooHighException : public std::exception {
        public:
            virtual const char *what(void) const throw()
            {
                return "Grade Too High !";
            }
    };
    class FormNotSigned : public std::exception {
        public:
            virtual const char *what(void) const throw()
            {
                return "Form not signed !";
            }
    };

};

#endif