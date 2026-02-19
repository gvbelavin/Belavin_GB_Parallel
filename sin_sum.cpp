#include <iostream>
#include <cmath>
#include <memory>

#ifndef ARRAY_TYPE
#define ARRAY_TYPE double
#endif

int main() {
    const int N = 10000000;
    std::unique_ptr<ARRAY_TYPE[]> array(new ARRAY_TYPE[N]);
    
    for (size_t i = 0; i < N; ++i) {
        ARRAY_TYPE phase = 2.0 * M_PI * i / N;
        array[i] = sin(phase);
    }
    
    ARRAY_TYPE sum = 0.0;
    for (size_t i = 0; i < N; ++i) {
        sum += array[i];
    }
    
    std::cout << "Type: " << (sizeof(ARRAY_TYPE) == 4 ? "float" : "double") << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    
    return 0;
}
