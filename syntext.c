#include <unistd.h>
#include <termios.h>

//enables raw mode
void enableRawMode();

int main() {

	//calls enable raw mode
	enableRawMode();

	char c;
	// adding 'q' check for quitting 
	while(read(STDIN_FILENO, &c, 1) == 1 && c != 'q');	
	return 0;
}

void enableRawMode() {

	//uses termios struct to get all terminal false
	struct termios raw;

	//gets attirbutes and save it to struct raw
	tcgetattr(STDIN_FILENO, &raw);

	//gets ECHO flag and performs bit wise operation (not and ~ (not)) 
	//to turn off echo
	raw.c_lflag &= ~(ECHO);

	//sets terminal attribute
	tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);

}
