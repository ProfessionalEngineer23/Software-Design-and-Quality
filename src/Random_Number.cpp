#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    srand(static_cast<unsigned int>(time(0))); // Seed random number generator

    int n = rand() % 100 + 1; // Generate random number between 1 and 100

    cout << "Random Number: " << n << endl;

    return 0;
}