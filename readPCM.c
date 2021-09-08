//author:crocsman(a. philips)
//date:9/6/2021
#include "readPCM.h"
#include <stdio.h>

int * readPCM()
{

	//create file pointer object to access file
	FILE *fileOpen;
	//initialized obj with filename and access mode	
	//raw data so read using binary mode
	fileOpen  = fopen("fart.raw", "rb"); 
	
	//buffer to store read in data
	int buffer[1];

	//this is return container of all read in 
	static int container[50000];
	int count = 0; 

	//int n = 8;
	//read in one byte, store in buffer
	//2 hex vals = 1 byte = sizeof(int)
	while(0 != fread(buffer,sizeof(int),1,fileOpen))
	{
		int temp = buffer[0];
	//printf("%d",n);
	//printf("%x",temp);
	
	container[count] = temp;
	count++;
	
	}//while
				
		
 

	//close file
	fclose(fileOpen);


	return container;


}//end readPCM







 




//references 
// [1a] youtube tutorial file i/o  https://www.youtube.com/watch?v=8nIilb2kiSU 
// [1b] tutorialspoint c file i/o  https://www.tutorialspoint.com/cprogramming/c_file_io.html 
// [1c] fgetc()                    https://www.tutorialspoint.com/c_standard_library/c_function_fgetc.html
