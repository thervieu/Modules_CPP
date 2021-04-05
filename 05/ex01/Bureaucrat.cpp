#include "Bureaucrat.hpp"

std::string Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

Bureaucrat::Bureaucrat()
{
    return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    std::cout << "Constructor of " << name << " and Grade:" << grade << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
    return;
}

void Bureaucrat::downgrade(int n)
{
    std::cout << "Downgrade of " << name << " for " << n << " and Grade:" << grade << std::endl;
    if (grade + n > 150)
        throw GradeTooLowException();
    grade += n;
    return;
}

void Bureaucrat::upgrade(int n)
{
    std::cout << "Upgrade of " << name << " for " << n << " and Grade:" << grade << std::endl;

    if (grade - n < 1)
        throw GradeTooHighException();
    grade -= n;
    return;
}

Bureaucrat::~Bureaucrat()
{
    return;
}

std::ostream &operator<<(std::ostream &output, const Bureaucrat &b)
{
    output << "<" << b.getName() << ">, bureaucrat grade " << b.getGrade();
    return output;
}

void Bureaucrat::signForm(Form &f)
{
    if (grade > f.getS_grade())
    {
        std::cout << name << " cannot sign " << f.getName() << " his grade:" << grade << " and Form grade:"
                  << f.getS_grade() << std::endl;
        return;
    }
    std::cout << name << " (" << grade << ") "<< " signs " << f.getName() << " (" << f.getS_grade() << ")"<< std::endl;
    f.beSigned(this);
    return;
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Grade Too Low !";
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return "Grade Too High !";
}
