#include <unistd.h>

int main() {
	char c;
	// adding 'q' check for quitting 
	while(read(STDIN_FILENO, &c, 1) == 1 && c != 'q');	
	return 0;
}
