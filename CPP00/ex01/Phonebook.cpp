/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:05:45 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/09 10:14:34 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int     n_contact = 0;
int		new_index = 0;

const std::string	infos[5] = {
	"First name", 
	"Last name", 
	"Nickname", 
	"Phone number", 
	"Darkest secret"
};

std::string truncate(std::string data)
{
	std::string str;
	
	if (data.length() > 10)
	{
		str = data.substr(0, 10);
		str[9] = '.';
		return (str);    
	}
	return data;
}

void PhoneBook::search()
{
	int contact = -1;
    std::string index;
	
	for (int i = 0; i < n_contact; i++)
		this->_contact[i].print_data(i);
    if (n_contact == 0)
    {
        std::cout << "You have no friend yet, sorry !" << std::endl;
        return;
    }
    do 
    {
        std::cout << "Enter the index of the contact: ";
        std::getline(std::cin, index);
        if (std::cin.eof())
        {
			std::cout << std::endl;
            std::cout << "Goodbye, friend !" << std::endl;
            exit(0);
        }
        else if (index.empty() || !is_digit(index))
        {
            std::cout << "Try again, with a number.";
            std::cout << std::endl;
        }
        if (is_digit(index))
            contact = atoi(index.c_str());
    } while (!is_digit(index) || !is_index(contact, n_contact) || index.empty());
    if (is_index(contact, n_contact))
    {
        this->_contact[contact].print_contact();
    }
}
void PhoneBook::add_contact()
{
    std::string input;
	std::string tmp[5];
	

    for (int i = 0; i < 5; i++)
    {
        do{
            std::cout << infos[i] << " : ";
			getline(std::cin, tmp[i]);
			if (std::cin.eof())
			{
				
				std::cout << "Goodbye, friend !" << std::endl;
				exit(1);
			}
        }while (tmp[i].empty());
    }
	if (n_contact == 8)
	{
		this->_contact[new_index].get_data(tmp);
		new_index++;
		return;
	}
	this->_contact[n_contact].get_data(tmp);
	n_contact++;
}

void Contact::print_contact()
{
	std::cout << "First name: ";
	std::cout << this->_infos[0]<< std::endl;
	std::cout << "Last name: ";
	std::cout << this->_infos[1] << std::endl;;
	std::cout << "Nickname: ";
	std::cout << this->_infos[2] << std::endl;
	std::cout << "Number : ";
	std::cout << this->_infos[3]<< std::endl;
	std::cout << "Darkest secret :" ;
	std::cout << this->_infos[4] << std::endl;
}

void Contact::get_data(std::string info[5])
{
	for (int i = 0; i < 5; i++)
    {
		this->_infos[i] = info[i];
    }
}

void Contact::print_data(int i)
{
    
	std::cout << "Index: ";
	std::cout << std::setw(10) << i << " | ";
	std::cout << "First name: ";
	std::cout << std::setw(10) << truncate(this->_infos[1]) << " | ";
	std::cout << "Last name: "; 
	std::cout << std::setw(10) << truncate(this->_infos[2]) << " | ";
	std::cout << "Nickname: ";
	std::cout << std::setw(10) << truncate(this->_infos[3]) << std::endl ; 
}