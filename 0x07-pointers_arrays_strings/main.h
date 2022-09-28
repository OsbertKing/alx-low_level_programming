#ifndef _MAIN_
#define _MAIN_

void set_string(char **s, char *t);
void print_diagsums(int *a, int size);
void print_chessboard(char (*a)[8]);
char *strstr(char *haystack, char *needle);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strstr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);

#endif
