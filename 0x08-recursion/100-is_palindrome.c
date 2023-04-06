#include "main.h"

int check_palindrome(char *s, int start, int end);
int get_length(char *s);

/**
* is_palindrome - checks whether  a string is palindrome.
* @s: the char array string.
*
* Return: 1 if it is palindrome, 0 if it is not.
*/

int is_palindrome(char *s)
{
	int length = get_length(s) - 1;

	return (check_palindrome(s, 0, length));
}

/**
* get_length - gets the length of the string.
* @s: the string.
*
* Return: length of string.
*/

int get_length(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + get_length(s + 1));
}

/**
* check_palindrome - helper function that recursively checks
*if a string is palindrome.
* @s: the string to check.
* @start: the starting index of string.
* @end: the ending index of string.
*
* Return: 1 if palindrome or o if not.
*/

int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}
