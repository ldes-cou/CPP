#ifndef SCALAR_HPP
# define SCALAR_HPP

//#include <limits>
#include <climits>
#include <string>
#include <cctype>
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <cmath>
#include <cfloat>
#include <iomanip> 

# define	NONDISPLAYABLE	1
# define	IMPOSSIBLE_CHAR	2
# define	IMPOSSIBLE_INT	3

class Scalar
{
	public:
		// Constructors
		Scalar(char *input);
		Scalar(const Scalar &src);
		
		// Destructor
		~Scalar();
		enum	eType
		{
			ERROR,
			CHAR,
			INT,
			DOUBLE,
			FLOAT
		};
		enum eType _type;

		// Operators
		Scalar & operator=(const Scalar &assign);
		bool	isChar(char *input);
		bool	isInt(char *input);
		bool	isFloat(char *input);
		bool	isDouble(char *input);

		void	castChar(void);
		void	castInt(void);
		void	castFloat(void);
		void	castDouble(void);
		void	Error(void);
		void	set_flag(void);
		
		/***********GETTERS****************/
		int getFlag(void);
		char getChar(void);
		int getInt(void);
		double getDouble(void);
		float getFloat(void);
	

	private:
	Scalar();
	char*		_input;
	int			_int;
	char		_char;
	double		_double;
	float		_float;
	int			_flag;

		
};
std::ostream &operator << (std::ostream &o, Scalar &i);
typedef void (Scalar::*convFunction)(void);
#endif