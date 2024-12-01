// It converts text files to a bunch of B's
#include "globalVars.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <typeinfo>
#include <cstddef>
#include <cstdlib>
#include <windows.h>
#include <unistd.h>
#include <algorithm>

using namespace std;

void readTextFile()
{
    string filePath;

    cout << "Enter file path." << "\n";

    cin >> filePath;

    ifstream readFile(filePath);

    while (getline (readFile, fileText))
    {

    }

    if (filePath.rfind("C:", 0) == 0)
    {
    }
    else
    {
        cout << "Not a file path" << "\n";
    }
}

void bConversion()
{
    // Upper Case Letters
    replace(fileText.begin(), fileText.end(), 'A', 'B');
    replace(fileText.begin(), fileText.end(), 'B', 'B');
    replace(fileText.begin(), fileText.end(), 'C', 'B');
    replace(fileText.begin(), fileText.end(), 'D', 'B');
    replace(fileText.begin(), fileText.end(), 'E', 'B');
    replace(fileText.begin(), fileText.end(), 'F', 'B');
    replace(fileText.begin(), fileText.end(), 'G', 'B');
    replace(fileText.begin(), fileText.end(), 'H', 'B');
    replace(fileText.begin(), fileText.end(), 'I', 'B');
    replace(fileText.begin(), fileText.end(), 'J', 'B');
    replace(fileText.begin(), fileText.end(), 'K', 'B');
    replace(fileText.begin(), fileText.end(), 'L', 'B');
    replace(fileText.begin(), fileText.end(), 'M', 'B');
    replace(fileText.begin(), fileText.end(), 'N', 'B');
    replace(fileText.begin(), fileText.end(), 'O', 'B');
    replace(fileText.begin(), fileText.end(), 'P', 'B');
    replace(fileText.begin(), fileText.end(), 'Q', 'B');
    replace(fileText.begin(), fileText.end(), 'R', 'B');
    replace(fileText.begin(), fileText.end(), 'S', 'B');
    replace(fileText.begin(), fileText.end(), 'T', 'B');
    replace(fileText.begin(), fileText.end(), 'U', 'B');
    replace(fileText.begin(), fileText.end(), 'V', 'B');
    replace(fileText.begin(), fileText.end(), 'W', 'B');
    replace(fileText.begin(), fileText.end(), 'X', 'B');
    replace(fileText.begin(), fileText.end(), 'Y', 'B');
    replace(fileText.begin(), fileText.end(), 'Z', 'B');

    // Lower Case Letters
    replace(fileText.begin(), fileText.end(), 'a', 'B');
    replace(fileText.begin(), fileText.end(), 'b', 'B');
    replace(fileText.begin(), fileText.end(), 'c', 'B');
    replace(fileText.begin(), fileText.end(), 'd', 'B');
    replace(fileText.begin(), fileText.end(), 'e', 'B');
    replace(fileText.begin(), fileText.end(), 'f', 'B');
    replace(fileText.begin(), fileText.end(), 'g', 'B');
    replace(fileText.begin(), fileText.end(), 'h', 'B');
    replace(fileText.begin(), fileText.end(), 'i', 'B');
    replace(fileText.begin(), fileText.end(), 'j', 'B');
    replace(fileText.begin(), fileText.end(), 'k', 'B');
    replace(fileText.begin(), fileText.end(), 'l', 'B');
    replace(fileText.begin(), fileText.end(), 'm', 'B');
    replace(fileText.begin(), fileText.end(), 'n', 'B');
    replace(fileText.begin(), fileText.end(), 'o', 'B');
    replace(fileText.begin(), fileText.end(), 'p', 'B');
    replace(fileText.begin(), fileText.end(), 'q', 'B');
    replace(fileText.begin(), fileText.end(), 'r', 'B');
    replace(fileText.begin(), fileText.end(), 's', 'B');
    replace(fileText.begin(), fileText.end(), 't', 'B');
    replace(fileText.begin(), fileText.end(), 'u', 'B');
    replace(fileText.begin(), fileText.end(), 'v', 'B');
    replace(fileText.begin(), fileText.end(), 'w', 'B');
    replace(fileText.begin(), fileText.end(), 'x', 'B');
    replace(fileText.begin(), fileText.end(), 'y', 'B');
    replace(fileText.begin(), fileText.end(), 'z', 'B');

    // Numbers
    replace(fileText.begin(), fileText.end(), '0', 'B');
    replace(fileText.begin(), fileText.end(), '1', 'B');
    replace(fileText.begin(), fileText.end(), '2', 'B');
    replace(fileText.begin(), fileText.end(), '3', 'B');
    replace(fileText.begin(), fileText.end(), '4', 'B');
    replace(fileText.begin(), fileText.end(), '5', 'B');
    replace(fileText.begin(), fileText.end(), '6', 'B');
    replace(fileText.begin(), fileText.end(), '7', 'B');
    replace(fileText.begin(), fileText.end(), '8', 'B');
    replace(fileText.begin(), fileText.end(), '9', 'B');

    cout << fileText << "\n";
}

int main()
{
    readTextFile();
    bConversion();

    sleep(10000);
    return 0;
}
