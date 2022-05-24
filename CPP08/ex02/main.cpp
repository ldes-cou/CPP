/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldes-cou <ldes-cou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 17:41:43 by ldes-cou          #+#    #+#             */
/*   Updated: 2022/03/23 18:53:00 by ldes-cou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

void	testSubject(void)
 {
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "top : " <<mstack.top() << std::endl;
	mstack.pop();
	std::cout << "size : " <<mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
}

void test_list()
{
    //MutantStack<int> mstack;
    std::list<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    // std::cout << mstack.top() << std::endl;
    mstack.pop_back();
    std::cout << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    mstack.push_back(0);
    std::list<int>::iterator it = mstack.begin();
    std::list<int>::iterator ite = mstack.end();
    //MutantStack<int>::iterator it = mstack.begin();
    //MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::list<int> s(mstack);
}
void test_iterators()
{
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << "top : " <<mstack.top() << std::endl;
        mstack.pop();
        std::cout << "size : " <<mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        MutantStack<int>::reverse_iterator rit = mstack.rbegin();
        MutantStack<int>::reverse_iterator rite = mstack.rend();
        ++rit;
        --rit;
        while (rit != rite)
        {
        std::cout << *rit << std::endl;
        ++rit;
        }
        std::stack<int> s(mstack);
}
int main()
{
    std::cout << PURPLE << "---- TEST SUBJECT ----" << END << std::endl;
    testSubject();
    std::cout << PURPLE << "---- TEST LIST ----" << END << std::endl;
    test_list();
    std::cout << PURPLE << "---- TEST ITERATORS ----" << END << std::endl;
    test_iterators();
}