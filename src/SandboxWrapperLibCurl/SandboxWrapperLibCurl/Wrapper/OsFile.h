#pragma once
#include <iostream>
class OsFile
{
private :
	FILE* file;
public:

	OsFile() = delete;

	OsFile(std::string pmFileName);

	virtual ~OsFile();
};

