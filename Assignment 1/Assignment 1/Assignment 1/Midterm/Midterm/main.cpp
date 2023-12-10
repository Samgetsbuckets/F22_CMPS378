
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main () {
    
    string movie;
    string time;
    int age;
    string blockbuster;
    string seating;
    int price;
    int tickets;
    int price2;
    int price3;
    int price4;
    
    std::cout << "------------------------Welcome to Cinemark Theaters---------------------\n";
    std::cout << "|                MOVIE               |               TIME(S)            |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|       Five-Nights-At-Freddy's      | 12:35PM, 1:45PM, 3:10PM, 5:45PM  |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|              Freelance             |                4:15PM             |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    std::cout << "|             The-Marvels            |  2:00PM, 2:30PM, 3:00PM, 3:30PM  |\n";
    std::cout << "-------------------------------------------------------------------------\n";
    
    cout << "How old are you?:";
    cin >> age;
    cout << "Enter the movie that you would like to watch:";
    cin >> movie;
    cout << "How many tickets?:";
    cin >> tickets;
    cout << "Enter the time of the movie:";
    cin >> time;
    cout << "Is the movie a blockbuster, yes or no?";
    cin >> blockbuster;
    cout << "Do you prefer premium seating, yes or no?";
    cin >> seating;
    
    if (age <= 12)
        
    {
        price = 5 * tickets;
    }   else if (age > 12 && age <= 59) {
        price = 10 * tickets;
    }   else {
        price = 7 * tickets;
    }
    
    if (seating == "Yes")
        
    {
        price2 = price + 3;
    }   else {
        price2 = price;
    }
    
    if (time == "5:45PM")
        
    {
        price3 = price2;
    }   else {
        price3 = price2 - 2;
    }
    
    if (blockbuster == "Yes")
    {
        price4 = price3 + 5;
    }   else {
        price4 = price3;
    }
    
    cout << "Total cost for viewing " << movie << " with " << seating << " to premium seating, and " << blockbuster << " to being a blockbuster movie is $" << price4 << ".\n";
    cout << "Thank you for visiting Cinemark Theaters!\n";
    
    return 0;
    
}
