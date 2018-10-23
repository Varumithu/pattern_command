#ifndef _MYCOMMANDPATTERNLINEEDITORDOTH_
#define _MYCOMMANDPATTERNLINEEDITORDOTH_

#include <string>
#include <iostream>
#include <vector>

#include "document.h"
#include "command.h"

const size_t arr_size = 10;




class Editor
{
	Document doc;
	std::vector<Command*> DoneCommands, UndoneCommands;
	Command* command;
	void clear_undone();
public:
	void Insert(int line, std::string str);


	void Undo();
	void Redo();
	void Print();
};


#endif