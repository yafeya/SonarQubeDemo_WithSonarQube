// TestDemo.cpp : Defines the entry point for the console application.
//

#include "TestSource.h"
#include <iostream>

int main()
{
	SayHello("");
	SayHello("This is a test!!!");

	char * input = new char(256);
	cin >> input;
	delete input;
    return 0;
}

