#include <stdio.h>

int main()
{
	FILE *f = stdin;
	FILE *t = fopen("tee.log","a");
	while (!feof(f))
	{
		char c = fgetc(f);
		fputc(c,t);
		putchar(c);
		fflush(t);
	}
	fclose(t);
	return 0;
}
