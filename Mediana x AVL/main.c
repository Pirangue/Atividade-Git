#include <stdio.h>
#include <stdlib.h>
#include "medAVL.h"

int main() {
    int n;
    scanf("%d", &n);
    
    int *arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int *sortedArr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        sortedArr[i] = arr[i];
    }
    qsort(sortedArr, n, sizeof(int), compare);
    
    Node *medianRoot = buildMedianBST(sortedArr, 0, n - 1);
    
    Node *avlRoot = NULL;
    for (int i = 0; i < n; i++) {
        avlRoot = insertAVL(avlRoot, arr[i]);
    }
    
    int result = areTreesEqual(medianRoot, avlRoot);
    printf("%d\n", result);
    
    free(arr);
    free(sortedArr);
    
    return 0;
}