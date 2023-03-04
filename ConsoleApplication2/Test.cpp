#include "Test.h"

Test operator+(const Test& a, const Test& b)
{
	Test test = a;
	test += b;
	return test;
}