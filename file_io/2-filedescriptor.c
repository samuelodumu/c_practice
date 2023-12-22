#include <unistd.h>
#include <fcntl.h>

int main(void)
{
	int fd = open("name.txt", O_RDWR | O_CREAT, S_IRUSR | S_IWUSR);

	write(fd, "Hello, I am Samuel and I turn 20 in October 2024\n", sizeof("Hello, I am Samuel and I turn 20 in October 2024\n"));

	close(fd);
	return (0);
}
