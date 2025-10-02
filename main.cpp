#include <iostream>
#include <stdlib.h>
#include <math.h>

int main () {
  const float PI = 3.14;
  float firstNumber, secondNumber, result;
  int choice;
  
  std::cout << "*************************************************************" << std::endl;
  std::cout << "******************** ADVANCED CALCULATOR ********************" << std::endl;
  std::cout << "*************************************************************" << std::endl;
  std::cout << " 1) Addition\t\t 7) Sine\t\t 13) Logarithm\n 2) Subtraction\t\t 8) Cosine\t\t 14) Base 10 Log\n 3) Multiplication\t 9) Tangent\n 4) Divison\t\t 10) Arcsine\n"
  << " 5) Square Root\t\t 11) Arccosine\n 6) Exponentiation\t 12) Arctangent" << std::endl;
  std::cout << "Choose an operation: ";
  std::cin >> choice;

  switch(choice){
    case 1:
      std::cout << "Enter the first number: ";
      std::cin >> firstNumber;
      std::cout << "Enter the second number: ";
      std::cin >> secondNumber;

      result = firstNumber + secondNumber;
      std::cout << "Your result is: " << result; 
      break;

    case 2:
      std::cout << "Enter the first number: ";
      std::cin >> firstNumber;
      std::cout << "Enter the second number: ";
      std::cin >> secondNumber;

      result = firstNumber - secondNumber;
      std::cout << "Your result is: " << result;
      break;

    case 3:
      std::cout << "Enter the first number: ";
      std::cin >> firstNumber;
      std::cout << "Enter the second number: ";
      std::cin >> secondNumber;

      result = firstNumber * secondNumber;
      std::cout << "Your result is: " << result; 
      break;

    case 4:
      std::cout << "Enter the first number: ";
      std::cin >> firstNumber;
      std::cout << "Enter the second number: ";
      std::cin >> secondNumber;

      result = firstNumber / secondNumber;
      std::cout << "Your result is: " << result;
      break;

    case 5:
      std::cout << "Enter the number for which you want to find the square root: " << std::endl;
      std::cin >> firstNumber;
      
      result = sqrt(firstNumber);
      std::cout << "Your result is: " << result;
      break;
    
    case 6:
      std::cout << "Enter a number: "; 
      std::cin >> firstNumber;
      std::cout << "Enter the exponent power: ";
      std::cin >> secondNumber;
      
      result = pow(firstNumber, secondNumber);
      std::cout << "Your result is: " << result;
      break;
    
    case 7:
      std::cout << "Enter a number for calculating Sine: ";
      std::cin >> firstNumber;
      
      result = sin(firstNumber);
      std::cout << "Your result is: " << result;
      break;

    case 8:
      std::cout << "Enter a number for calculating Cosine: ";
      std::cin >> firstNumber;
      
      result = cos(firstNumber);
      std::cout << "Your result is: " << result;
      break;
    
    case 9:
      std::cout << "Enter a number for calculating Tangent: ";
      std::cin >> firstNumber;
        
      result = tan(firstNumber);
      std::cout << "Your result is: " << result;
      break;

    case 10:
      std::cout << "Enter a number for calculating Arcsine: ";
      std::cin >> firstNumber;
        
      result = asin(firstNumber) * 180 / PI;
      std::cout << "Your result is: " << result;
      break;

    case 11:
      std::cout << "Enter a number for calculating Arccosine: ";
      std::cin >> firstNumber;
        
      result = acos(firstNumber) * 180 / PI;
      std::cout << "Your result is: " << result;
      break;
    
    case 12:
      std::cout << "Enter a number for calculating Arctangent: ";
      std::cin >> firstNumber;
        
      result = atan(firstNumber) * 180 / PI;
      std::cout << "Your result is: " << result;
      break;

    case 13:
      std::cout << "Enter a number for calculating Logarithm: ";
      std::cin >> firstNumber;
        
      result = log(firstNumber);
      std::cout << "Your result is: " << result;
      break;

    case 14:
      std::cout << "Enter a number for calculating Base 10 Logarithm: ";
      std::cin >> firstNumber;
        
      result = log10(firstNumber);
      std::cout << "Your result is: " << result;
      break;



  }

  return 0;
}
