#pragma once
#include <iostream>
#include <string>
using namespace std;

class Report {
private:
	string str;
public:
	Report(const string s) : str(s) {
		cout << "Object created!\n";
	}
	~Report() {
		cout << "Object deleted!\n";
	}
	void comment() const {
		cout << str << endl;
	}

};