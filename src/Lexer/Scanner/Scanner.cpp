#include "Scanner.h"

char Scanner::peek()
{
    return raw_data[cursor];
}

char Scanner::consume()
{
    return raw_data[cursor++];
}

bool Scanner::isAtEnd()
{
    return (cursor >= raw_data.length());
}

// this function will return a Scanned Tokenized vector
// of the whole text
std::vector<Token> Scanner::scanToken()
{
    while (!isAtEnd())
    {
    }

    tokens.push_back(generateToken(TokenType::ENDFILE, "", NULL, line_number));
}

Scanner::Scanner(std::string &raw_data) : raw_data(raw_data), cursor(0)
{
}