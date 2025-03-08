#include <iostream>
using namespace std;

int main()  { 
//  Define default ingredients to make 48 cookies per batch
const double sugar = 1.5;
  const double butter = 1.0;
  const double flour = 2.75;
  const int cookies = 48;

  // Ask user for number of cookies to make
  int numCookies;
  cout << "How many cookies do you want to make? " << endl;
  cin >> numCookies;
  // Calculate the amount of ingredients needed to make the number of cookies entered by the user
  double sugarNeeded = (sugar*numCookies)/cookies;
  double butterNeeded = (butter*numCookies)/cookies;
  double flourNeeded = (flour*numCookies)/cookies;
  
  
    
  
