
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main () {
    
    string op;
    string op2;
    int ans1;
    int ans2;
    int hundred = 100;
    int percent = 7.25;
    
    std::cout << "-----------Welcome to Discovery Bay Golf and Country Club Restaurant-----\n";
    std::cout << "|                 MEAL               |               PRICE              |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|         Chicken Quesadilla         |               $11.50             |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|            Chicken Fries           |               $11.00             |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|        Discovery Bay Burger        |               $15.00             |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|             DB Clubhouse           |                $17               |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|               DESSERT              |               PRICE              |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|              Ice Cream             |               $3.00              |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|               Cookies              |               $3.00              |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|               Brownie              |               $4.00              |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|                 Pie                |               $5.00              |\n";
    std::cout << "-------------------------------------------------------------------------\n";

    cout << "Enter a Meal that you would like to order:";
    cin >> op;
    cout << "Enter a Dessert that you would like to order:\n";
    cin >> op2;
    
    if (op == "Chicken Quesadilla")
        
    {
        ans1 = 11.50;
    }   else if (op == "Chicken Fries") {
        ans1 = 11.00;
    }   else if (op == "Discovery Bay Burger") {
        ans1 = 15.00;
    }   else if (op == "DB Clubhouse") {
        ans1 = 17.00;
    }   else if (op == "Ice Cream") {
        ans1 = 3.00;
    }   else if (op == "Cookies") {
        ans1 = 3.00;
    }   else if (op == "Brownie") {
        ans1 = 4.00;
    }   else  {
        ans1 = 5.00;
    }
    
    if (op2 == "Chicken Quesadilla")
        
    {
        ans2 = 11.50;
    }   else if (op2 == "Chicken Fries") {
        ans2 = 11.00;
    }   else if (op2 == "Discovery Bay Burger") {
        ans2 = 15.00;
    }   else if (op2 == "DB Clubhouse") {
        ans2 = 17.00;
    }   else if (op2 == "Ice Cream") {
        ans2 = 3.00;
    }   else if (op2 == "Cookies") {
        ans2 = 3.00;
    }   else if (op2 == "Brownie") {
        ans2 = 4.00;
    }   else  {
        ans2 = 5.00;
    }
    
    int tax = (ans1 + ans2) / hundred * percent;
    cout << "Sales tax = "<< tax << endl;
    cout << "Your total is "<< ans1 + ans2 + tax <<" and this will go to member charge!"<< endl;
    
    cout << "Thank you for dining with us at Discovery Bay Golf and Country Club!" << endl;
    
    return 0;
}
