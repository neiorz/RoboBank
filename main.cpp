
#include "Header.hpp"

int main() {
    int User_Choice;
    double balance = 0, amount = 0, fee = 0, principal = 0, rate = 0, time = 0, value = 0, percent = 0, fx_rate = 0;
    double result = 0;
    while (true) {
        std::cout << "\t\t\tRoboBank Calculator " << std::endl;
        std::cout << "Main Manue........." << std::endl;
        std::cout << "1: Apply_Deposite.\n";
        std::cout << "2: Apply_withdrawal.\n";
        std::cout << "3: Apply_Fee.\n";
        std::cout << "4: Simple_Interest.\n";
        std::cout << "5: Compound_Amount.\n";
        std::cout << "6: Fx_convert.\n";
        std::cout << "7: Percent_Of.\n";
        std::cout << "8: Exit.\n";
        std::cout << "Enter Your Choice: ";
        std::cin >> User_Choice;
        std::cout << "\nWait";
        Show(500);
        system("cls");
        switch (User_Choice) {
        case 1:
            std::cout << "Enter Balance: ";
            std::cin >> balance;
            std::cout << "Enter amount: ";
            std::cin >> amount;
            result = Apply_Deposite(balance, amount);
            std::cout << "Balance after Adding New Deposite: " << result << std::endl;
            Show(30000);
            system("cls");
            break;
        case 2:
            std::cout << "Enter Balance: ";
            std::cin >> balance;
            std::cout << "Enter amount: ";
            std::cin >> amount;
            result = Apply_withdrawal(balance, amount);
            std::cout << "Balance after Withdrawal: " << result << std::endl;
            Show(30000);
            system("cls");
            break;
        case 3:
            std::cout << "Enter Balance: ";
            std::cin >> balance;
            std::cout << "Enter Fee: ";
            std::cin >> fee;
            result = Apply_Fee(balance, fee);
            std::cout << "Balance after Fee: " << result << std::endl;
            Show(30000);
            system("cls");
            break;
        case 4:
            std::cout << "Enter Principal: ";
            std::cin >> principal;
            std::cout << "Enter Rate (%): ";
            std::cin >> rate;
            std::cout << "Enter Time (years): ";
            std::cin >> time;
            result = Simple_Interest(principal, rate, time);
            std::cout << "Simple Interest: " << result << std::endl;
            Show(30000);
            system("cls");
            break;
        case 5:
            std::cout << "Enter Principal: ";
            std::cin >> principal;
            std::cout << "Enter Rate (%): ";
            std::cin >> rate;
            std::cout << "Enter Time (years): ";
            std::cin >> time;
            result = Compound_Amount(principal, rate, time);
            std::cout << "Compound Amount: " << result << std::endl;
            Show(30000);
            system("cls");
            break;
        case 6:
            std::cout << "Enter Value: ";
            std::cin >> value;
            std::cout << "Enter FX Rate: ";
            std::cin >> fx_rate;
            result = Fx_convert(value, fx_rate);
            std::cout << "Converted Value: " << result << std::endl;
            Show(30000);
            system("cls");
            break;
        case 7:
            std::cout << "Enter Value: ";
            std::cin >> value;
            std::cout << "Enter Percent: ";
            std::cin >> percent;
            result = Percent_Of(value, percent);
            std::cout << percent << "% of " << value << " is: " << result << std::endl;
            Show(30000);
            system("cls");
            break;
        case 8:
            std::cout << "Exiting..." << std::endl;
            Show(30000);
            return 0;
        default:
            std::cout << "Invalid Choice!" << std::endl;
            Show(30000);
            system("cls");
        }
    }
    return 0;
}
