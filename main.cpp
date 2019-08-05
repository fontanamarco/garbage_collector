#include "gc_pointer.h"
#include "LeakTester.h"


int main()
{
	Pointer<int> p1 = new int(19);        
  	p1 = new int(21);        
  	p1 = new int(28);    
	
  	// test copy operator
	Pointer<int>p2;     
	p2 = p1;
	p2 = new int(30);

  	// test copy constructor
	Pointer<int>p3(p2);     
    p3 = new int(33);

   	Pointer<int>::showlist();

    return 0;
}