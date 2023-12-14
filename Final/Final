#include <iostream>
#include <vector>
#include <string>
#include <limits>

using namespace std;

struct Book {
    string title;
    string author;
    int year;
};

void readInt(string prompt, int& value) {
    while (true) {
        cout << prompt;
        if (cin >> value) {
            
            break;
        } else {
            
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter an integer.\n";
        }
    }

    cin.ignore();
}

void addBook(vector<Book>& library) {
    Book book;
    cout << "Enter book title: ";
    getline(cin, book.title);
    cout << "Enter book author: ";
    getline(cin, book.author);
    readInt("Enter year of publication: ", book.year);
    library.push_back(book);
    cout << "Book added successfully!\n";
}

void viewBooks(vector<Book>& library) {
    if (library.empty()) {
        cout << "No books in the library." << endl;
        return;
    }
    for (int i = 0; i < library.size(); ++i) {
        cout << i+1 << ". " << library[i].title << " by " << library[i].author << " (" << library[i].year << ")\n";
    }
}

void removeBook(vector<Book>& library) {
    if (library.empty()) {
        cout << "No books in the library." << endl;
        return;
    }
    viewBooks(library);
    int choice;
    readInt("Enter the number of the book to remove: ", choice);
    if (choice < 1 || choice > library.size()) {
        cout << "Invalid book selection.\n";
        return;
    }
    library.erase(library.begin() + choice - 1);
    cout << "Book removed successfully!" << endl;
}

int main() {
    vector<Book> library;
    while (true) {
        cout << "Welcome To Wilson Library!\n"
             << "1. Add a book\n"
             << "2. View all books\n"
             << "3. Remove a book\n"
             << "4. Exit\n"
             << "Enter your choice: ";
        int choice;
        readInt("", choice);
        switch (choice) {
            case 1:
                addBook(library);
                break;
            case 2:
                viewBooks(library);
                break;
            case 3:
                removeBook(library);
                break;
            case 4:
                cout << "Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice.\n";
        }
    }
}
