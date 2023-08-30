#include <iostream>
#include <vector>
using namespace std;

// time complexity 2^n by recursion
int fibo(int n){
if(n<=1){
    return n;
}
return fibo(n-1)+fibo(n-2);
}
 



 // time complexity log(n)--> using matrix exponentiation
 
typedef vector<vector<long long>> matrix;

const matrix base = {{1, 1}, {1, 0}};

matrix matrix_multiply(const matrix &a, const matrix &b) {
    int size = a.size();
    matrix result(size, vector<long long>(size, 0));

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            for (int k = 0; k < size; ++k) {
                result[i][j] += a[i][k] * b[k][j];
                // result[i][j] = (result[i][j] + a[i][k] * b[k][j]) % 100;
            }
        }
    }

    return result;
}

matrix matrix_power(const matrix &m, int power) {
    if (power == 1)
        return m;

    matrix half_power = matrix_power(m, power / 2);
    matrix result = matrix_multiply(half_power, half_power);

    if (power % 2 == 1)
        result = matrix_multiply(result, m);

    return result;
}

long long nth_fibonacci(int n) {
    if (n == 0)
        return 0;
    
    matrix result = matrix_power(base, n - 1);

    return result[0][0];
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "The " << n << "th Fibonacci number is: " << nth_fibonacci(n) << endl;

    return 0;
}


