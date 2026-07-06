#include<iostream>

void digitchar(int i) {
    if (i<0 || i>255) {
        std::cout << "Invalid input. Please enter a number between 0 and 255." << std::endl;
    } else {
        char character = static_cast<char>(i);
        std::cout << "The character corresponding to the ASCII value " << i << " is: " << character << std::endl;
    }
}
int main()  {
    digitchar(65);
    digitchar(256);
    return 0;

}
