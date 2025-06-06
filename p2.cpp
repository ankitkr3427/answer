#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define N 20   
#define RANGE 10  
void histogram_sort(int arr[], int sorted_arr[], int n, int range) {
    int hist[range], prefix[range];

    
    for (int i = 0; i < range; i++) hist[i] = 0;

    
    #pragma omp parallel for
    for (int i = 0; i < n; i++) {
        #pragma omp atomic
        hist[arr[i] % range]++;
    }

    
    prefix[0] = 0;
    for (int i = 1; i < range; i++) {
        prefix[i] = prefix[i - 1] + hist[i - 1];
    }

    
    #pragma omp parallel for
    for (int i = 0; i < n; i++) {
        int pos = prefix[arr[i] % range]++;
        sorted_arr[pos] = arr[i];
    }
}

int main() {
    int arr[N] = {3, 6, 9, 2, 8, 7, 4, 1, 5, 0, 3, 6, 9, 2, 8, 7, 4, 1, 5, 0};
    int sorted_arr[N];

    histogram_sort(arr, sorted_arr, N, RANGE);

    printf("Sorted Array:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", sorted_arr[i]);
    }
    printf("\n");

    return 0;
}
