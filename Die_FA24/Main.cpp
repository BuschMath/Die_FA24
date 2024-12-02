#include <iostream>
#include "Die.h"

using namespace std;

int main()
{
	Die die;
	die.setSides(6);
	cout << "Rolling a " << die.getSides() << " sided die..." << endl;
	cout << "You rolled a " << die.roll() << endl;

	return 0;
}