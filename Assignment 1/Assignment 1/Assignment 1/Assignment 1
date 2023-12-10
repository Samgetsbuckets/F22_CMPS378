
#include <iostream>
#include <string>
using namespace std;
int main () {

    string op;
    string cardType;
    int num1;
    int ans;
    
    std::cout << "--------------------------Welcome To Gas 4 Taxes-------------------------\n";
    std::cout << "|               GAS TYPE             |               PRICE              |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|               Regular              |               $5.02              |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|               Midgrade             |               $5.22              |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|               Premium              |               $5.42              |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|               Diesel               |               $6.03              |\n";
    std::cout << "-------------------------------------------------------------------------\n";

    cout << "Choose a gas type to fill up your car:";
    cin >> op;
    cout << "How many gallons:";
    cin >> num1;
    if (op == "Regular")
    
    {
        ans = 5.02 * num1;
        cout << "Your total is $"<< ans << "." << endl;
    }   else if (op == "Midgrade") {
        ans = 5.22 * num1;
        cout << "Your total is $"<< ans << "." << endl;
    }   else if (op == "Regular") {
        ans = 5.42 * num1;
        cout << "Your total is $"<< ans << "." << endl;
    }   else {
        ans = 6.02 * num1;
        cout << "Your total is $"<< ans << "." << endl;
    }
        
    cout << "How would you like to pay for it? (Debit Card, Credit Card, Gift Card or Cash)";
    cin >> cardType;
    
    cout << "Great! You have paid the balance of $ "<< ans << " using your " << cardType << "." << endl;
    cout << "Thank you for filling up gas at Gas 4 Taxes, a place to get broke!" << endl;
    
    return 0;
}

