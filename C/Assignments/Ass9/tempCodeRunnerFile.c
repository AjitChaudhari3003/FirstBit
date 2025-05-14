ar str[] = "Hello, World!";
    char *ptr = memchr(str, 'W', strlen(str));
    if (ptr != NULL)
        printf("Found 'W' at position: %ld\n", ptr - str);
    else
        printf("'W' not found\n");