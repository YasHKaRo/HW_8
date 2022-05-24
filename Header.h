#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
using namespace std;
class Student
{
public:

	string name = "";
	string group = "";
	string native_city = "";
	int age = 0, height = 0, weight = 0, miss = 0;
};
istream& operator >>(istream& in, Student& p);
ostream& operator <<(ostream& os, const Student& p);

#endif // !HEADER_H

