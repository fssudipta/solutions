#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int main()
{

    // This program copies the content of a file to another file twice
    // You can use command line parameters for implementing cp command
    FILE * ifp = fopen("myfile.txt", "r"); // read mode 
    if (ifp == NULL) 	// is the file really opened. Will return NULL if the file does not exist in 
			// the current directory
    {
        fprintf(stderr,"input file could not be opened\n");
        return 1; // failed
    }
    FILE * ofp = fopen("yourfile.txt", "w"); // write mode. If no file found creation of the new file
    if (ofp == NULL) // File can not be opened if it is read only. 
    {
        fprintf(stderr,"output file could not be opened\n");
        fclose(ifp); // since opened, close this file
        return 1; // failed
    }
    while(1)
    {
        char mychar = fgetc(ifp); // read from file
        if (mychar == EOF) break;
        fputc(mychar,ofp); // write to file
    }
    rewind(ifp); // Going to the top of input file
    fputc('\n',ofp);
    while(1)
    {
        char mychar = fgetc(ifp); // read from file
        if (mychar == EOF) break;
        fputc(mychar,ofp); // write to file
    }
    fclose(ifp); // close input file
    fclose(ofp); //Close output file
    //If you do not close the content of the file will not be updated.
}


