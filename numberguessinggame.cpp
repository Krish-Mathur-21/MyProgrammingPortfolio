#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

srand(time(NULL));

int num;
int guess, tries;
num = (rand() % 100) + 1;//Taking 101 in the modulus can actually give us 0 which we don't want

do
{
    cout << "Enter your guess between 1 to 100 : ";
    cin >> guess;
    if (guess > num)
    {
        cout << "guess is to high" << endl;
    }else if (guess < num)
    {
        cout << "guess is to low" << endl;
    }else{
        cout << "Your guess is correct" << endl;
    }
    tries++;    
} while (guess != num);

cout << "you find the number " << num << " in " << tries << " tries." << endl;


return 0;
}