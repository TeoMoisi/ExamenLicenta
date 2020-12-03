#include <iostream>

//int n = 5;
int possible[3];

//int isValid(int k) {
//    for (int i = 1; i <= k - 1; i ++) {
//        if (X[i] == X[k]) {
//            return 0;
//        }
//    }
//    return 1;
//}
//
//void print() {
//    for (int i = 1; i <= n; i++) {
//        std::cout << X[i];
//    }
//    std::cout << "\n";
//}

//void backRecursive(int k) {
//    for (int i = 1; i <= n; i++) {
//        X[k] = i;
//        if (isValid(k)) {
//            if (k == n) {
//                print();
//            } else {
//                backRecursive(k + 1);
//            }
//        }
//    }
//}
//
//void Afisare() {
//    for (int i = 1; i <= n; i++) {
//        if (X[i] == 1) {
//            std::cout << i;
//        }
//    }
//    std::cout << "\n";
//}
//
//void backRecursive(int k) {
//    for (int i = 0; i <= 1; i++) {
//        X[k] = i;
//        if (k == n) {
//            Afisare();
//        } else {
//            backRecursive(k + 1);
//        }
//    }
//}

void show(int X[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << X[i];
    }
    std::cout << "\n";
}

bool solution(int n, int k) {
    return k == n;
}

bool condToContinue(int k, int v) {
    bool kod = true;
    int i = 1;
    while (kod && i < k) {
        if (possible[i] == v) {
            std::cout << "Here\n";
            kod = false;
        }
    }
    return kod;
}

void backtracking(int n, int k) {
    if (solution(n, k)) {
        show(possible, n);
    } else {
        for (int i = 0; i < n; i ++) {
            if (condToContinue(k + 1, i)) {
                possible[k + 1] = i;
            } else {
                backtracking(n, k + 1);
            }
        }
    }
}