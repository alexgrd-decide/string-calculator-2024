#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <string>

//----------------------------------//
class SyntaxError
{
public:
	SyntaxError(std::string Comment) : Error(Comment) {}
	std::string what() { return Error; }

private:
	std::string Error;
};
//----------------------------------//
class ValueError
{
public:
	ValueError(std::string Comment) : Error(Comment) {}
	std::string what() { return Error; }

private:
	std::string Error;
};
//----------------------------------//
class DivisionByZero
{
public:
	DivisionByZero(std::string Comment) : Error(Comment) {}
	std::string what() { return Error; }

private:
	std::string Error;
};
//----------------------------------//

#endif