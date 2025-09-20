
#include <thread>
#include <chrono>
#include <cmath>
#include "Header.hpp"

void Show(int ms) {
    std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

double Apply_Deposite(double balance, double amount) {
    return balance + amount;
}

double Apply_withdrawal(double balance, double amount) {
    if (amount > balance) {
        std::cout << "Insufficient funds!" << std::endl;
        return balance;
    }
    return balance - amount;
}

double Apply_Fee(double balance, double fee) {
    if (fee > balance) {
        std::cout << "Fee exceeds balance!" << std::endl;
        return balance;
    }
    return balance - fee;
}

double Simple_Interest(double principal, double rate, double time) {
    return principal * rate * time / 100.0;
}

double Compound_Amount(double principal, double rate, double time) {
    return principal * pow(1 + rate / 100.0, time);
}

double Fx_convert(double value, double fx_rate) {
    return value * fx_rate;
}

double Percent_Of(double value, double percent) {
    return value * percent / 100.0;
}
