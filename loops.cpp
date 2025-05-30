#include <iostream>
#include <Windows.h>
#include "declared_func.h"

int main()
{
	// Kind of useless, However infinite forloop, can also be written like
	/*
	for (int loop = 0; loop < 5; loop++)
	{
		std::cout << "Hi!\n";
		loop--;
	}
	for (int loopy = 0; loopy < 5; loopy++, loopy--)
	{
		std::cout << "Hi!\n";
	}
	for (int loopy = false; loopy < true;)
	{
		std::cout << "Do i  work?\n";
	}
	//

	*/
	/*
	while (true)
	{
		std::cout << "This is best practice.";
	}
	int j = 0;
	while (j < 1)
	{
		std::cout << "This is essentially the same it just is not best practice";
	}
	*/
	// Do while and their uses.

	int ddwl = 0;
	do
	{
		textel("Testme.");

		ddwl++;
	} while (ddwl < 3);
}


