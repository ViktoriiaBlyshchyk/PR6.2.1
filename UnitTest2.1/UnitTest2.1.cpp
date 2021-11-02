#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\PR6.2.1\PR6.2.1\PR6.2.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest21
{
	TEST_CLASS(UnitTest21)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 3;
			int a[n] = { 1, 3, 5 };
			int max = a[0];
			for (int i = 1; i < n; i++)
				if (a[i] > max && abs(a[i]) % 2 == 1)
					max = a[i];
			Assert::AreEqual(5, max);
		}
	};
}
