// #include <iostream>
// using namespace std;

// int arr3d[2][5][3] = 
// {
//     {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9},
//         {10, 11, 12},
//         {13, 14, 15}
//     },
//     {
//         {16, 17, 18},
//         {19, 20, 21},
//         {22, 23, 24},
//         {25, 26, 27},
//         {28, 29, 30}
//     }
// };

// int main() {
//     for (int i = 0; i < 2; i++) {
//         for (int j = 0; j < 5; j++) {
//             for (int k = 0; k < 3; k++) {
//                 cout << "The Value at " << i << ", " << j << ", " << k << " is " << arr3d[i][j][k] << endl;
//             }
//         }
//     }
    
//     return 0;
// }




#include <iostream>
#include <cxxabi.h> // Include the header for demangling
#include <memory>   // For smart pointers

void demangle(const char* mangledName) {
    int status = 0;
    std::unique_ptr<char, void(*)(void*)> demangledName(
        abi::__cxa_demangle(mangledName, nullptr, nullptr, &status),
        std::free
    );

    if (status == 0) {
        std::cout << "Demangled name: " << demangledName.get() << std::endl;
    } else {
        std::cout << "Failed to demangle name." << std::endl;
    }
}

int main() {
    const char* mangledName = "NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE";
    demangle(mangledName);
    return 0;
}
