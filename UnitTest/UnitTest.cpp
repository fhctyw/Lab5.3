#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab5.3\Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double tmp = g(0);
			Assert::AreEqual(1., tmp);
		}
	};
}
