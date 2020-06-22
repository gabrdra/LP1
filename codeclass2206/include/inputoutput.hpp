#ifndef INPUTOUTPUT
#define INPUTOUTPUT

#include "time.hpp"
#include <iostream>
#include <fstream>

struct inputoutput
{
    void printErrorMessage(std::string programName);
    void verifyDate(std::ofstream fileWrite, std::ifstream fileRead);
    void addDate(std::ofstream fileWrite);
    void requestMessage(std::ofstream fileWrite, std::ifstream fileRead);
    void addMessage(std::ofstream fileWrite, std::ifstream fileRead, std::string message);
    void listMessages(std::ifstream fileRead);
};


#endif