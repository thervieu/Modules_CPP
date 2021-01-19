#ifndef INTERN_HPP
#define INTERN_HPP
#include "Form.hpp"

class Intern{
private:
    typedef struct {
        std::string req;
        Form *(*f)(std::string name);
    } choice;
    Intern &operator=(Intern const &i);
    Intern(Intern const &i);
    choice ch[3];
public:
    Intern();
    ~Intern();
    Form *makeForm(std::string req, std::string name);
};

#endif