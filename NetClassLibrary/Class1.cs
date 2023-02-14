using System;
using System.Runtime.InteropServices;

namespace NetClassLibrary
{
    public class Class1
    {

        public void Hello()
        {
            Console.WriteLine("Hello from C#");           
        }
        public void Hello(string v)
        {
            if (v != null)
                Console.WriteLine(v);
        }
    }
}