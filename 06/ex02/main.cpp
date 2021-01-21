#include <ctime>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
	int i = rand() % 3;
	Base	*random;

	if (i == 0)
	{
		std::cout << "Class A generated randomly" << std::endl;
		return (random = new A());
	}
	else if (i == 1)
	{
		std::cout << "Class B generated randomly" << std::endl;
		return (random = new B());
	}
	else
	{
		std::cout << "Class C generated randomly" << std::endl;
		return (random = new C());
	}
}

// The value of a failed cast to pointer type is the null pointer value of the required result type

void	identify_from_pointer(Base *ptr)
{
    A   *cl_a = dynamic_cast<A*>(ptr);
    if (cl_a)
    {
        std::cout << "A identified from pointer" << std::endl;
    }
    B   *cl_b = dynamic_cast<B*>(ptr);
    if (cl_b)
    {
        std::cout << "B identified from pointer" << std::endl;
    }
    C   *cl_c = dynamic_cast<C*>(ptr);
    if (cl_c)
    {
        std::cout << "C identified from pointer" << std::endl;
    }
}

// https://stackoverflow.com/questions/11510128/how-to-identify-failed-casts-using-dynamic-cast-operator
// or: A failed cast to reference type throws an exception (15.1) of a type that would match a handler (15.3) of typestd::bad_cast(18.7.2). (C++ Standard)

void	identify_from_reference(Base &ptr)
{
    try
    {
        A   &cl_a = dynamic_cast<A&>(ptr);
        std::cout << "A identified from reference" << std::endl;
        static_cast<void>(cl_a);
    }
    catch (std::bad_cast &bc)
    {
        std::cout << "Failed to cast A" << std::endl;
    }
    try
    {
        B   &cl_b = dynamic_cast<B &>(ptr);
        std::cout << "B identified from reference" << std::endl;
        static_cast<void>(cl_b);
    }
    catch (std::bad_cast &bc)
    {
        std::cout << "Failed to cast B" << std::endl;
    }
    try
    {
        C   &cl_c = dynamic_cast<C &>(ptr);
        std::cout << "C identified from reference" << std::endl;
        static_cast<void>(cl_c);
    }
    catch (std::bad_cast &bc)
    {
        std::cout << "Failed to cast C" << std::endl;
    }
}

int		main(void)
{
    srand(time(NULL));

    Base    *base = generate();

    identify_from_pointer(base);
    identify_from_reference(*base);

	delete base;
    return (0);
}
