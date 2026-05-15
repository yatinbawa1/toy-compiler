#ifndef SCANNER
#define SCANNER

#include <string>
#include "../Token/Token.h"

class Scanner
{
    std::vector<Token> tokens;
    std::string &raw_data;
    unsigned int line_number;
    unsigned int start;  // start of lexeme
    unsigned int cursor; // current position in raw_data

    // Helper functions
    char peek();
    char consume();
    bool isAtEnd();

public:
    Scanner(std::string &raw_data);
    std::vector<Token> scanToken();
};

#endif