# Questions

## What's `stdint.h`?

 <stdint.h> is a header file in the C standard library introduced in the C99 standard library section 7.18 to allow programmers to write more portable code by providing a set of typedefs that specify exact-width integer types, together with the defined minimum and maximum allowable values for each type, using macros .

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

C/C++ primitive data types used to specifcy the size or length of bits to be used.

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

A **BYTE** is 1 byte *(8 unsigned bits)*, a **DWORD** is 4 bytes *(32 unsigned bits)*, a **LONG** is 4 bytes *(32 signed bits)*, and a **WORD** is 2 bytes *(16 unsigned bits)*.

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

The BITMAPFILEHEADER is at the start of the file and is used to identify the file. A typical application reads this block first to ensure that the file is actually a BMP file and that it is not damaged.( bfType must be BM.)

**The first 2 bytes of the BMP file format** are:

In **ASCII**: BM
In **Decimal**: 19778
In **hexadecimal**: 0x424d

## What's the difference between `bfSize` and `biSize`?

bfSize is the size, in bytes, of the entire bitmap file.
biSize is the size of the BITMAPINFOHEADER header file. biSize is constant and it equals 40 bytes



## What does it mean if `biHeight` is negative?

 biHeight

Specifies the height of the bitmap, in pixels.

For uncompressed RGB bitmaps, if biHeight is positive, the bitmap is a bottom-up DIB with the origin at the lower left corner. If biHeight is negative, the bitmap is a top-down DIB with the origin at the upper left corner.
For YUV bitmaps, the bitmap is always top-down, regardless of the sign of biHeight. Decoders should offer YUV formats with postive biHeight, but for backward compatibility they should accept YUV formats with either positive or negative biHeight.
For compressed formats, biHeight must be positive, regardless of image orientation.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

Specifies the number of color indexes in the color table that are actually used by the bitmap. If this value is zero, the bitmap uses the maximum number of colors corresponding to the value of the biBitCount member for the compression mode specified by biCompression.
If iClrUsed is nonzero and the biBitCount member is less than 16, the biClrUsed member specifies the actual number of colors the graphics engine or device driver accesses. If biBitCount is 16 or greater, the biClrUsed member specifies the size of the color table used to optimize performance of the system color palettes. If **biBitCount** equals 16 or 32, the optimal color palette starts immediately following the three DWORD masks.

## Why might `fopen` return `NULL` in `copy.c`?

It means that the file might not exist or some permission error occurred while accessing a file such as "Read-Only" or "Write-Protected", so in those cases fopen will return 0 (a NULL pointer).

 - There may be a few reasons why <fopen> would return NULL in line 37 of copy.c. Since the program reaches line 37, there
    seems to be 2 command-line arguments, and since you are writing to a file in line 37, if the file doesn't already exist
    the program will create the file and store it in the current working directory. If the computer cannot
    allocate enough memory to create the desired file, NULL would be returned. Also, there may be a permissions error when
    trying to write to an open file, or you may not have access to that file

## Why is the third argument to `fread` always `1` in our code?

size_t fread(void * buffer, size_t size, size_t count, FILE * stream)
Parameter : The function accepts four mandatory parameters which are described as below:

buffer: it specifies the pointer to the block of memory with a size of at least (size*count) bytes to store the objects.
size: it specifies the size of each objects in bytes. size_t is an unsigned integral type.
**count: it specifies the number of elements, each one with a size of size bytes.** *We only seek to make one copy*
stream: it specifies the file stream to read the data from.

## What value does `copy.c` assign to `padding` if `bi.biWidth` is `3`?

3

## What does `fseek` do?

fseek() is used to move file pointer associated with a given file to a specific position.
Syntax:

int fseek(FILE *pointer, long int offset, int position)
pointer: pointer to a FILE object that identifies the stream.
offset: number of bytes to offset from position
position: position from where offset is added.

returns:
zero if successful, or else it returns a non-zero value 

## What is `SEEK_CUR`?

SEEK_CUR. Specifies that offset is a count of characters from the current file position. This count may be positive or negative. 

SEEK_CUR – It moves file pointer position to given location.
