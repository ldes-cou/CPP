/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 14:48:19 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/02/09 10:07:45 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
#include <iostream>
#include <string>
#include <iomanip>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>



class Contact
{
	public:
	
	Contact(void);
	~Contact(void);
	
	
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string number;
	std::string darkest_secret;
	
	void get_data(std::string info[5]);
	void print_data(int i);
	void print_contact();

	private:

	std::string _infos[5];
};

class PhoneBook
{
    public:
    
    PhoneBook(void);
    ~PhoneBook(void);
    void add_contact();
	void search();
    void truncate(std::string data);
	bool is_digit(std::string s);
	bool is_index(int index, int n_contact);
	
	
    int new_list;
	
    private:
    
    Contact _contact[8];

};

#endif