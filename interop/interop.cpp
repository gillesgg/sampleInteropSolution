// interop.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "interop.h"
#include "DoWork.h"
#include "ImportExport.h"

InteropDll_ImportExport void printMessage()
{
	ClassLibrary1::Class1 myClass;
	myClass.Show();

}

InteropDll_ImportExport void printMessagewithstring(wchar_t* message)
{
	ClassLibrary1::Class1 myClass;

	if (message == nullptr)
	{
		return;
	}
	String^ str = gcnew String(message);

	myClass.Show(str);
}