#include "pch.h"

#include "ClrHostProxy.h"

ClrHostProxy::ClrHostProxy()
	: CManagedObjectProxy(gcnew NetClassLibrary::Class1)
{
}

void ClrHostProxy::Hello()
{
	return (*this)->Hello();
}

void ClrHostProxy::Hello(wchar_t *t)
{
	return (*this)->Hello();
}

