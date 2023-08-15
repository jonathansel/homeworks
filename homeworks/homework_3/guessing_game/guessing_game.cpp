#include <iostream>
#include <random>

using std::cout;
using std::cin;
using std::endl;

int main() {
    cout << "Welcome to the GUESSING GAME!\nI will generate a number and you will guess it!" << endl;
    int smallest{};
    cout << "Please provide the smallest number:" << endl;
    cin >> smallest;
   
    int largest{};
    cout << "Please provide the largest number:" << endl;
    cin >> largest;

    std::random_device random_device;
    std::mt19937 random_engine{random_device()};
    std::uniform_int_distribution distribution{smallest, largest};

    int random_number{distribution(random_engine)};
    int guess{};
    int iterations{};

    cout << "I've generated a number. Try to guess it!" << endl;

    while(true) {
        cout << "Please provide the next guess: ";
        cin >> guess; 
        ++iterations;

        if (guess < random_number) {
            cout << "Your number is too small. Try again!" << endl;
            continue;
        }

        if (guess > random_number) {
            cout << "Your number is too big. Try again!!" << endl;
            continue;
        }

        if (guess == random_number) {
            cout << "You've done it! You guessed the number " << random_number << " in " <<  iterations << " guesses!" << endl;
            break;
        }
    }


}