#include <iostream>
#include <string>

void run(std::string string) {
	std::cout << string;
}

int main(int argc, char* argv[]) {
	if (argc == 2)
	{
		run(argv[0]);
	}
	else
	{
		std::cout << "How to use the program: provincia <archive_name>.\n";
		return -1;
	}
}