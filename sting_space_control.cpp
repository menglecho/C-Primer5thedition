#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string empty;
	string small = "bit";
	string large = "Elephants are a girl's best friend";

	cout << "Size:\n";
	cout << "\tempty: " << empty.size() << endl;
	cout << "\tsmall: " << small.size() << endl;
	cout << "\tlarge: " << large.size() << endl;

	cout << "Capacities: \n";
	cout << "\tempty: " << empty.capacity() << endl;
	cout << "\tsmall: " << small.capacity() << endl;
	cout << "\tlarge: " << large.capacity() << endl;

	//reserve used for request min size of memory
	//usually, the capacity of the string is >= string.size(); initialized as 15 byte(16 - 1)
	empty.reserve(50);
	cout << "Capacity after empty.reverse(50): " << empty.capacity() << endl;
	
	return 0;
}