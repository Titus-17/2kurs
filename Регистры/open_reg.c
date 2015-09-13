#include <stdio.h>
#include <fcntl.h>
// #include <io.h>
// #include <iostream.h>
// #include <sys\stat.h>

FILE	*in;
FILE	*out;
char	dir[10];
char	buf[1000];
int		c;
int 	i;


int main()
{
	printf("Введите название файла. Файл будет считан, а результат операции будет положен в файл rg+.\n");
	scanf("%s", dir);

	in = open (dir, O_RDONLY);
	if (in == -1)
	{
		printf("Невозможно прочитать файл.\n");
		exit(-1);
	}
	c = read(in, buf, 1000);
	printf("%d\n", c);
	close (in);

	for (i = 0; i < c; i++)
		if (buf[i] >= 97 && buf[i] <= 122)
			buf[i] = buf[i] - 32;

	out = open ("rg+", O_CREAT|O_WRONLY, S_IWRITE);
	write(out, buf, c);
	close (out);
}