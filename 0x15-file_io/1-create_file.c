#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to stdout
 * @filename: name of the file to read
 * @letters: number of characters to read and print
 * Return: number of characters read and printed, or 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
if (!filename)
return (0);

FILE *fp = fopen(filename, "r");
if (!fp)
return (0);

char *buffer = malloc(letters + 1);
if (!buffer)
{
fclose(fp);
return (0);
}

ssize_t bytes_read = fread(buffer, sizeof(char), letters, fp);
if (bytes_read < 0)
{
free(buffer);
fclose(fp);
return (0);
}

buffer[bytes_read] = '\0';

ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
if (bytes_written != bytes_read)
{
free(buffer);
fclose(fp);
return (0);
}

free(buffer);
fclose(fp);

return (bytes_read);
}
