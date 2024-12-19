
#include <stdio.h>
#include <syslog.h>
#include <errno.h>
#include <string.h>

int main(int argc, char **argv){
	
	openlog(NULL, 0, LOG_USER);



	// if arguments are not passed correctly raise an error and exit
	
	if ( argc != 3 ){

		syslog(LOG_ERR, "Invalid number of arguments:%d\n", argc - 2);
		closelog();
		return 1;
	}

	//open file. IF there is an error opening the file, rasie error and exit
	
	FILE *fptr = fopen(argv[1], "w");

	if( fptr == NULL ){

		syslog(LOG_ERR, "Error opening the file %s\n", strerror(errno));
		closelog();
		return 1;
	}

	//write the content into the file
	
	syslog(LOG_DEBUG,"Writing string %s to the file %s", argv[2], argv[1]);
	fprintf(fptr, argv[2]);

		
	//close the file
	fclose(fptr);
	closelog();	
	return 0;
	

}
