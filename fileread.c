//program to read file
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd;
	char ch,fname[20];
	printf("Enter file name:");
	scanf("%s",fname);
	fd=open(fname,O_RDONLY);
	if(fd>0)
	{
		while(read(fd,&ch,1))
			putchar(ch);
	}
	else
		printf("File not found");
	return 0;
}
