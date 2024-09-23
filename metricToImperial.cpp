/* Name:      Huthsady Legend Boun 
 * Professor: Edwards
 * Date:      Septermber 22, 2024
 * Project:   Convert Metric to Imperial
*/


//Common headers
#include <iostream>
#include <string>


// Global Variable Initialization
double       metricInput = 0;
std::string  metricUnit;

double   numericalConversion = 0;
char     imperialUnit;

char closeQuery;
bool programRunning = true;

// Global Function Initialization (Meat and Potatoes)
void kmToMile(double)
{
  numericalConversion = metricInput * 0.621388;
  imperialUnit        = 'M';
}


void kgToPound(double)
{
  numericalConversion = metricInput * 2.2046;
  imperialUnit        = 'P';
}


void lToQuart(double)
{
  numericalConversion = metricInput * 0.877193;
  imperialUnit        = 'Q';
}

// Main function. Can't have a c++ without them.
int main()
{
  // Just a while loop to keep the program running for convenience
  // More for debug than anything
  while(programRunning == true)
  { 
    std::cout << "Please enter your measurement and metric-unit letter (E.G. 1.4987Km)\n";
  
    std::cin >> metricInput >> metricUnit;
    

    
    // Can't use switch cases with strings. Unless you use std::map, but more it's work that way
    if(metricUnit == "km" || metricUnit == "Km" || metricUnit == "KM")
    {
      kmToMile(metricInput);
    }

    if(metricUnit == "kg" || metricUnit == "Kg" || metricUnit == "KG")
    {
      kgToPound(metricInput);
    }

    if(metricUnit == "l" || metricUnit == "L")
    {
      lToQuart(metricInput);
    }
    
    // Where the user decides to close, or continue converting
    std::cout << "Your conversion is: "<< numericalConversion << imperialUnit 
      << "\nTo continue converting units press [y], to close program [n]\n";

    std::cin >> closeQuery;
    if(closeQuery != 'y')
    {
      programRunning = false;
    }
  }
}
