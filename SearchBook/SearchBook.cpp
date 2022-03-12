// SearchBook.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "SearchBook.h"
#include <iostream>
using namespace std;


// This is an example of an exported variable
SEARCHBOOK_API int nSearchBook=0;

// This is an example of an exported function.
SEARCHBOOK_API int fnSearchBook(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CSearchBook::CSearchBook()
{
    return;
}

void CSearchBook::printSearch()
{
    cout << "Search book library" << endl;
}
