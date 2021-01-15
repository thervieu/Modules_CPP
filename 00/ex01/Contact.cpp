#include "Contact.hpp"


Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void	Contact::setFirstName(std::string str)
{
	_firstName = str;
}

void	Contact::setLastName(std::string str)
{
	_lastName = str;
}

void	Contact::setNickname(std::string str)
{
	_nickname = str;
}

void	Contact::setLogin(std::string str)
{
	_login = str;
}

void	Contact::setPostalAddress(std::string str)
{
	_postalAddress = str;
}

void	Contact::setEmailAddress(std::string str)
{
	_emailAdress = str;
}

void	Contact::setPhoneNumber(std::string str)
{
	_phoneNumber = str;
}

void	Contact::setBirthdayDate(std::string str)
{
	_birthdayDate = str;
}

void	Contact::setFavoriteMeal(std::string str)
{
	_favoriteMeal = str;
}

void	Contact::setUnderwearColor(std::string str)
{
	_underwearColor = str;
}

void	Contact::setDarkestSecret(std::string str)
{
	_darkestSecret = str;
}

std::string Contact::getFirstName(void)
{
	return (_firstName);
}

std::string Contact::getLastName(void)
{
	return (_lastName);
}

std::string Contact::getNickname(void)
{
	return (_nickname);
}

std::string Contact::getLogin(void)
{
	return (_login);
}

std::string Contact::getPostalAddress(void)
{
	return (_postalAddress);
}

std::string Contact::getEmailAddress(void)
{
	return (_emailAdress);
}

std::string Contact::getPhoneNumber(void)
{
	return (_phoneNumber);
}

std::string Contact::getBirthdayDate(void)
{
	return (_birthdayDate);
}

std::string Contact::getFavoriteMeal(void)
{
	return (_favoriteMeal);
}

std::string Contact::getUnderWearColor(void)
{
	return (_underwearColor);
}

std::string Contact::getDarkestSecret(void)
{
	return (_darkestSecret);
}
