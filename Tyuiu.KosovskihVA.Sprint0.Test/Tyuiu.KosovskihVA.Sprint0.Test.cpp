#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KosovskihVA.Sprint0.Lib/Tyuiu.KosovskihVA.Sprint0.Lib.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TyuiuKosovskihVASprint0Test
{
	TEST_CLASS(Sprint0TestV1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V2* cs1 = new Service1();
			int n = 765, a, b, c;
			a = n / 100;
			b = n % 100 / 10;
			c = n % 10;
			int mult = cs1->Rezultat(a, b, c);
		}
	
	public:

		TEST_METHOD(TestMethod2)
		{
			ISprint0Task8V2* cs2 = new Service2();
			int x = 10, y = 12, z = 3;
			int mult = cs2->Rezultat(x, y, z);
		}
	};
}
