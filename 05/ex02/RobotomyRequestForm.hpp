#ifndef ROBOT_HPP
#define ROBOT_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form{
public:
    RobotomyRequestForm(std::string name);
    ~RobotomyRequestForm();
    virtual void execute(Bureaucrat const &executor) const ;
private:
    RobotomyRequestForm();
    RobotomyRequestForm &operator=(RobotomyRequestForm const &p);
    RobotomyRequestForm(RobotomyRequestForm const &p);
};


#endif