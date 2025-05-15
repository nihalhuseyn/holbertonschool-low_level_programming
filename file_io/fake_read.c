#define _GNU_SOURCE
#include <dlfcn.h>
#include <unistd.h>
#include <errno.h>
#include <stdio.h>

/* Function to intercept the read call */
ssize_t read(int fd, void *buf, size_t count) {
    static ssize_t (*real_read)(int, void *, size_t) = NULL;

    /* Get the real read function if it hasn't been assigned already */
    if (!real_read)
        real_read = dlsym(RTLD_NEXT, "read");

    /* Debugging output */
    fprintf(stderr, "Intercepted read() call\n");

    /* Simulate a failure in read() */
    errno = EIO;  /* I/O error */
    return -1;    /* Return failure */
}
