#include "Header.h"



ostream& operator <<(ostream& os, const Student& p)
{
	return os << "name = " << p.name << "\tgroup = " << p.group << "\tnative_city = " << p.native_city << "\tage = " << p.age << "\theight = " << p.height << "\tweight = " << p.weight <<  endl;

}

istream& operator >>(istream& in, Student& p)
{
	in >> p.name >> p.group >> p.native_city >> p.age >> p.height >> p.weight ;
	return in;

}