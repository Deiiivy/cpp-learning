#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int min = 1, max = 100, random_number, iGuess;
    srand(time(NULL));

    random_number = rand() % (max - min + 1) + min;

    do {
        std::cout << "Enter a number between 1-100: ";
        std::cin >> iGuess;

        if (iGuess < min || iGuess > max) {
            std::cout << "Please enter a valid number between 1 and 100.\n";
            continue;
        }

        if (random_number == iGuess) {
            std::cout << "The number is correct!!\n";
        } else if (random_number < iGuess) {
            std::cout << "The number is lower.\n";  
        } else {
            std::cout << "The number is higher.\n"; 
        }

    } while (random_number != iGuess);

    return 0;
}

