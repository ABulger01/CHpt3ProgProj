#include <iostream>
#include <random>
using namespace std;

int main() {
  // Step 1: Generate a random number between 100 and 999
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis (100,999);
  int randomNumber = dis(gen);
// Step 2: print the random number to the console
  cout << "Random number: " << randomNumber <<endl;
  int randomNumber1 = randomNumber / 100;
  
  
  // Act as a math tutor for a young student
cout << "Welcome to the Simple Math Tutor" << endl;
// Give the user a random math problem
  srand (time(0));
  
}
