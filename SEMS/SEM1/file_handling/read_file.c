#include <stdio.h>

void main(){
    
    char ch;
    FILE *file;
    
    file = fopen("data_files/read", "r");
    
    
    if ( file ) {
        while ( (ch = getc(file)) != EOF ){   //While not end of file error
            printf("%c",ch);
        }
        
        fclose(file);
    }
    
    
    else printf( "File doesnot Exist" );
    
}
