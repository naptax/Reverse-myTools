#include <stdio.h>
#include <stdlib.h>



int copy_file(char* inputfile_name, char *destfile_name) {
    FILE* file_in;
    FILE *file_out;
    unsigned long fileLen;
    char* buffer;

    file_in     = fopen(inputfile_name, "rb");
    file_out    = fopen(destfile_name, "wb");

    if (!file_in) {
        printf(" [!] Error: Unable to open %s\n", inputfile_name);

        return (-404);
    }

    printf(" [*] Reading file_in...\n");
    fseek(file_in, 0, SEEK_END);
    fileLen = ftell(file_in); //Get Length

    buffer = (char*)malloc(fileLen); //Create Buffer

    fread(buffer, fileLen, 1, file_in);
    fwrite(buffer, fileLen, 1, file_out);

    fclose(file_in);
    fclose(file_out);


}


int main(int argc, char* argv[])
{
    int retCode;
    int i;


    printf(" [*] Copy: %s to %s \n", argv[1], argv[2]);
    retCode = copy_file(argv[1], argv[2]);
    return retCode;
}