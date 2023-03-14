#include <iostream>
#include "indent.h"
#include "unindent.h"
#include <string>
#include <sstream>

int countChar(std::string line, char c)
{
    int count = 0;
    for (int i = 0; i<line.length(); i++)
    {
        if (line[i] == c)
        {count++;}
    }
    return count;

}


std::string indent(std::string filename)
{
    std::istringstream unindent(unindent_file(filename));
    std::string line;
    std::string indent = "";
    int count= 0;
    while (getline(unindent, line))
    { 
        for (int i = 0; i<count; i++)
        {
            if (line[0]=='}')
            {
                indent+="\t";
                count--;
            }
            else 
            {
                indent+="\t";
            }
        }
        if (countChar(line, '{')>0)
        {
            count++;
        }
        if (countChar(line, '}')>0)
        {
            count--;
        }

        indent += line + "\n"; 
    }
    return indent;

}