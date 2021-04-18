#include <stdio.h>
int main()
{
    FILE    *fin = NULL, *fout = NULL;
    char    c;
    int     i = 0;
 
    fin = fopen("Proc.exe", "rb");
    if (fin != NULL)
    {
        fout = fopen("EyeProc.h", "w");
        c = getc(fin);
        i = 2;
        fprintf(fout,
        "unsigned char procData[]={\n\t 0x%02x", (unsigned char)c);
        while (!feof(fin))
        {
            c=getc(fin);
            fprintf(fout,",0x%02x",(unsigned char)c);
            if(i++%8==0)
                fprintf(fout,"\n\t");
        }
        fprintf(fout,"\n};\n");
 
        fclose(fin);
        fclose(fout);
        printf("file write success!\n\n");
        system("PAUSE");
    }
    else
    {
        printf("read file error!\n\n");
        system("PAUSE");
    }
 
    return 0;
}
