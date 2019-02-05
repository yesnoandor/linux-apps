#include <stdio.h>

#include "lib/debug/debug.h"

#include "test1/a.h"
#include "test1/b.h"

#include "test2/c.h"
#include "test1/test3/f.h"

int main(void)
{	
	DbgFuncEntry();

	a_func();
	b_func();
	c_func();
	f_func();
	
	printf("Hello World from t1 Main!\r\n");

	DbgFuncExit();
	
	return 0;
}
