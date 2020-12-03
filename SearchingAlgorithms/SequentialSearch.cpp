#include <vector>
using namespace std;

int SequentialSearch(int a, vector<int> K) {
    int p = 0;
    if (a <= K[0]) {
        p = 1;
    } else if (a > K[K.size() - 1]) {
        p += K.size() + 1;
    } else {
        for (int i = 1; i < K.size() - 1; i++) {
            if (p == 0 && a <=  K[i]) {
                p = i;
            }
        }
    }
    return p;
}

int SearchSucc(int a, vector<int> K) {
     int p = 1;
     if (a > K[0]) {
         while (p <= K.size() - 1 && a > K[p]) {
             p += 1;
         }
     }

     return p;
}

int SearchSeq(int a, vector<int> K) {
    int p = 1;
    while (p <= K.size() - 1 && a != K[p]) {
        p += 1;
    }
    return p;
}

int BinSearch(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = (left + (right -1)) / 2;

        if (arr[mid] == x) {
            return mid;
        }
        if (arr[mid] > x) {
            return BinSearch(arr, left, mid - 1, x);
        }
        return BinSearch(arr, mid + 1, right, x);
    }
    return -1;
}