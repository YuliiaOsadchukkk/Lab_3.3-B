#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.3-B/Pair.h"
#include "../Lab_3.3-B/Pair.cpp"
#include "../Lab_3.3-B/BitString.h"
#include "../Lab_3.3-B/BitString.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33B
{
	TEST_CLASS(UnitTest33B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			BitString a, b;
			a.SetFirst(4);
			a.SetSecond(4);

			b.SetFirst(8);
			b.SetSecond(8);

			BitString c = (a ^ b);
			Assert::AreEqual(c.GetFirst(), 12l);
			Assert::AreEqual(c.GetSecond(), 12l);
		}
	};
}
