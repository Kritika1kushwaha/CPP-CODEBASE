#include <iostream>
using namespace std;
int main () {
    float temp, kelvin, fahrenheit, celsius, inputunit, convertunit, unit;
    cout << "Enter a current temperature: " << endl;
    cin >> temp;
    cout << "enter a unit of your input temperature: 1.kelvin 2.fahrenheit 3.celsius 4.Rankine: " << endl;
    cin >> inputunit;
    cout << "enter a unit of temperature you want to convert: 1. kelvin 2. fahrenheit 3. celsius 4. Rankine: " << endl;
    cin >> convertunit;
    if(inputunit == 1 && convertunit == 2) {
        cout << "temperature in kelvin to fahrenheit is: " << (temp - 273.15) * 9/5 + 32 << endl;
    } else if(inputunit == 1 && convertunit == 3) {
        cout << "temperature in kelvin to celcius is: " << temp - 273.15 << endl;
    } else if(inputunit == 2 && convertunit == 1) {
        cout << "temperature in fahrenheit to kelvin is: " << (temp - 32) * 5/9 + 273.15 << endl;
    } else if(inputunit == 2 && convertunit == 3) {
        cout << "temperature in fahrenheit to celsius is: " << (temp - 32) * 5/9 << endl;
    } else if(inputunit == 3 && convertunit == 1) {
        cout << "temperature in celsius to kelvin is: " << temp + 273.15 << endl;
    } else if(inputunit == 3 && convertunit == 2) {
        cout << "temperature in celsius to fahrenheit is: " << (temp * 9/5) + 32 << endl;
    } else if(inputunit == 4 && convertunit == 1) {
        cout << "temperature in Rankine to kelvin is: " << (temp - 491.67) * 5/9 + 273.15 << endl;
    } else if(inputunit == 4 && convertunit == 2) {
        cout << "temperature in Rankine to fahrenheit is: " << temp - 459.67 << endl;
    } else if(inputunit == 4 && convertunit == 3) {
        cout << "temperature in Rankine to celsius is: " << (temp - 491.67) * 5/9 << endl;
    } else {
        cout << "invalid unit" << endl;
    }

}