//FIRST QUESTION: COMPLETED, PERFORMED WELL.
#include <iostream>
#include <string>
#include <cmath> //for flooring numbers to  the dedicated decimal number.
using namespace std;

//firstFunction
void greetingFunction() 
{
	string userName; //the value that is taken from the user.
	string userDestination; //the value that is taken from the user.

	cout << "Welcome to Vacation Planner!" << endl;
	cout << "What is your name? ";
	getline(cin, userName);

	//cin >> userName; when I use cin function, system takes first word of the input.
	cout << "Nice to meet you " << userName << ", where are you travelling to? ";
	getline(cin, userDestination);

	//cin >> userDestination; when I use cin function, system takes first word of the input.
	cout << "Great! " << userDestination << " sounds like a great trip" << endl;
	cout << "***********" << endl;
	cout << endl;
} //inputu da bunun içerisinde alabilirsin. 

void moneyAndTime()
{
	//These are the values. 
	float userDay;
	float userMoney;
	string userLetterCurenncy;
	float turnInUsd;
	float totalHours;
	float totalMinutes;
	float totalSeconds;
	float perDayMoneyInUsd;
	float letterCurrencytotalBudget;
	float perDayMoneyInOtherCurrency;

	cout << endl;
	cout << "How many days are you going to spend travelling? ";
	cin >> userDay;

	cout << "How much money, in USD, are you planning to spend on your trip? ";
	cin >> userMoney;

	cout << "What is the three letter currency symbol for your travel destination? ";
	cin >> userLetterCurenncy;

	cout << "How many " << userLetterCurenncy << " are there in 1 USD? ";
	cin >> turnInUsd;

	cout << endl;
	//We are calculating equivalent of days in regards of hours, minutes, seconds, money
	//that is spent in a day in USD.
	totalHours = userDay * 24; //virgülden sonra iki basamak olabilir
	totalMinutes = totalHours * 60; //virgülden sonra iki basamak olabilir
	totalSeconds = totalMinutes * 60; //virgülden sonra iki basamak olabilir
	perDayMoneyInUsd = floor((userMoney / userDay)*100)/100.0;
	letterCurrencytotalBudget = floor((turnInUsd * userMoney)*100)/100.0;	//total money in userLetterCurrency
	perDayMoneyInOtherCurrency = floor((letterCurrencytotalBudget / userDay)*100)/100.0; //per day money in letter currency
	cout << "If you are travelling for " << userDay << " days that is the same as " << totalHours
		<< " hours or " << totalMinutes << " minutes or " << totalSeconds << endl;
	
	cout << "If you are going to spend $" << userMoney << " USD that means per day you can spend up to $"
		<< perDayMoneyInUsd << " USD" << endl; //perDayMoneyInUSD virgülden sonra iki basamak
	
	cout << "Your total budget in " << userLetterCurenncy << " is " << letterCurrencytotalBudget
		<<" " << userLetterCurenncy << ", which per day is " << perDayMoneyInOtherCurrency <<" " << userLetterCurenncy << endl;

	//virgülden sonra iki basamak: lettercurrencytotalbudget,perdaymoneyınothercurrency

	cout << "***********" << endl;
	cout << endl;
}

void timeDifference() //We are defining time difference between home and destination.
{
	int timeDifference;
	int midnightAtDestination;
	int noonAtDestination;

	cout << "What is the time difference, in hours, between your home and your destination? ";
	cin >> timeDifference;

	midnightAtDestination = (24 + timeDifference) % 24;
	noonAtDestination = (12 + timeDifference + 24) % 24;

	cout << "That means that when it is midnight at home it will be "
		<< midnightAtDestination
		<< ":00 in your travel destination and when it is noon at home it will be "
		<< noonAtDestination << ":00 " << endl;

	cout << "***********" << endl;
}

void convertKmtoMiles() //This function is used for truning kilometers to miles.
{
	float kilometers;
	float miles;

	cout << "What is the square area of your destination country in km2? ";
	cin >> kilometers;

	miles = floor((kilometers * (0.38610))*100.0)/100.0; //We are using this floor function to round numbers. 

	cout << "In miles2 that is " << miles << endl;
	cout << "***********" << endl;
}

int main()
{
	//These are the functions that were created above.
	greetingFunction();
	moneyAndTime();
	timeDifference();
	convertKmtoMiles();
	return 0;
}
