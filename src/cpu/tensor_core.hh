

#ifndef __TENSOR_CORE_HH__
#define __TENSOR_CORE_HH__

typedef std::array<int, 16> Matrix;

class tensor_core {
    public:
    
    Matrix A;
    Matrix B;
    Matrix output;
    
    void multiply()
    {
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                int sum = 0;
                for (int k = 0; k < 4; ++k) {
                    sum += A[i * 4 + k] * B[k * 4 + j];
                }
                output[i * 4 + j] = sum;
            }
        }
    }
    
    void add()
    {
        for (int i = 0; i<4; ++i) {
            for (int j = 0; j<4; ++j) {
                output[i * 4 + j] = A[i * 4 + j] + B[i * 4 + j];
            }
        }
    }

};



#endif //__TENSOR_CORE_HH__

