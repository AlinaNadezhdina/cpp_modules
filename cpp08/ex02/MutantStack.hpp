#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	~MutantStack();
	MutantStack(const MutantStack<T> &other);
	MutantStack<T> &operator=(MutantStack<T> const &other);

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin(void);
	iterator	end(void);

	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	const_iterator	c_begin(void) const;
	const_iterator	c_end(void) const;

	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	reverse_iterator	r_begin(void);
	reverse_iterator	r_end(void);

	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
	const_reverse_iterator	cr_begin(void) const;
	const_reverse_iterator	cr_end(void) const;

};

#endif