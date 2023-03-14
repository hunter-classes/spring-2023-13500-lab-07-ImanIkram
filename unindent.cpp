#include <iostream>
#include <fstream>
#include <string>
#include <cctype>


//TASK A
std::string removeLeadingSpaces(std::string line)
{
    std::string unindent = "";
    int i = 0;
    bool first = false;
    while (!first)
    {
        if (!isspace(line[i]))
        {
            first = true;
            unindent+= line.substr(i) + "\n";
        }
        else 
        {
            i++;
        }
    }

    return unindent;
}

std::string unindent_file(std::string filename) 
{
    std::string unindent = "";
    std::string line;
    std::ifstream file(filename);

    while (getline(file,line))
    {
        unindent+= removeLeadingSpaces(line) ;
    }
    file.close();

    return unindent;
}



