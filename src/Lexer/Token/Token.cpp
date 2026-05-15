#include <vector>
#include <iostream>
#include "Token.h"

Token generateToken(TokenType tokenType, // would store the type of token
                    std::string lexeme,  // would store how it looks as a string
                    std::any literal,    // would store the actual value
                    unsigned int line)
{
    return {tokenType, lexeme, literal, line};
}