#include <stdio.h>
#include <pthread.h>
#include <assert.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int fd = open("file", O_WRONLY | O_CREAT | O_TRUNC, S_IRWXU);
    assert (fd > -1);
    int rc = write(fd, "hello world\n", 13);
    assert (rc == 13);
    return 0;
}