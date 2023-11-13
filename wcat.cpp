#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv)
{
	int NUM = 100; // this is max charactes per line. It's a variable so it can be changed easily

	for (int i = 1; i < argc; i++){ //iterates through the documents we want to read 
		char myarray[NUM]; // initializing this inside the loop so we get a new one each time
		FILE *fp = fopen(argv[i], "r"); 
		if (fp == NULL){ 
			printf("cannot open file\n");
			return(1);
		}
		while((fgets (myarray, NUM, fp)) != NULL) { // while loop makes it read until the end of document because fgets() stops at a linebreak 
			cout << myarray; 
		}
		fclose(fp);
	}
	return(0);

}
