#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


int main()
{

    //This program takes several inputs and adds them to myfile.txt
    //Then it adds the numbers and display in the screen
    //It is a demonstration of using file rather than array
    FILE * ifp = fopen("myfile.txt", "r+"); // read and write mode 
    if (ifp == NULL) // is the file really opened
    {
        fprintf(stderr,"input file could not be opened\n");
        return 1; // failed
    }
    int sum=0,num;
    fseek(ifp, 0, SEEK_END); // Going to the end of the file
    while(1)
    {
        printf("\n Give a number of the student:");
        scanf("%d",&num);   // Taking a number
        if (num<0) break;   // negative number indicates no more numbers
        fprintf(ifp,"%d\n",num); // Adding numbers in the file
    }
    rewind(ifp);// Moving to the beginning

    while(1)
    {
        int i=fscanf(ifp,"%d",&num); // read an integer from file
        if (i == EOF) break;    //End of file reached
        sum+=num; // calculating the summation
    }
    
    printf("\nThe summation is %d",sum); //Printing the summation
    fclose(ifp); // close file

}

