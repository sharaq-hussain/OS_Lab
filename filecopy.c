//copying file contents
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	int fd1,fd2;
	char ch,fname[20],fnames[20];
	printf("Enter file name to copy content:");
	scanf("%s",fname);
	fd1=open(fname,O_RDONLY);
	
	printf("\nenter destination file:");
	scanf("%s",fnames);
	fd2=open(fnames,O_WRONLY|O_CREAT,0666);
	if(fd1==-1)
	{
		printf("source file not found");
	}
	else
	{
		printf("File created\nAdding some data to file\n");
       		while(read(fd1,&ch,1))
                	write(fd2,&ch,1);
		printf("Data written to file\n");
	}
}
