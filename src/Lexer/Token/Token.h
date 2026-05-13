#ifndef TOKEN
#define TOKEN

#include <string>
#include <any>
#include <map>
#include "./TokenType.h"

typedef struct Token
{
    TokenType tokenType; // would store the type of token
    std::string lexeme;  // would store how it looks as a string
    std::any literal;    // would store the actual value
    unsigned int line;   // would store the line number
} Token;

static const std::unordered_map<std::string, TokenType> keyword_dictionary = {
    {"var", TokenType::VAR},
    {"print", TokenType::PRINT},
};

class Scanner
{

    std::vector<Token> tokens;
    std::string &raw_data;
    unsigned int line_number = 1;
    unsigned int cursor = 0;

public:
    Scanner(std::string &raw_data);
    void scanToken();
    char peek();
};

#endif