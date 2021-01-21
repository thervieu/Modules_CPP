#include <string>
#include <ctime>
#include <iostream>
#include <iomanip>
#include <cstdlib>

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

void * serialize(void)
{
	Data * rtn = new Data;
	std::string s = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	for (int i = 0; i < 8; i++)
	{
		rtn->s1 += s[rand() % 62];
	}
	rtn->n = rand() * ((rand() % 2 == 0) ? 1 : -1);
	for (int i = 0; i < 8; i++)
	{
		rtn->s2 += s[rand() % 62];
	}
	return(rtn);
}

Data * deserialize(void * raw)
{
	Data	*ret = reinterpret_cast<Data*>(raw);
    return (ret);
}

int		main(void)
{
	srand(time(NULL));

	void * ser = serialize();
	Data * des = deserialize(ser);

	std::cout << des->s1 << " " << des->n << " " << des->s2 << std::endl;

	delete des;
	return (0);
}