#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int
main(int argc, char *argv[])
{
    int abc, encryptkey;
	char *string = NULL;

   
    while ((abc = getopt(argc, argv, "s:k:")) != -1) {
        switch (abc) {
        case 's':
            string = optarg;
            break;
        case 'k':
            encryptkey = atoi(optarg);
            break;
        default: ("No result");
		}
	}
	if(string != NULL)
	{
	int syscall_final = syscall(434,string,encryptkey);
	printf("%c\n",syscall_final);
	}	
	return 0;
}
