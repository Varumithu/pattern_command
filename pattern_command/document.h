#pragma once

#include <string>

class Document
{
	std::string data;
public:
	Document();

	void Insert(size_t line, const std::string & str);
	void Remove(size_t ind1, size_t ind2);

	char & operator [] (size_t x);

	void Print();
};
