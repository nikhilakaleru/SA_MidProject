// ReserveBook.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "ReserveBook.h"
#include <iostream>
using namespace std;

// This is an example of an exported variable
RESERVEBOOK_API int nReserveBook=0;

// This is an example of an exported function.
RESERVEBOOK_API int fnReserveBook(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CReserveBook::CReserveBook()
{
    return;
}

void CReserveBook::printTesting()
{

    cout << "Reserve book library" << endl;
}
