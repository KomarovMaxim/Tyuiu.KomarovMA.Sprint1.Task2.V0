#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.KomarovMA.Sprint1.Task2.V0.Lib/Tyuiu.KomarovMA.Sprint1.Task2.V0.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			ISprint1Task2* date = new Service();
			int a = 256;
			int a1 = a / 10;
			int a2 = (a / 10) % 10;
			int a3 = (a / 10) % 100;
			int b;

			b = date->LogicLong(a);

			Assert::AreEqual(3125, b);

		}
	};
}
