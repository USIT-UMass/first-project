#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
	puts("Allocating...");
	unsigned char* arr = malloc(1024);
	puts("Writing...");
	for (int i=0;i<1024;i++) {
		arr[i]=i%256;
	}
	puts("Printing...");
	for (int i=0;i<1024;i++) {
		printf("%d\n",arr[i]);
	}
	puts("Verifying...");
	for (int i=0;i<1024;i++) {
		if (arr[i]!=i%256) {
			puts("ERROR! Mismatch!");
		}
	}
	puts("Freeing memory...");
	free(arr);
}
