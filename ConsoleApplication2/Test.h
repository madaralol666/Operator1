#pragma once
#include <iostream>
using namespace std;
class Test
{

	int a_, b_;
	string pudge_ = "pudge";
public:
	Test(int a, int b)
	{
		a_ = a;
		b_ = b;
	}
	Test& operator++() 
	{
		a_++;
		b_++;
		return *this;
	}
	Test& operator++(int)
	{
		Test test = *this;
		a_++;
		b_++;
		return *this;
	}
	Test& operator+=(const Test& test)
	{
		a_ += test.a_;
		b_ += test.b_;
		return *this;
	}
	friend Test operator+(const Test& a, const Test& b);
	friend ostream& operator<<(ostream& a, Test b) 
	{
		return (a << b.a_ << "/" << b.b_);
	}
	friend istream& operator>>(istream& a, Test& b)
	{
		return a >> b.a_ >> b.b_;
	}
};

