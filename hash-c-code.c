#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TABLE_SIZE 7

void initializeTable(int table[])
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        table[i] = -1;
    }
}

int hashFunction(int key)
{
    return key % TABLE_SIZE;
}

int randomProbe(int table[], int index)
{
    int new_index;
    do
    {
        new_index = rand() % TABLE_SIZE;
    } while (table[new_index] != -1);
    return new_index;
}

void insert(int table[], int key)
{
    int index = hashFunction(key);
    if (table[index] == -1)
    {
        table[index] = key;
    }
    else
    {
        int new_index = randomProbe(table, index);
        table[new_index] = key;
    }
}

void displayTable(int table[])
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (table[i] != -1)
        {
            printf("Index %d: %d\n", i, table[i]);
        }
        else
        {
            printf("Index %d: NULL\n", i);
        }
    }
}

int findKeyPosition(int table[], int key)
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (table[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    srand(time(0));

    int hashTable[TABLE_SIZE];
    initializeTable(hashTable);

    int keys[] = {15, 11, 25, 16, 9, 8, 12};
    int numKeys = sizeof(keys) / sizeof(keys[0]);

    for (int i = 0; i < numKeys; i++)
    {
        insert(hashTable, keys[i]);
    }

    displayTable(hashTable);

    int position= findKeyPosition(hashTable, 25);
    printf("The position of key 25 is: %d\n", position);

    return 0;
}
