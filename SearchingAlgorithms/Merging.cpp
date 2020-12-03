void Merge(int X[], int Y[], int n1, int n2, int Z[]) {
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n1 && j < n2) {
        if (X[i] < Y[j]) {
            Z[k] = X[i];
            k++;
            i++;
        } else if (X[i] > Y[j]){
            Z[k] = Y[j];
            k++;
            j++;
        } else {
            Z[k] = X[i];
            k++;
            i++;
            j++;
        }
    }

    while (i < n1) {
        Z[k] = X[i];
        k++;
        i++;
    }

    while (j < n2) {
        Z[k] = Y[j];
        k++;
        j++;
    }
}