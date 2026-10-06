#include <iostream>
#include <stdlib.h>
using	namespace std;
int main(){
	srand(time(0));
int n, m;
n = 3 + (rand() % 4);
m = 4 + (rand() % 4);

double ** mas = new double*[n];
for (int i = 0;i < n;i++) {
	mas[i] = new double[m];
}
int* B = new int[n];
for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		mas[i][j] = rand() % 10;
	}
}
cout << "Origin array:\n";
for (int i = 0; i < n; i++) {
	for (int j = 0; j < m; j++) {
		cout << mas[i][j] << "\t";
	}
	cout << endl;
}
for (int i = 0; i < n; i++) {
	bool symm = true;
	for (int j = 0; j < m / 2;++j) {
        if (mas[i][j] != mas[i][m - 1 - j]) {
            symm = false; 
            break;               
        }
    }
    if (symm) {
        B[i] = 1;
    }
    else {
        B[i] = 0;
    }
}
cout << "New array:\n";
for (int i = 0; i < n; ++i) {
    cout << "B[" << i << "] = " << B[i] << endl;
}

for (int i = 0; i < n; ++i) {
    delete[] mas[i];
}
delete[] mas;
delete[] B;

return 0;
	}