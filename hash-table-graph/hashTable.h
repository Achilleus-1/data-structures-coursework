#ifndef _hashTableGraph_h
#define _hashTableGraph_h
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

typedef enum hashType{ NAIVE_HASH, FIBONACCI_HASH, UNSORTEDLL_HASH } hashType;

typedef struct hashTableEntry
{
    struct hashTableEntry* nextEntry;   /* pointer to next record stored in this hash table slot */
    long key;				/* unique key associated with this record */
    int data;                        /* data stored in this hash table entry.*/
}  hashTableEntry;

typedef struct hashTable
{
    hashTableEntry** table;             /* hash table.  Stored as an array of pointers to hashTableEntry */
    int tableSize;                     /* size of hash table */

    hashType type;                      /* the type of hashing function to use */
    double A;                           /* value used to insert into the table */

    bool reportCollisions;               /* set to true to count and report collisions */
    long numCollisions;
}  hashTable;

hashTable* createTable( long tableSize );
hashTable* createTableType( long tableSize, hashType type, bool report );
void freeTable( hashTable* ph );

long hashCode( hashTable* ph, long key );
long hashCodeNaive( hashTable* ph, long key );
long hashCodeFibonacci( hashTable* ph, long key );

bool searchTable( hashTable* ph, long key, int* returnData );
void insertTable( hashTable* ph, long key, int data );
#endif
