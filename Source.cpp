#include "AdditivePersistence.h"
#include <iostream>
#include <chrono>
#include <thread>

int main() {
	PersistenceData data;
	int input;
	data.additivePersistence = 0;
	std::cout << "Please enter an integer, its additive persistence will be computed:\n";
	std::cin >>input;
	data.digitalRoot = input;
	data = additivePersistence(data);
	std::cout << "The additive persistence of "<< input << " is " << data.additivePersistence << " and its digital root is " << data.digitalRoot <<".";
	std::this_thread::sleep_for(std::chrono::milliseconds(5000));
	return 0;
}

