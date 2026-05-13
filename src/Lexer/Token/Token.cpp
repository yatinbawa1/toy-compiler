#include <vector>
#include <iostream>
#include "Token.h"

// this function will return a Scanned Tokenized vector
// of the whole text

char Scanner::peek()
{
    return raw_data[cursor + 1];
}

void Scanner::scanToken()
{
}

Scanner::Scanner(std::string &raw_data) : raw_data(raw_data), cursor(0)
{
    scanToken();
}