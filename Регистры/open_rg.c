#include <stdio.h>
#include <fcntl.h>

FILE	*in;
FILE	*out;
char	dir[10];
char	buf[1000];
int		c;
int 	i;


int main()
{
	printf("Введите название файла. Файл будет считан, в результат операции будет содержимое файла может измениться.\n");
	scanf("%s", dir);

	in = open (dir, O_RDWR);
	if (in == -1)
	{
		printf("Невозможно прочитать файл.\n");
		exit(-1);
	}
	c = read(in, buf, 1000);

	for (i = 0; i < c; i++)
		if (buf[i] >= 97 && buf[i] <= 122)
			buf[i] = buf[i] - 32;

	write(in, buf, c);
	close (in);
}
