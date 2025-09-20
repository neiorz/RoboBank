
#ifndef HEADER_HPP
#define HEADER_HPP

#include <iostream>
#include <string>

// Function prototypes
void Show(int ms);
double Apply_Deposite(double balance, double amount);
double Apply_withdrawal(double balance, double amount);
double Apply_Fee(double balance, double fee);
double Simple_Interest(double principal, double rate, double time);
double Compound_Amount(double principal, double rate, double time);
double Fx_convert(double value, double fx_rate);
double Percent_Of(double value, double percent);

#endif // HEADER_HPP
