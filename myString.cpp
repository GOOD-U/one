#include "myString.h"
#include <cstring>

String::String(const char* str){
	if(str == nullptr){
		m_data = new char[1];
		*m_data = '\0';
		
		//m_data = new char('\0');
	}else{
		int length = strlen(str);
		m_data = new char[length + 1];
		strcpy(m_data, str);
	}
}

String::~String(){
	delete[] m_data;
}

String::String(const String& other){
	int length = strlen(other.m_data);
	m_data = new char[length + 1];
	strcpy(m_data, other.m_data);	
}

String& String::operator= (const String& other){
	if(this == &other) return *this;
	
	delete[] m_data;
	int length = strlen(other.m_data);
	m_data = new char[length + 1];
	strcpy(m_data, other.m_data);
	return *this;
}

ostream& operator<< (ostream& out, String& other){
	out << other.m_data;
	return out;
}


