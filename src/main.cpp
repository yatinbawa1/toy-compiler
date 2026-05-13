#include <iostream>
#include <string>
#include <filesystem>
#include "./Util/Util.h"
#include "./Lexer/Token/Token.h"

int main(int argc, char *argv[])
{
    Scanner scan(handleFileNameEntry(argc, argv));
    return 0;
}