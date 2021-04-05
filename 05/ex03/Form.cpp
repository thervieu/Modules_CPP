#include "Form.hpp"

std::string Form::getName() const
{
    return name;
}

int Form::getE_grade() const
{
    return e_grade;
}

int Form::getS_grade() const
{
    return s_grade;
}

bool Form::getVal() const
{
    return val;
}

Form::~Form()
{
    return;
}

void Form::execute(const Bureaucrat &executor) const
{
    if (executor.getGrade() > e_grade)
        throw GradeTooLowException();
    if (!val)
        throw FormNotSigned();
}

Form::Form(std::string name, int s_grade, int e_grade) : name(name), s_grade(s_grade), e_grade(e_grade){
    std::cout << "Constructor of " << name << " and e_grade:" << e_grade << " and s_grade:" << s_grade << std::endl;
    if (s_grade > 150 || e_grade > 150)
        throw GradeTooLowException();
    else if (s_grade < 1 || e_grade < 1)
        throw GradeTooHighException();
    return;
}

void Form::beSigned(Bureaucrat *b)
{
    if (b->getGrade() > s_grade)
        throw GradeTooLowException();
    val = true;
    return;
}