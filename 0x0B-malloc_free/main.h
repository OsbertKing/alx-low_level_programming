#ifndef _MAIN_
#define _MAIN_

/**
 * strtow - string to words
 * @str: string to go to words
 * Return: char value
 */
char **strtow(char *str);
/**
 * argstostr - args stuff
 * @ac: arguments
 * @av: array of arguments?
 * Return: char array
 */
char *argstostr(int ac, char **av);
/**
 * free_grid - frees a grid
 * @grid: grid to free
 * @height: height of grid
 */
void free_grid(int **grid, int height);
/**
 * str_concat - concats strings
 * @s1: string one to concat
 * @s2: string 2 to concat
 * Return: returns a concated string
 */
char *str_concat(char *s1, char *s2);
/**
 * alloc_grid - creates 2d array
 * @width: width of array
 * @height: height of array
 * Return: pointer of double array
 */
int **alloc_grid(int width, int height);
/**
 * _strdup - copies string
 * @str: string to copy
 * Return: character value
 */
char *_strdup(char *str);
/**
 * create_array - creates array
 * @size: size of array
 * @c: char to initialize
 * Return: char value
 */
char *create_array(unsigned int size, char c);
/**
 * is_palindrome - is palindrome
 * @s: string to do
 * Return: boolean
 */
int is_palindrome(char *s);
/**
 * is_print_number - is prime or not
 * @n: integer to compare
 * Return: boolean
 */
int is_prime_number(int n);
/**
 * _sqrt_recursion - square root of int
 * @n: integer to root
 * Return: int value
 */
int _sqrt_recursion(int n);
/**
 * _pow_recursion - gives power
 * @x: integer to power
 * @y: power to do
 * Return: return integer value
 */
int _pow_recursion(int x, int y);
/**
 * factorial - return factorial
 * @n: number to return
 * Return: factorial or -1
 */
int factorial(int n);
/**
 * _strlen_recursion - gets string length
 * @s: string to count
 * Return: int value
 */
int _strlen_recursion(char *s);
/**
 * _print_rev_recursion - prints reverse with recurse
 * @s: string to print
 */
void _print_rev_recursion(char *s);
/**
 * _puts_recursion - uses recursion
 * @s: string to recurse through
 */
void _puts_recursion(char *s);
/**
 * set_string - sets string to something
 * @s: string to set to
 * @to: set to
 */
void set_string(char **s, char *to);
/**
 * print_diagsums - prints diagonal sums
 * @a: array to do
 * @size: size of arrays
 */
void print_diagsums(int *a, int size);
/**
 * print_chessboard - prints board
 * @a: prints a characters
 *
 */
void print_chessboard(char (*a)[8]);
/**
 * _strstr - locates substring
 * @haystack: string to locate substring
 * @needle: string to locate
 * Return: return string found
 */
char *_strstr(char *haystack, char *needle);
/**
 * _strpbrk - search string for all chars
 * @s: string to search
 * @accept: accepting string
 * Return: return those letters only
 */
char *_strpbrk(char *s, char *accept);
/**
 * _strspan  - length of previx substring
 * @s: string to go through
 * @accept: accept bytes
 * Return: returns usigned int value
 */
unsigned int _strspn(char *s, char *accept);
/**
 * _strchr - locates character in string
 * @s: string to find character
 * @c: character to find
 * Return: found character
 */
char *_strchr(char *s, char c);
/**
 * _memcpy - copies value from src to dest
 * @dest: destination to copy
 * @src: source to copy from
 * @n: amount of times from 0 to copy
 * Return: return string char value
 */
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _memset - set memory to a character
 * @s: value and pointer
 * @b: value to replace at pointers
 * @n: n amount of times to replace
 * Return: returns a pointer to s
 */
char *_memset(char *s, char b, unsigned int n);
/**
 * print_number- prints a number
 * @n: number to print to character
 */
void print_number(int n);
/**
 * rot13 - converts to rot13
 * @s: string to convert to rot13
 * Return: returns a char
 */
char *rot13(char *s);
/**
 * leet - switches characters to 1337
 * @s: string to switch
 *
 * Return: returns character
 */
char *leet(char *s);

#endif
