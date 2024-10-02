#include <iostream>
#include <string>
using namespace std;

// int main() {
//     string str1 = "Hello, ";
//     string str2 = "World!";
    
//     // Using + operator
//     string result = str1 + str2;
//     cout << result << endl;

//     // Using append() function
//     str1.append(str2);
//     cout << str1 << endl;
    
//     return 0;
// }


// int main() {
//     string str = "C++ Programming";
//     cout << "Length: " << str.length() << endl; 
//     cout << "Size: " << str.size() << endl;   

//     return 0;
// }



// int main() {
//     string str = "Hello";
    
//     // Using [] operator
//     cout << "First character: " << str[0] << endl;  // Output: H
    
//     // Using at() function
//     cout << "Third character: " << str.at(2) << endl;  // Output: l
    
//     return 0;
// }


// int main() {
//     string str = "C++ Programming";
    
//     // Extracting a substring
//     string sub = str.substr(4, 13);  // From index 4, extract 11 characters
//     cout << "Substring: " << sub << endl;  // Output: Programming

//     return 0;
// }


// int main() {
//     string str1 = "Apple";
//     string str2 = "Banana";
    
//     // Using == operator
//     if (str1 == str2) {
//         cout << "Strings are equal" << endl;
//     } else {
//         cout << "Strings are not equal" << endl;
//     }

//     // Using compare() function
//     if (str1.compare(str2) < -1) {
//         cout << "str1 is lexicographically smaller than str2" << endl;
//     } else if (str1.compare(str2) > 0) {
//         cout << "str1 is larger" << endl;
//     } else {
//         cout << "Both are equal" << endl;
//     } return 0;}


// int main() {
//     string str = "Hello, World!";
    
//     // Find the position of the substring
//     size_t pos = str.find("World");
    
//     if (pos != string::npos) {
//         cout << "'World' found at index: " << pos << endl;
//     } else {
//         cout << "'World' not found" << endl;
//     }

//     return 0;
// }


// int main() {
//     string str = "Hello, World!";
    
//     // Replace 'World' with 'Zarvis'
//     str.replace(6, 6, "Zarvis");
//     cout << "After replacement: " << str << endl;
    
//     return 0;
// }


// int main() {
//     string str = "Hello World!";
    
//     // Insert 'Zarvis ' at the 6th position (index 5)
//     str.insert(6, "Zarvis ");
//     cout << "After insertion: " << str << endl;
//     return 0;
// }



// int main() {
//     string str = "Hello, World!";
    
//     // Erase 'World'
//     str.erase(7, 5);  // Start at index 7, remove 5 characters
//     cout << "After erasing: " << str << endl;
    
//     return 0;
// }


// int main() {
//     string numStr = "123";
//     int num = stoi(numStr);  // Convert string to int
//     cout << "Integer: " << num << endl;
//     cout << "Type of numStr is " << typeid(numStr).name()<<endl; 
    
//     int number = 456;
//     string numberStr = to_string(number);  // Convert int to string
//     cout << "String: " << numberStr << endl; 
    
//     return 0;
// }


int main() {
    int a = 5;
    double b = 3.14;
    string str = "Hello";
    
    // Use typeid to check the type of each variable
    cout << "Type of a: " << typeid(a).name() << endl;      // Output: int (the output depends on the compiler)
    cout << "Type of b: " << typeid(b).name() << endl;      // Output: double
    cout << "Type of str: " << typeid(str).name() << endl;  // Output: string
    
    return 0;
}
