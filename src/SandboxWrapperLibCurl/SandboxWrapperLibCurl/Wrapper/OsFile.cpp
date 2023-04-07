#include "OsFile.h"

OsFile::OsFile(std::string pmFileName)
{
	FILE* file = fopen(pmFileName.c_str(), "w");
}

OsFile::~OsFile()
{
	if (file != nullptr) fclose(file);
}
