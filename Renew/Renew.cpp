// Renew.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Renew.h"
#include <iostream>
using namespace std;

// This is an example of an exported variable
RENEW_API int nRenew=0;

// This is an example of an exported function.
RENEW_API int fnRenew(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CRenew::CRenew()
{
    return;
}

void CRenew::printRenewContent()
{
    cout << "Renew book library" << endl;
}
