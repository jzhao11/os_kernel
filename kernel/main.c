
#include <kernel.h>

WINDOW window = {0, 0, 80, 25, 0, 0, ' '};

const char* name = "Jianfei Zhao";

void kernel_main()
{
	clear_window(&window);
	wprintf(&window, "Name: %s\n", name);
	wprintf(&window, "TOS is cool!\n");
	while(1);
}
