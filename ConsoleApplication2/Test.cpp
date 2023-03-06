#include "Test.h"
Test operator+(const Test& a, const Test& b)
{
	Test test = a;
	test += b;
	return test;
}

ostream& operator<<(ostream& a , const Test& b)
{
	return (a << b.a_ << "/" << b.b_);
}

istream& operator>>(istream& a, Test& b)
{
	return a >> b.a_ >> b.b_;
}
