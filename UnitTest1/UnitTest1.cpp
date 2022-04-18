#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_Lab_3.3B/Triad.cpp"
#include "../OOP_Lab_3.3B/Vector3D.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector3D l(10, 4, -5);
			Vector3D r(4, -3, 13);
			int t = l * r;
			Assert::AreEqual(-37, t);
		}
	};
}
