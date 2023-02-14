#pragma once

#include "ImportExport.h"
#include "ManagedObjectProxy.h"


class ClrHostProxy : public CManagedObjectProxy
{
	DECLARE_MANAGED_PROXY(ClrHostProxy, CManagedObjectProxy, NetClassLibrary::Class1);
public:
	InteropDll_ImportExport ClrHostProxy();

	InteropDll_ImportExport void Hello();

	InteropDll_ImportExport void Hello(wchar_t* t);

	

};
