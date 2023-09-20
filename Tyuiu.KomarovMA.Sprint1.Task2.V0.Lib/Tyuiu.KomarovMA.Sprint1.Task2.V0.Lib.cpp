// Tyuiu.KomarovMA.Sprint1.Task2.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"
// TODO: This is an example of a library function
class Service :public ISprint1Task2
{
	virtual int LogicLong(int a) override
	{

		int a1 = a / 10;
		int a2 = (a / 10) % 10;
		int a3 = (a / 10) % 100;
		int b = a1 * a2 * a3;
		return b;

	};


};
