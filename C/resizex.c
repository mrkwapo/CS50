#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //declaring a variable to represnt the number needed in argv[1]
    int n = atoi(argv[1]);
    
    //validating we have 3 command line arguments
    if (argc != 4)
    {
        printf("4 arguments only Usage: ./resize n infile outfile \n");
        return 1;
    }
    
    //validating the number is positive but less than or equal to 100
    if (n <= 0 || n > 100)
    {
        printf("n must be between 0-101 Usage: ./resize n infile outfile \n");
        return 1;
    }
    
    for (int i = 0, len = strlen(argv[1]); i < len; i++)
    {
        if(!isdigit(argv[1][i]))
        {
            printf("All of n must be numbers Usage: ./resize n infile outfile \n");
        return 1;
        }
    }
    
     // Declaring file names
    char *infile = argv[2];
    char *outfile = argv[3];
    
    // open input file
    FILE *inptr = fopen(infile, "r");
    if (inptr == NULL)
    {
        printf("Could not open %s.\n", infile);
        return 2;
    }

    // open output file
    FILE *outptr = fopen(outfile, "w");
    if (outptr == NULL)
    {
        fclose(inptr);
        printf("Could not create %s.\n", outfile);
        return 3;
    }
    
        // read infile's BITMAPFILEHEADER
    BITMAPFILEHEADER bf;
    fread(&bf, sizeof(BITMAPFILEHEADER), 1, inptr);

    // read infile's BITMAPINFOHEADER
    BITMAPINFOHEADER bi;
    fread(&bi, sizeof(BITMAPINFOHEADER), 1, inptr);

    // ensure infile is (likely) a 24-bit uncompressed BMP 4.0
    if (bf.bfType != 0x4d42 || bf.bfOffBits != 54 || bi.biSize != 40 ||
        bi.biBitCount != 24 || bi.biCompression != 0)
    {
        fclose(outptr);
        fclose(inptr);
        printf("Unsupported file format.\n");
        return 4;
    }
    
    // write outfile's BITMAPFILEHEADER
    fwrite(&bf, sizeof(BITMAPFILEHEADER), 1, outptr);

    // write outfile's BITMAPINFOHEADER
    fwrite(&bi, sizeof(BITMAPINFOHEADER), 1, outptr);

   

            
           
            
        // close infile
    fclose(inptr);

    // close outfile
    fclose(outptr);
    
    // Free memory
//     free(t);
    return 0;
}
