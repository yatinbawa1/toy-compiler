#ifndef UTIL
#define UTIL

#include <string>
#include <filesystem>
#include <iostream>

// ANSI Escape Codes
const std::string RESET = "\033[0m";
const std::string BOLD = "\033[1m";
const std::string RED = "\033[31m";
const std::string GREEN = "\033[32m";
const std::string YELLOW = "\033[33m";
const std::string BLUE = "\033[34m";
const std::string CYAN = "\033[36m";

// System Tags
const std::string SYS_TAG = BOLD + GREEN + "[SYSTEM > " + RESET;
const std::string ERR_TAG = BOLD + RED + "[ERROR > " + RESET;

inline std::string getGreen(std::string value)
{
    return GREEN + value + RESET;
}

inline std::string getBlue(std::string value)
{
    return BLUE + value + RESET;
}

inline std::string getYellow(std::string value)
{
    return YELLOW + value + RESET;
}

inline std::string getSystemMessage(std::string value)
{
    return SYS_TAG + value;
}

inline std::string getErrorMessage(std::string value)
{
    return ERR_TAG + value;
}

// this handles all the file name entry
std::filesystem::path handleFileNameEntry(int argc, char *argv[]);

#endif