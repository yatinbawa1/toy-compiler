#include <vector>
#include <iostream>
#include "Token.h"

// this function will return a Scanned Tokenized vector
// of the whole text
Scanner::Scanner(std::string raw_data)
{
    for (; cursor < raw_data.length(); cursor++)
    {
        if (raw_data[cursor] == '\n')
        {
            Scanner::line_number++;
        }

        std::cout << raw_data[cursor];
    }
}
