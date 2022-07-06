// g++ -I ../cat/ main.cpp -o main_app -L ../cat/ -lcat
// LD_LIBRARY_PATH=../cat/ ./main_app

#include <iostream>
#include "cat.hpp"


using namespace std;


int main() {
    cout << cat(5, "Hello", "world", "from main", "demo", "app") << endl;
    return 0;
}

