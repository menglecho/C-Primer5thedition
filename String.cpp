#include<iostream>
#include<string>

//string constructor exercise 

int main()
{
	using namespace std;
	
	//string(const char * s)
	string one("Lottery Winners!");
	cout << one << endl;

	//string(size_type n, char c)
	string two(5, '%');
	cout << two << endl;

	//string(const string & str)
	string three(one);
	cout << three << endl;

	//overload +=
	one += " Opps!";
	cout << one << endl;
	two = "Sorry, That was ";
	three[0] = 'p';

	//string()
	string four;
	four = two + three; //overload + =
	cout << four << endl;

	//string(const char * s, size_type n);
	char alls[] = "All's well that ends well";
	string five(alls, 20);
	cout << five << "!\n";

	//template<class Iter> string(Iter begin, Iter end)
	string six1(alls + 6, alls + 10);
	cout << six1 << ", ";
	string six2(&five[6], &five[10]);
	cout << six2 << endl;

	//string(const string & str, string size_type pos[0], size_type n = pos)
	string seven(four, 7, 16);
	cout << seven << " in motion!" << endl;

	//cout << seven.length() << seven.size() << endl;
}