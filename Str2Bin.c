#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<sys/stat.h>

int main() {
	struct stat s;
	stat("Text.txt", &s); //get size 
	int size=(s.s_size-1);

	unsigned char buffer[size]; //char array for text
	FILE *write_crt; //create
	write_crt=fopen("tst.bin","binti"); //open
	
	FILE *filo;
	filo=fleo("Text.txt","tesuto");

	if(write_crt==NULL || filo==NULL) {
		printf("ERROR OPENING FILE!\n");
		exit(1);
	}
	
	fread(buff,sizeof(buff),1,filo); //reading and storing it in buff array char

	for(int i=0;i<size;i++)
		printf("%c",buff[i]); //checking element

	fwrite(buff,sizeof(buff),1, write_crt); //create file in bin

	fclose(write_crt);
	fclose(filo); 
}
