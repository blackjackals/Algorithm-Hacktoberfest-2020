// MERGE SORT
#include <stdio.h>
void merge(int arr[], int l, int m, int r) {
    int temp[r - l + 1], p1 = l, p2 = m + 1, k = 0;
    while (p1 <= m && p2 <= r) {
        if (arr[p1] < arr[p2]) {
            temp[k++] = arr[p1++];
        }
        else {
            temp[k++] = arr[p2++];
        }
    }
    while (p1 <= m) {
        temp[k++] = arr[p1++];
    }
    for (int i = 0; i < k; i++) {
        arr[i + l] = temp[i];
    }
}
void mergeSort(int arr[], int l, int r) {
    if (l != r) {
        int m = (l + r) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    mergeSort(arr, 0, n - 1);
    
    for(int j=0;j<n;j++){
    	printf("%d ",arr[j]);
	}
    return 0;
}
