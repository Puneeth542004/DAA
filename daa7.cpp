#include <iostream>
using namespace std;

void strassenMultiply(int A[2][2], int B[2][2], int C[2][2]) {
    int p1 = A[0][0] * (B[0][1] - B[1][1]);
    int p2 = (A[0][0] + A[0][1]) * B[1][1];
    int p3 = (A[1][0] + A[1][1]) * B[0][0];
    int p4 = A[1][1] * (B[1][0] - B[0][0]);
    int p5 = (A[0][0] + A[1][1]) * (B[0][0] + B[1][1]);
    int p6 = (A[0][1] - A[1][1]) * (B[1][0] + B[1][1]);
    int p7 = (A[0][0] - A[1][0]) * (B[0][0] + B[0][1]);

    C[0][0] = p5 + p4 - p2 + p6;
    C[0][1] = p1 + p2;
    C[1][0] = p3 + p4;
    C[1][1] = p5 + p1 - p3 - p7;
}

int main() {
    int A[2][2] = {{1, 2}, {3, 4}};
    int B[2][2] = {{5, 6}, {7, 8}};
    int C[2][2] = {0};

    strassenMultiply(A, B, C);

    cout << "Resultant Matrix: \n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

