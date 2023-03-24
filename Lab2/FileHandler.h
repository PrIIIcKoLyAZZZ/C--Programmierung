#ifndef C__PROGRAMMIERUNG_FILEHANDLER_H
#define C__PROGRAMMIERUNG_FILEHANDLER_H

#include "fstream"
#include <iostream>

class FileHandler {
private:
    std::string fileName;
    std::ifstream file;
public:
    std::string getFileName();

    void setFileName(std::string fileName);

    FileHandler(std::string fileName); //Конструктор

    std::ifstream& getFile();

    void fileClose();

    std::string getWord();

    std::string getString();

    bool endOfFile();
};


#endif //C__PROGRAMMIERUNG_FILEHANDLER_H
