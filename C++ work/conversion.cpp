#include <iostream>

int main() {
  double pesos;
  double reais;
  double soles;
  double dollars;

  std::cout << "Enter number of Colombian pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: "; //std::endl not needed as cin will prompt.
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  double pesoconversion = pesos * 0.00023; //pesos conversion(Colombian)
  double reaisconversion = reais * 0.1661; //Brazillian Reais/real
  double solesconversion = soles * 0.27; //peru soles

  double totalusd = pesoconversion + reaisconversion + solesconversion;

  std::cout << "US Dollars = $" << totalusd << std::endl;
  
}
