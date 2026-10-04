#include <stdlib.h>
#include <stdio.h>
#include "tree.h"
/*TODO: only the tree data structure has been included, make sure to "#include" any other data structure .h files if you need them.*/

/*TODO: you are responsible for completing the provided Makefile; you only need to fill in the executable section at the bottom of the Makefile with the gcc command and necessary .o files; do not forget to include tree.o (as it is included here)*/

/*TODO: Notate if you used a partner and the runtime of your implemented algorithm
Partner: 
Big O Time Complexity of below algorithm: O(n)
*/

int main(){

    int i = 0, j = 0;
    int input[2][10] = {{2,3,4,5,6,7,8,12,14,15},
                        {0,2,3,5,6,7,9,10,15,20}};
    int k[2] = {3,8};

    Tree* t;
    for(i = 0; i < 2; i++){
        t = createTree();
        for(j = 0; j < 10; j++){
            insertTreeBalanced(t,input[i][j]);
        }

        /*TODO: code the solution to problem 2 here, the 2 examples above have been provided to show that your solution works; your solution should print 5 for example 1 ({2,3,4,5,6,7,8,12,14,15} with kth index 3) and 15 for example 2 ({0,2,3,5,6,7,9,10,15,20} with kth index 8); make sure your solution uses the created tree and not the input array or you will lose points*/
//IDK WHY THE OUTPUT ISNT WORKINGGGGG??!?!?!?!?!??
        // node finders
        int findKthInOrder(TNode* node, int* count, int k) {
            if (node == NULL) {
                return -1; // return -1 if the node is NULL
            }

            // left tree
            int left = findKthInOrder(node->pLeft, count, k);
            if (left != -1) {
                return left; // shows if found correct node
            }

            // shows number visited
            (*count)++;
            if (*count == k) {
                return node->data; // marks if correct
            }

            // rigfht tree
            return findKthInOrder(node->pRight, count, k);
        }

        // Fixes number endings
        const char* getOrdinalSuffix(int number) {
            if (number % 10 == 1 && number % 100 != 11) {
                return "st";
            } else if (number % 10 == 2 && number % 100 != 12) {
                return "nd";
            } else if (number % 10 == 3 && number % 100 != 13) {
                return "rd";
            } else {
                return "th";
            }
        }

        int count = 0;
        int kthValue = findKthInOrder(t->root, &count, k[i]);
        printf("The %d%s node value in the tree is: %d\n", k[i], getOrdinalSuffix(k[i]), kthValue);

        freeTree(t);
    }

}

/*TODO (optional): you may create additional helper functions to solve your problem if you wish; please be sure to declare your functions before the "main" function or you will likely get some errors*/

