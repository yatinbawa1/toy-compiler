#include "Util.h"
#include <fstream>
#include <stdexcept>
#include <sstream>
#include <string>

std::filesystem::path handleFileNameEntry(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << getSystemMessage("Ready To Compile") << std::endl;
        std::cout << getErrorMessage("No Source File Found! Enter source file (e.g., 'example.toy'): ") << std::endl;
    }
    else
    {
        std::filesystem::path filePath(argv[1]);
        if (filePath.extension() == ".toy")
        {
            std::ifstream file(filePath, std::ios::binary);
            if (!file)
                throw std::runtime_error("Cannot Open File Path: " + filePath.string());

            std::ostringstream ss;
            ss << file.rdbuf();
            return ss.str();
        }
        else
        {
            std::cout << getErrorMessage("Did not find a toy file. Aborting!");
        }
    }

    // quit app
    exit(-1);
}
