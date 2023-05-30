#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 10

struct DataItem
{
    int data;
    int key;
};

struct DataItem *hashTable[SIZE];
struct DataItem *dummyItem;
struct DataItem *item;

int hashCode(int key)
{
    return key % SIZE;
}
void hashTableInit()
{
    for (int i = 0; i < SIZE; i++)
    {
        hashTable[i] = NULL;
    }
}

int insert(int key, int data)
{
    struct DataItem *item = (struct DataItem *)malloc(sizeof(struct DataItem));
    item->data = data;
    item->key = key;
    // get the hash
    int hashIndex = hashCode(key);
    if (hashTable[hashIndex] == NULL)
    {
        hashTable[hashIndex] = item;
        printf("\n Key (%d) has been inserted \n", key);
        return 1;
    }
    else
    {
        for (int i = 0; i < SIZE; i++)
        {
            int try = (1 + hashIndex) % SIZE;
            if (hashTable[try] == NULL)
            {
                hashTable[try] = item;
            }
            return 1;
        }
    }
    return 0;
}

struct DataItem *search(int key)
{
    int hashIndex = hashCode(key);
    for (int i = 0; i < SIZE; i++)
    {
        int try = (1 + hashIndex) % SIZE;
        // printf(" try %d  \t",hashTable[try]);
        // printf("\n");
        // if (hashTable[try] != NULL && strcmp(hashTable[try]->key, key) == 0)
        if (hashTable[try] != NULL && hashTable[try]->key == key)
        {
            printf(" (%d,%d) at Index No. %d\n ", hashTable[try]->key, hashTable[try]->data, try);
            return hashTable[try];
        }
    }
    return NULL;
}

void delete (int key)
{
    int hashIndex = hashCode(key);
    if (hashTable[hashIndex] != NULL)
    {
        hashTable[hashIndex] = NULL;

        printf("\n Key (%d) has been removed \n", key);
    }
    else
    {
        printf("\n This key does not exist \n");
    }
}

void display()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf(" %d  \t", i);
        if (hashTable[i] != NULL)
        {
            printf(" (%d,%d)\t \n", hashTable[i]->key, hashTable[i]->data);
        }
        else
            printf(" -- \t \n");
    }
    printf("\n");
}

int main()
{
    dummyItem = (struct DataItem *)malloc(sizeof(struct DataItem));
    dummyItem->data = -1;
    dummyItem->key = -1;
    insert(1, 20);
    insert(2, 70);
    insert(4, 25);
    insert(12, 44);
    // display();
    // delete (2);
    // delete (4);
    // delete (12);
    display();

    search(4);
    // search(12);
    //    item = search(37);

    //    if(item != NULL) {
    //       printf("Element found: %d\n", item->data);
    //    } else {
    //       printf("Element not found\n");
    //    }

    //    delete(item);
    //    item = search(37);

    //    if(item != NULL) {
    //       printf("Element found: %d\n", item->data);
    //    } else {
    //       printf("Element not found\n");
    //    }
}