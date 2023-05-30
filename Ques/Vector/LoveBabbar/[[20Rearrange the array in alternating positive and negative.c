#include <stdio.h>

void rightrotate(int arr[], int n, int outofplace, int cur)
{
   char tmp = arr[cur];
   for (int i = cur; i > outofplace; i--)
      arr[i] = arr[i - 1];
   arr[outofplace] = tmp;
}

void rearrange(int arr[], int n)
{
   int outofplace = -1;

   for (int index = 0; index < n; index++)
   {
      if (outofplace >= 0)
      {
         if (((arr[index] >= 0) && (arr[outofplace] < 0)) || ((arr[index] < 0) && (arr[outofplace] >= 0)))
         {
            rightrotate(arr, n, outofplace, index);

            // the new out-of-place entry is now 2 steps ahead
            if (index - outofplace >= 2)
               outofplace = outofplace + 2;
            else
               outofplace = -1;
         }
      }

      // if no entry has been flagged out-of-place
      if (outofplace == -1)
      {
         // check if current entry is out-of-place
         if (((arr[index] >= 0) && (!(index & 0x01))) || ((arr[index] < 0) && (index & 0x01)))
         {
            outofplace = index;
         }
      }
   }
}

void printArray(int arr[], int n)
{
   for (int i = 0; i < n; i++)
      printf("%d ", arr[i]);
   printf("\n");
}

int main()
{

   int arr[] = { -1, -5, -10, 20, 40, 80 };
   int n=5;


   printf("Given array is \n");
   printArray(arr, n);

   rearrange(arr, n);

   printf("Rearranged array is \n");
   printArray(arr, n);

   return 0;
}