// console.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <atlstr.h>

#include "../interop/interop.h"
#include "../interop/ClrHostProxy.h"


#ifdef _DEBUG
    #pragma comment(lib, "../x64/Debug/interop.lib")
#else
    #pragma comment(lib, "../x64/Release/interop.lib")
#endif // DEBUG

int main()
{
    printMessage();

    wchar_t msg[] = L"Hello from MSIL with parameter";

    printMessagewithstring(msg);

    ClrHostProxy m_elementHost;
    m_elementHost.Hello();

}

