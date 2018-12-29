#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
	char *addr_ptr;
	addr_ptr = getenv(argv[1]);
	printf("%s ta salvo no end %p\n", argv[1], addr_ptr);
	return 0;
	}

