#include <iostream>

void showMenu()
{
     std::cout << "**********MENU**********\n";
     std::cout << "1. Check balance\n";
     std::cout << "2. Deposit\n";
     std::cout << "3. Withdraw\n";
     std::cout << "4. Exit\n";
     std::cout << "************************\n";

}


int main() {
     // check balance, deposit, withdraw, show menu
     int option;
     double balance = 500;
     do {
          showMenu();
          std::cout << "Option: ";
          std::cin >> option;

          switch (option) {
               case 1:
                    std::cout << "Balance is: $ " << balance << "\n";
                    break;

               case 2:
                    std::cout << "\nDeposit amount : ";
                    double depositAmount;
                    std::cin >> depositAmount;
                    balance += depositAmount;
                    break;

               case 3:
                    std::cout << "\nWithdraw amount: ";
                    double withdrawAmount;
                    std::cin >> withdrawAmount;
                    if (withdrawAmount <= balance)
                         balance -= withdrawAmount;
                    else
                         std::cout << "\nNot enough money\n";
                    break;
          }
     } while(option != 4);
     return 0;
}
