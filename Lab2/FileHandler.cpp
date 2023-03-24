#include "FileHandler.h"

FileHandler :: FileHandler(std::string fileName)
{
    setFileName(fileName);
    getFile().open(getFileName(), std::ios_base::binary);
    getFile().is_open() ? std::cout << "file is open\n": std::cout << "fine isn't open\n";
}

std::ifstream& FileHandler :: getFile()
{
    return file;
}

std::string FileHandler :: getFileName()
{
    return fileName;
}

void FileHandler :: setFileName(std::string fileName)
{
    this -> fileName = fileName;
}

void  FileHandler :: fileClose()
{
    getFile().close();
}

std::string FileHandler :: getWord()
{
    std::string tempString;
    getFile() >> tempString;
    return tempString;
}

std::string FileHandler :: getString()
{
    std::string tempString;
    std::getline(getFile(), tempString);
    return tempString;
}

bool FileHandler :: endOfFile()
{
    return getFile().eof() ? true: false;
}


