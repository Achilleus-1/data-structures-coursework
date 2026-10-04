#include <stdlib.h>
#include <stdio.h>

/*TODO: no data structures have been included, make sure to "#include" any data structure .h files if you need them.*/

/*TODO: you are responsible for completing the provided Makefile; you only need to fill in the executable section at the bottom of the Makefile with the gcc command and necessary .o files*/

/*TODO: Notate if you used a partner and the runtime of your implemented algorithm
Partner: 
Big O Time Complexity of below algorithm: O(nlogn)
Space Complexity: O(1)
*/

// Function prototypes
void findPairsWithProduct(int arr[], int n, int target);
void findPairsWithProductUnsorted(int arr[], int n, int target);
int compare(const void *a, const void *b);

int main() {
    int inputArray[6] = {5, 8, 9, 4, 6, 3};
    int target = 24;
    
      findPairsWithProductUnsorted(inputArray, 6, target);

     printf("\n");
    
    return 0;
}

// function to find sorted pairs
void findPairsWithProduct(int arr[], int n, int target) {
     int left = 0;
     int right = n - 1;
     int found = 0; // finjds pairs

        while (left < right)
    {
        int product = arr[left] * arr[right];

        if (product == target)
        {
            printf("(%d,%d) ", arr[left], arr[right]);
             found = 1;
                  left++;
                 right--;
        }
         else if (product < target)
        {
             left++;
        }
           else
        {
             right--;
        }
    }
    if (!found) {

         printf("No pairs found");
    }
}

// unsorted finder

 void findPairsWithProductUnsorted(int arr[], int n, int target)
{
         qsort(arr, n, sizeof(int), compare);

      findPairsWithProduct(arr, n, target);
}

// comparison function
int compare(const void *a, const void *b)
{
     return (*(int*)a - *(int*)b);
}

