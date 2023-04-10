#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * Reads a text file and returns the number of letters read
 *
 */
int _putchar(char c);
ssize_t read_text_file(const char *filename, size_t letters;

/**
 * Creates a file with the given text context
 *
 */
int create_file(const char *filename, char *text_content);

/**
 * Appends text to the given file
 *
 */
int append_text_to_file(const char *filename, char *text_content);

#endif
