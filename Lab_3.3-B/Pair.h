#pragma once
//Pair.h

using namespace std;

#include <string>
#include <iostream>
#include <sstream>

class Pair
{
	long first ;
	long second;
public:
	long GetFirst() const;
	long GetSecond() const;
	void SetFirst(long value);
	void SetSecond(long value);

	Pair() {};
	Pair(const Pair& obj);
	Pair(const long& first, const long& second);
	~Pair() {};

	Pair& operator = (const Pair&);
	operator string() const;

	friend ostream& operator << (ostream&, const Pair&);
	friend istream& operator >> (istream&, Pair&);

	friend bool operator == (const Pair& l, const Pair& r);
	friend bool operator != (const Pair& l, const Pair& r);
	friend bool operator > (const Pair& l, const Pair& r);
	friend bool operator < (const Pair& l, const Pair& r);
	friend bool operator >= (const Pair& l, const Pair& r);
	friend bool operator <= (const Pair& l, const Pair& r);
};
