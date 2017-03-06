/*
 * Write your own version of the Account class.
 */

#ifndef CH07_57_h
#define CH07_57_h

#include <string>

using std::string;

class Account {
public:
	void calculate() { amount += amount * interestRate; }
	static double rate() { return interestRate; }
	static void rate(double newRate) { interestRate = newRate; }

private:
	string owner;
	double amount;
	static double interestRate;
	static constexpr double todayRate = 4.242;
	static double initRate() { return todayRate; }
};

double Account::interestRate = initRate();

#endif