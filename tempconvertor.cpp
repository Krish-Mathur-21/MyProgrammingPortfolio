#include <iostream>
#include <string>
using namespace std;

int main() {
    double temperature;
    char given, choice;

    cout << "Enter temperature value with it's temperature type with a space: ";
    cin >> temperature >> given;

    cout << "Convert into (C/F/K): ";
    cin >> choice;
      
    switch(choice){
        case 'F':
        case 'f':
        if (given == 'F' || given == 'f')
        {
            cout << "temperature: " << temperature << "F" << endl;
        }else if(given == 'C' || given == 'c'){
            cout << "temperature: " << (temperature*(9/5.0)) + 32 << "F" << endl;
        }else if(given == 'K' || given == 'k'){
            cout << "temperature: " << ((temperature - 273.15)*9/5) +32 << "F" << endl;
        }
        break;

        case 'C':
        case 'c':
        if (given == 'C' || given == 'c'){
            cout << "temperature: " << temperature << "C" << endl;
        }else if(given == 'F' || given == 'f'){
            cout << "temperature: " << (temperature - 32)*(5/9.0) << "C" << endl;
        }else if(given == 'K' || given == 'k'){
            cout << "temperature: " << (temperature - 273.15) << "C" << endl;
        }
        break;

        case 'K':
        case 'k':
        if(given == 'K' || given == 'k'){
            cout << "temperature: " << temperature << "K" << endl;
        }else if(given == 'F' || given == 'f'){
            cout << "temperature: " << ((temperature - 32)*(5/9.0)) + 273.15 << "K" << endl;
        }else if(given == 'C' || given == 'c'){
            cout << "temperature: " << (temperature + 273.15) << "K" << endl;
        }
        break;

        default:
        cout << "Invalid operation" << endl;
        break;
        }

        return 0;


}