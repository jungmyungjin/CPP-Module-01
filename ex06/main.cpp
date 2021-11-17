
#include "Karen.hpp"

int main(int argc, char **argv)
{
	if (argc == 1)
		exit(1);
	Karen k;

	k.complain(argv[1]);
}
