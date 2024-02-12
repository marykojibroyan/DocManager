#include "DocManager.h"
#include <iostream>

int main() {
    DocManager docManager;

    int choice;
    std::string context;

    do {
        std::cout << "Menu:\n";
        std::cout << "1. Create a new document\n";
        std::cout << "2. Edit current document\n";
        std::cout << "3. View current document\n";
        std::cout << "4. Show all documents\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                docManager.create();
                break;
            case 2:
                std::cin.ignore(); // Clear input buffer
                std::cout << "Enter text to append: ";
                std::getline(std::cin, context);
                docManager.edit(context);
                break;
            case 3:
                docManager.view();
                break;
            case 4:
                docManager.show();
                break;
            case 5:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 5);

    return 0;
}

