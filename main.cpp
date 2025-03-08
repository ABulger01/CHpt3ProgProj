#include <iostream>
#include <random>
using namespace std;

int main() {
  // Step 1: Generate two random numbers between 100 and 999
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis (100,999);
  int randomNumber = dis(gen);
  int randomNumber2 = dis(gen);
  
  // Step 2: DIsplay the two random numbers to the user
  cout << "Hello, Welcome to Math Tutor 101: Solve the following problem\n";
  cout << "Random Number 1: " << randomNumber << endl;
  cout << "Random Number 2: " << randomNumber2 << endl;
  // Step 3: Ask the user to enter the addition of the two numbers
  cout << randomNumber << " + " << randomNumber2 << " = ? " << endl;
  // Step 4: Pause the program and wait for the user to enter the answer
  int userAnswer;
  cin >> userAnswer; 
  cin.get(); // wait for the user to press enter
  
// Step 4: pause to allow the user to enter the answer
  cout << "Press Enter when you are ready to check your answer\n";
  cin.get(); //wait for the user to press enter
  
  // Step 5: Display the correct answer to the user
  cout << "The correct answer is: " << randomNumber + randomNumber2 << endl;
  return 0;
}

  

