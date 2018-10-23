#ifndef _MYCOMMANDPATTERNLINEEDITORDOTH_
#define _MYCOMMANDPATTERNLINEEDITORDOTH_

#include <string>
#include <iostream>
#include <vector>

const size_t arr_size = 10;

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

class Command
{
protected:
	Document * doc;
public:
	virtual ~Command() {}
	virtual void Execute() = 0;
	virtual void Undo() = 0;
	virtual void Redo() = 0;
	void setDocument(Document * _doc);
};

class InsertCommand : public Command
{
	size_t line;
	std::string str;
public:
	InsertCommand(int _line, const std::string & _str) : line(_line), str(_str) {}

	void Execute();

	void Undo();
};


class Editor
{
	Document doc;
	std::vector<Command*> DoneCommands, UndoneCommands;
	Command* command;
public:
	void Insert(int line, std::string str);

	void Undo();
	void Redo();
	void Print();
};


#endif