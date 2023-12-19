#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to add at the end of the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
    FILE *file;

    if (!filename)
    {
        return -1;
    }

    
    file = fopen(filename, "f");
    if (!file)
    {
        return -1;
    }

    if (text_content)
    {
        if (fputs(text_content, file) == EOF)
        {
            fclose(file);
            return -1;
        }
    }

    fclose(file);
    return 1;
}
