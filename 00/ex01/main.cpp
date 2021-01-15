#include "Contact.hpp"

Contact	addContact(void)
{
    Contact     contact;
    std::string buffer;

    std::cout << "First name : ";
    std::cin >> buffer;
    contact.setFirstName(buffer);

    std::cout << "Last name : ";
    std::cin >> buffer;
    contact.setLastName(buffer);

    std::cout << "Nickname : ";
    std::cin >> buffer;
    contact.setNickname(buffer);

    std::cout << "Login : ";
    std::cin >> buffer;
    contact.setLogin(buffer);

    std::cout << "Postal Address : ";
    std::cin >> buffer;
    contact.setPostalAddress(buffer);

    std::cout << "Email Address : ";
    std::cin >> buffer;
    contact.setEmailAddress(buffer);

    std::cout << "Phone Number : ";
    std::cin >> buffer;
    contact.setPhoneNumber(buffer);

    std::cout << "Birthday : ";
    std::cin >> buffer;
    contact.setBirthdayDate(buffer);

    std::cout << "Favorite Meal : ";
    std::cin >> buffer;
    contact.setFavoriteMeal(buffer);

    std::cout << "Underwear Color : ";
    std::cin >> buffer;
    contact.setUnderwearColor(buffer);

    std::cout << "Darkest Secret : ";
    std::cin >> buffer;
    contact.setDarkestSecret(buffer);

    std::cout << std::endl << "The contact was added :)" << std::endl;
    return (contact);
}

void	searchContact(Contact phonebook[], int nbr_contacts)
{
    int          index;

    std::cout << "Enter the index of a contact: ";
    std::cin >> index;
    std::cout << std::endl;
    if (std::cin.good() && (index >= 0 && index < nbr_contacts))
    {
        std::cout << "First Name : " << phonebook[index].getFirstName() << std::endl;
        std::cout << "Last Name : " << phonebook[index].getLastName() << std::endl;
        std::cout << "Nickname : " << phonebook[index].getNickname() << std::endl;
        std::cout << "Login : " << phonebook[index].getLogin() << std::endl;
        std::cout << "Postal Address : " << phonebook[index].getPostalAddress() << std::endl;
        std::cout << "Email Address : " << phonebook[index].getEmailAddress() << std::endl;
        std::cout << "Phone Number : " << phonebook[index].getPhoneNumber() << std::endl;
        std::cout << "Birthday Date : " << phonebook[index].getBirthdayDate() << std::endl;
        std::cout << "Favorite Meal : " << phonebook[index].getFavoriteMeal() << std::endl;
        std::cout << "Underwear Color : " << phonebook[index].getUnderWearColor() << std::endl;
        std::cout << "Darkest Secret : " << phonebook[index].getDarkestSecret() << std::endl;
    }
    else
    {
        std::cin.clear();
        std::cout << "Sorry, that index isn't right. :(" << std::endl;
    }
}

std::string	truncateString(std::string str)
{
    str = str.erase(9, str.length() - 9);
    str.append(".");
    return (str);
}

void	search(Contact phonebook[], int nbr_contacts)
{
    std::string     str;
	
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < nbr_contacts; i += 1)
    {
        std::cout << "|" << std::setw(10) << i;

        str = phonebook[i].getFirstName();
		str = (str.length() > 10) ? \
            truncateString(str) : str;
        std::cout << "|" << std::setw(10) << str;

        str = phonebook[i].getLastName();
        str = (str.length() > 10) ? \
            truncateString(str) : str;
        std::cout << "|" << std::setw(10) << str;

        str = phonebook[i].getNickname();
        str = (str.length() > 10) ? \
            truncateString(str) : str;
        std::cout << "|" << std::setw(10) << str;
        std::cout << "|" << std::endl;
    }
    searchContact(phonebook, nbr_contacts);
}

int     main(void)
{
	int             i;
	Contact         contacts[8];
	std::string     cmd;

	std::cout << "Welcome to my phonebook !" << std::endl;
	std::cout << "Available commands: ADD, SEARCH, EXIT" << std::endl;
	i = 0;
	while (1)
	{
		getline(std::cin, cmd, '\n');
		if (cmd == "ADD")
			if (i < 8)
				contacts[i++] = addContact();
			else
				std::cout << "The phonebook is full. We can't register another account. Sorry :(" << std::endl;
		else if (cmd == "SEARCH")
			if (i != 0)
				search(contacts, i);
			else
				std::cout << "The phonebook is empty. ADD a contact to access this command" << std::endl;
		else if (cmd == "EXIT")
			break ;
	}
	return (0);
}
