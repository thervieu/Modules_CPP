#ifndef BURO_HPP
#define BURO_HPP
#include <iostream>

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

    class GradeTooLowException : public std::exception
    {
        public:
            virtual const char *what(void) const throw()
            {
                return "Grade Too Low !";
            }
    };
    class GradeTooHighException : public std::exception
    {
        public:
            virtual const char *what(void) const throw()
            {
                return "Grade Too High !";
            }
    };

};

std::ostream &operator<<(std::ostream &output, const Bureaucrat &b);

#endif