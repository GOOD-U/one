#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
using namespace std;
class String{
public:
	String(const char* str = nullptr);
	String(const String& other);
	String& operator= (const String& other);
	char* c_str(){return m_data;};
	friend ostream& operator<< (ostream& out, String& other);
	
	~String();	
private:
	char* m_data;	
};

#endif