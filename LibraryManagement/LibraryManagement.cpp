// LibraryManagement.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "LibraryManagement.h"
#include <iostream>
using namespace std;

// This is an example of an exported variable
LIBRARYMANAGEMENT_API int nLibraryManagement=0;

// This is an example of an exported function.
LIBRARYMANAGEMENT_API int fnLibraryManagement(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CLibraryManagement::CLibraryManagement()
{
    return;
}

void CLibraryManagement::printLibraryMngmt()
{

    std::cout << "Library management library" << endl;
}
