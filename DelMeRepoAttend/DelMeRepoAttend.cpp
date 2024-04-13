// DelMeRepoAttend.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "DelMeRepoAttend.h"


// This is an example of an exported variable
DELMEREPOATTEND_API int nDelMeRepoAttend=0;

// This is an example of an exported function.
DELMEREPOATTEND_API int fnDelMeRepoAttend(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CDelMeRepoAttend::CDelMeRepoAttend()
{
    return;
}

DELMEREPOATTEND_API int testMe(int i)
{
    return i + i;
}