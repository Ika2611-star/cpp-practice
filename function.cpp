#include<iostream>
using namespace std;

int greetuser(int i) {
    cout<< "Hello User!" <<endl;
    return i+20;
}

int main() {
    int result = greetuser(12);
    cout << "Result: " << result << endl;
    return 0;
}