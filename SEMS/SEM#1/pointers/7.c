//Pointers and 2-D arrays.

#include <stdio.h>

#define N 3

int main()
{
    int i;
    int j;
    int a[N][N];
    
    for (i = 0; i < N; i++ ) {
        for (j = 0; j < N; j++ ) {
            a[i][j] = i - j;
        }
    }
    
    printf("a = %p;\n", a);
    printf("&a[0] = %p;\n", &a);
    printf("&a[0][0] = %p;\n", &a[0][0]);
    printf("\n");
    
    printf("a[0] = %p; a[1] = %p\n", a[0], a[1]);
    printf("a+0  = %p; a+1  = %p\n", (a + 0), (a + 1));
    printf("\n");
    
    for (i = 0; i < 2; i++) {
        for (j = 0; j < N; j++) {
            printf("&a[%d][%d] = %p; ", i, j, &a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}

/*
 OUTPUT:
 a = 0x7fff4fc89b90;
 &a[0] = 0x7fff4fc89b90;
 &a[0][0] = 0x7fff4fc89b90;
 
 a[0] = 0x7fff4fc89b90; a[1] = 0x7fff4fc89b9c
 a+0  = 0x7fff4fc89b90; a+1  = 0x7fff4fc89b9c
 
 &a[0][0] = 0x7fff4fc89b90; &a[0][1] = 0x7fff4fc89b94; &a[0][2] = 0x7fff4fc89b98;
 &a[1][0] = 0x7fff4fc89b9c; &a[1][1] = 0x7fff4fc89ba0; &a[1][2] = 0x7fff4fc89ba4;
 */
