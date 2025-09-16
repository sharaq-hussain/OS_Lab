//Create and write data to file
#include<stdio.h>
#include<fcntl.h>
int main()
{
	int fd;
	char ch;
	fd=open("file1.txt",O_WRONLY|O_CREAT,0666);
	printf("File created\nAdd some data to file\n");
	while((ch=getchar())!=EOF)
	{
		write(fd,&ch,1);
	}
	printf("Data written to file\n");
	
}
			
