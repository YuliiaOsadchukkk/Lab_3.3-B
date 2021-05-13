//BitString.h
#pragma once
#include "Pair.h"

class BitString : public Pair
{
public:

	friend BitString operator ^ (const BitString& a, const BitString& b);
	friend BitString operator << (const BitString& a, int n);
	friend BitString operator >> (const BitString& a, int n);

	BitString& operator ++();
	BitString& operator --();
	BitString operator ++(int);
	BitString operator --(int);
};


