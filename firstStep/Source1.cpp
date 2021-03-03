#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string>
using namespace std;

//void initArray(int** arr, const int n, const int m) {
//    int x = 10, y = 20;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            arr[i][j] = x + rand() % (y - x + 1);
//            cout << arr[i][j] << " ";
//            // arr[i] -> *(arr + i)
//            // arr[i][j] -> *(arr + i) -> arr[i]
//        }
//        cout << endl;
//    }
//    cout << "-----------------\n";
//}
//
//void printArray(int** arr, const int n, const int m) {
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cout << *(*(arr + i) + j) << " ";
//        }
//        cout << endl;
//    }
//}

//void fill(int** arr,const int n,const int m) {
//    int a = -10, b = 10;
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            *(*(arr + i) + j) = a + rand() % (b - a + 1);
//        }
//    }
//}
//
//void print(int** arr, const int n, const int m) {
//    for (int i = 0; i < n; ++i) {
//        for (int j = 0; j < m; ++j) {
//            cout << arr[i][j] << "\t";
//        }
//        cout << endl;
//    }
//}
//
//void push_back(int**& arr, const int n, int& m) {
//    ++m;
//    for (int k = 0; k < n; ++k) {
//        int* temp = new int[m];
//        for (int i = 0; i < m - 1; ++i) {
//            temp[i] = arr[k][i];
//        }
//        temp[m - 1] = 1;
//        delete[] arr[k];
//        arr[k] = temp;
//        temp = nullptr;
//    }
//}
//
//int main() {
//    srand(time(NULL));
//    int n,m;
//    cin >> n >> m;
//    int** pptr = new int* [n];
//    for (int i = 0; i < n; ++i) {
//        pptr[i] = new int[m];
//    }
//    fill(pptr, n, m);
//    print(pptr, n, m);
//    push_back(pptr, n, m);
//    cout << endl;
//    print(pptr, n, m);
//    for (int i = 0; i < n; ++i) {
//        delete[]pptr[i];
//        pptr[i] = nullptr;
//    }
//    delete[] pptr;
//    pptr = nullptr;
//    return 0;
//}

int main() {
	string f;
	cin >> f;
	cout << f.length();
}