#include <iostream>

int main() {
    int pin = 1234;
    int enteredPin;
    double balance = 100.00;
    bool running = true;
    int choice;

    std::cout << "Enter PIN: ";
    std::cin >> enteredPin;

    if (enteredPin == pin) {
        std::cout << "Access Granted!\n";
        
        while (running) {
            std::cout << "\n1. Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice: ";
            std::cin >> choice;

            switch (choice) {
                case 1:
                    // TODO: Use a for-loop to print **********
                    // Print balance
                    // Use another for-loop to print **********
                    break;
                case 2:
                    // TODO: Ask deposit amount and add to balance
                    break;
                case 3:
                    // TODO: Check if amount <= balance, then subtract
                    break;
                case 4:
                    running = false;
                    break;
                default:
                    std::cout << "Invalid choice.\n";
            }
        }
    } else {
        std::cout << "Access Denied.\n";
    }

    return 0;
}