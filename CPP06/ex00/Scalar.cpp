#include "Scalar.hpp"

/*************************************** CANONIC CLASS *******************************************/
// typedef void (*convFunction)(void);
Scalar::Scalar()
{}
Scalar::Scalar(char *input) //: _input(input)
{
	this->_input = input;
	if (this->isInt(input) == false
		&&this->isChar(input) == false 
		&&this->isFloat(input) == false
		&&this->isDouble(input) == false)
			this->_type = ERROR;
	convFunction convert[5] =
		{
			&Scalar::Error,
			&Scalar::castChar,
			&Scalar::castInt,
			&Scalar::castDouble,
			&Scalar::castFloat,
		};

	(this->*(convert[this->_type]))();
	this->set_flag();
}

Scalar::Scalar(const Scalar &src)
{
	*this = src;
}

Scalar::~Scalar()
{
}

Scalar &Scalar::operator=(const Scalar &src)
{
	if (this != &src)
	{
		this->_input = src._input;
		this->_type = src._type;
		this->_char = src._char;
		this->_double = src._double;
		this->_float = src._float;
	}
	return (*this);
}

/**********************************************************************************************/

void Scalar::set_flag(void)
{

	if (this->_double < (INT_MIN) || this->_double > (INT_MAX) || std::isnan(this->_double) == true || std::isinf(this->_double) == true)
		this->_flag = IMPOSSIBLE_INT;
	else if (this->_double < CHAR_MIN || this->_double > CHAR_MAX)
		this->_flag = IMPOSSIBLE_CHAR;
	else if (std::isprint(this->_char) == false)
		this->_flag = NONDISPLAYABLE;
}
void Scalar::Error(void)
{
	std::cout << "This type is undefined !" << std::endl;
	exit(EXIT_FAILURE);
}

/************************************ CASTS *********************************************/
void Scalar::castChar(void)
{
	this->_int = static_cast<int>(this->_char);
	this->_float = static_cast<float>(this->_char);
	this->_double = static_cast<double>(this->_char);
}
void Scalar::castInt(void)
{
	this->_char = static_cast<char>(this->_int);
	this->_float = static_cast<float>(this->_int);
	this->_double = static_cast<double>(this->_int);
}
void Scalar::castFloat(void)
{
	this->_int = static_cast<int>(this->_float);
	this->_char = static_cast<char>(this->_float);
	this->_double = static_cast<double>(this->_float);
}
void Scalar::castDouble(void)
{
	this->_int = static_cast<int>(this->_double);
	this->_char = static_cast<char>(this->_double);
	this->_float = static_cast<float>(this->_double);
}
/************************************** DETECT ***************************************************/
bool Scalar::isChar(char *input)
{
	char c = input[0];
	if (input[1] || isprint(c) == false)
		return false;
	this->_char = c;
	this->_type = CHAR;
	return true;
}

bool Scalar::isInt(char *input)
{
	char *afterDigit = NULL;
	long int i = strtol(input, &afterDigit, 10);
	if (*afterDigit != '\0' || i < INT_MIN || i > INT_MAX)
		return (false);
	this->_type = INT;
	this->_int = static_cast<int>(i);
	return (true);
}

bool Scalar::isFloat(char *input)
{
	char *afterDigit = NULL;
	float f = strtof(input, &afterDigit);
	if ((*afterDigit != 'f' || *(afterDigit + 1) != '\0'))
		return false;
	this->_type = FLOAT;
	this->_float = f;
	return true;
}
bool Scalar::isDouble(char *input)
{
	char *afterDigit = NULL;
	double d = strtod(input, &afterDigit);
	if (*afterDigit != '\0')
		return false;
	this->_type = DOUBLE;
	this->_double = d;
	return true;
}
/**************************** OPERATOR ************************************************/

std::ostream &operator<<(std::ostream &o, Scalar &i)
{
	o << "char : ";
	if (i.getFlag() == IMPOSSIBLE_CHAR || i.getFlag() == IMPOSSIBLE_INT)
		o << "impossible";
	else if ((i.getFlag() == NONDISPLAYABLE))
		o << "Non displayable";
	else
		o << "'" << i.getChar() << "'";
	o << std::endl
	  << "int : ";
	if ((i.getFlag() == IMPOSSIBLE_INT))
		o << "impossible";
	else
		o << i.getInt();
	o << std::endl << std::fixed << std::setprecision(1)
	  << "float: " << i.getFloat() << "f"
	  << std::endl
	  << "double: " << i.getDouble();
	return o;
}
/******************************************GETTERS*************************************/
int Scalar::getFlag(void)
{
	return this->_flag;
}
float Scalar::getFloat(void)
{
	return this->_float;
}
int Scalar::getInt(void)
{
	return this->_int;
}
char Scalar::getChar(void)
{
	return this->_char;
}
double Scalar::getDouble(void)
{
	return this->_double;
}