
void SelectionSort(int arr[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        int ind = i;
        for (int j = i + 1; j <= n-1; j++) {
            if (arr[j] < arr[ind]) {
                ind = j;
            }
        }
        if (i < ind) {
            int aux = arr[i];
            arr[i] = arr[ind];
            arr[ind] = aux;
        }
    }
}

void OptimisedBubbleSort(int arr[], int n) {
    int s = 0;
    int sorted = 1;
    while (sorted != 0) {
        sorted = 0;
        for (int i = 1; i < n - s; i ++) {
            if (arr[i - 1] > arr[i]) {
                int aux = arr[i];
                arr[i] = arr[i - 1];
                arr[i - 1] = aux;
                sorted = 1;
            }
        }
        s ++;
    }
}

void InsertionSort(int arr[], int n) {
    for (int i = 1; i < n; i ++) {
        int ind = i - 1;
        int a = arr[i];
        while (ind >= 0 && a < arr[ind]) {
            arr[ind + 1] = arr[ind];
            ind --;
        }
        arr[ind + 1] = a;
    }
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right - 1) / 2;

        MergeSort(arr, left, mid);
        MergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void QuickSort(int arr[], int left, int right) {
    int i = left;
    int j = right;
    int a = arr[i];

    while (i != j) {
        while (arr[j] >= a && i < j) {
            j --;
        }
        arr[i] = arr[j];

        while (arr[i] <= a && i < j) {
            i ++;
        }
        arr[j] = arr[i];
    }

    arr[i] = a;
    if (left < i - 1) {
        QuickSort(arr, left, i - 1);
    }
    if (i + 1 < right) {
        QuickSort(arr, i + 1, right);
    }
}