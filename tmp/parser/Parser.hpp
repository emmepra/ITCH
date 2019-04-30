#ifndef PARSER_H_
#define PARSER_H_

#include <iostream>
#include <fstream>
#include <time.h>
#include "utility.hpp"
#include <inttypes.h> // PRIux

class Parser{
    private:
        std::ifstream inFile;
        std::ofstream outFile;
        time_t start;
        unsigned count;
        char message[64];
        bool continueReading = 0;
    public:
        Parser(const std::string &inFileName, const std::string &outFileName);
        void writeMessage(const std::string &str);
        void closeStreams();
        void process();
        void readMessage(const long &size);
        void convertMessage(const char &key);
        void printProgress(void);
};

#endif