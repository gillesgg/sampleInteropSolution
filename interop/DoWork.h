#pragma once
using namespace System;

#include "pch.h"
#include "framework.h"

namespace ClassLibrary1
{
	public ref class Class1
	{
	public:
		void Show()
		{
			Console::WriteLine("Hello from MSIL");
		}
		void Show(String^ str)
		{
			Console::WriteLine(str);
		}	
	};
}
