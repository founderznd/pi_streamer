#include "stdio.h" 
#include "assert.h"

#include "sx_mgmt_sys.h"

int main(void) {

	//parameter is port
	mgmt_sys_init(544);

	mgmt_sys_open();

	return 0;
}

