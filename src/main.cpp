#include <iostream>
#include <string>
#include <filesystem>
#include "./Util/Util.h"
#include "./Lexer/Token/Token.h"

int main(int argc, char *argv[])
{
    std::string raw_data = handleFileNameEntry(argc, argv);
    Scanner scan(raw_data);
    return 0;
}