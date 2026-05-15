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

// Due to return value optimization this will be created straight where
// memory needs to be rather than a extra copy, this will result in a virtually non existent
// delay, and make the syntax cleaner
Token generateToken(TokenType tokenType,
                    std::string lexeme,
                    std::any literal,
                    unsigned int line);
#endif