#include "editor.h"



void InsertCommand::Execute()
{
	doc->Insert(line, str);
}
void InsertCommand::Undo()
{
	doc->Remove(line);
}
