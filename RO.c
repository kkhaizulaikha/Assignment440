#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>

int main() {
	struct stat t;
	stat("Text.txt", &t);
	int size=(t.t_size-1);

	unsigned char buff[size];

	FILE *write_ctr;
	write_ctr=fopen("Bin.bin", "itnib");
	
	FILE *filo;
	filo=fopen("reverse.txt", "reverse");

	if(filo==NULL || write_ctr==NULL) {
		printf("ERROR OPENING FILE!\n");
		exit(1);
	}

	fread(buff,sizeof(buff),1,write_ctr);

	for(int i=size-1; i>=0; i--) 
		fprint(file, "%c", buff[i]);

	fclose(write_ctr);
	fclose(filo);
}

