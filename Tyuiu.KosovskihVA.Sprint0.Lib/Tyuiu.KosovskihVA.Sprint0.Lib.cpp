// Tyuiu.KosovskihVA.Sprint0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../repos/Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"

class Service1 : public ISprint0Task8V2
{

	virtual int Rezultat(int a, int b, int c)
	{
		return a * b * c;
	};
};

class Service2 : public ISprint0Task8V2
{

	virtual int Rezultat(int x, int y, int z)
	{
		return 5 + ((2 * x - z) / (3 + y * y));
	};
};
