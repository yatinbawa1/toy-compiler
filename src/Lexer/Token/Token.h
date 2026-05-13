#ifndef TOKEN
#define TOKEN

#include <string>
#include <any>
#include "./TokenType.h"

typedef struct Token
{
    TokenType tokenType; // would store the type of token
    std::string lexeme;  // would store how it looks as a string
    std::any literal;    // would store the actual value
    unsigned int line;   // would store the line number
} Token;

class Scanner
{

    unsigned int cursor = 0;
    std::vector<Token> tokens;
    unsigned int line_number = 1;

public:
    Scanner(std::string raw_data);
};

#endif