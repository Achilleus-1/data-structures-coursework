#include "array2D.h"

/* mallocs and returns an array2d with the specified length and width*/
array2D* mallocArray2D( int length, int width )
{
    int i;
    array2D *arrayData = (array2D*)malloc( sizeof(array2D) );

    arrayData->length = length;
    arrayData->width = width;
    arrayData->array2D = (int**)malloc(length*sizeof(int*));

    for( i=0; i<arrayData->length; i++ )
        arrayData->array2D[i] = (int*)malloc(arrayData->width*sizeof(int));

    return arrayData;
}

void printArray2D( array2D *arrayData, bool enabled )
{
    int i, j;

    for( i=0; i<arrayData->length; i++ ){
        for( j=0; j<arrayData->width; j++ ){
            printf("%i ", arrayData->array2D[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void freeArray2D( array2D *arrayData )
{
    int i;

    for( i=0; i<arrayData->length; i++ )
        free(arrayData->array2D[i]);
    free( arrayData->array2D );
    free( arrayData );
}
