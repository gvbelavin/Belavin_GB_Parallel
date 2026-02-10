#include <iostream>
#include <cmath>

int main() {
    const int N = 10000000;
    double* array = new double[N];
    
    for (int i = 0; i < N; ++i) {
        double phase = 2.0 * M_PI * i / N;
        array[i] = sin(phase);
    }
    
    double sum = 0.0;
    for (int i = 0; i < N; ++i) {
        sum += array[i];
    }
    
    std::cout << sum << std::endl;
    
    delete[] array;
    return 0;
}
